<?php

/**
 * @file
 * A handler to output rate widget form of a node.
 *
 * @ingroup views_field_handlers
 */
class AdbViewsRateWidgetFormHandler extends views_handler_area_text {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['content']['#type'] = 'textarea';
  }

  // Empty, so we don't inherit options_submit from the parent.
  function options_submit(&$form, &$form_state) {

  }

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    if ($this->options['tokenize']) {
      // Get node id.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['content'], 0);
      $nid = $this->sanitize_value($value, 'xss_admin');

      // Get current node object.
      $rate_widget = new stdClass;
      $rate_widget->nid = $nid;
      $node = node_load($nid);

      // Get rate widget and render its on views page.
      $rate_widget = '<div class="useful-content"><div class="wrapper-section"><label id="useful">' . t('Was this article useful?') . '</label>';
      $rate_widget .= rate_embed($node, 'rate_useful_content');
      $rate_widget .= '</div></div>';

      return $rate_widget;
    }

    return '';
  }

}
