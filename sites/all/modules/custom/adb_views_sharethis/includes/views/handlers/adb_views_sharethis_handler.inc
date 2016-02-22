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
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  // Empty, so we don't inherit options_submit from the parent.
  function options_submit(&$form, &$form_state) {}

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {

    $data_options = sharethis_get_options_array();
    $path = isset($_GET['q']) ? $_GET['q'] : '<front>';
    if ($path == variable_get('site_frontpage')) {
      $path = "<front>";
    }
    $mPath = url($path, array('absolute' => TRUE));
    $mTitle = decode_entities(drupal_get_title());

    return theme('sharethis', array('data_options' => $data_options, 'm_path' => $mPath, 'm_title' => $mTitle));

  }

}
