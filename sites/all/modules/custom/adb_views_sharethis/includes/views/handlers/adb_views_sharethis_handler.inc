<?php

/**
 * @file
 * A handler to share current page using sharethis module.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsSharethisHandler extends views_handler_area_text {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['share_path'] = array('default' => '');
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['share_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Share Path'),
      '#default_value' => $this->options['share_path'],
    );

    $form['content']['#type'] = 'textfield';
  }

  // Empty, so we don't inherit options_submit from the parent.
  function options_submit(&$form, &$form_state) { }

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    if ($this->options['tokenize']) {
      // Get share title.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['content'], 0);
      $share_title = $this->sanitize_value($value, 'xss_admin');

      // Get share path.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['share_path'], 0);
      $path = $this->sanitize_value($value, 'xss_admin');
      $share_path = url($path, array('absolute' => TRUE));
    }
    else {
      if (!empty($this->options['content'])) {
        $share_title = $this->options['content'];
      }
      else {
        $share_title = decode_entities(drupal_get_title());    
      }

      if (!empty($this->options['share_path'])) {
        $path = $this->options['share_path'];
        $share_path = url($path, array('absolute' => TRUE));
      }
      else {
        $path = isset($_GET['q']) ? $_GET['q'] : '<front>';
        if ($path == variable_get('site_frontpage')) {
          $path = "<front>";
        }

        $share_path = url($path, array('absolute' => TRUE));
      }
    }

    $data_options = sharethis_get_options_array();

    return theme('sharethis', array(
        'data_options' => $data_options, 
        'm_path' => $share_path, 
        'm_title' => $share_title
      )
    );
  }
}
