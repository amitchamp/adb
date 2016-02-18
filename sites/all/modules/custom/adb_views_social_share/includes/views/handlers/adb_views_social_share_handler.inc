<?php

/**
 * @file
 * A handler to output print command of a current page.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsShareHandler extends views_handler_area_text {

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
    $form['content']['#type'] = 'textfield';
  }

  // Empty, so we don't inherit options_submit from the parent.
  function options_submit(&$form, &$form_state) {}

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    $output = '';
    if (variable_get('simplified_social_share_enable_horizontal_share') == 1) {
      simplified_social_share_horizontal_script_code();
      $output .= simplified_social_share_horizontal_sharing_div();
    }

    if (variable_get('simplified_social_share_enable_vertical_share') == 1) {
      simplified_social_share_vertical_script_code();
      $output .= simplified_social_share_vertical_sharing_div();
    }

    return $output;
  }

}
