<?php

/**
 * @file
 * A handler to output navigaion link of a current page.
 *
 * @ingroup views_field_handlers
 */
class AdbViewsNavigationHandler extends views_handler_area_text {

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
  function options_submit(&$form, &$form_state) {
    
  }

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {

    // Case study features module block function.
    return _adb_case_study_block_subsection_navigation();
  }

}
