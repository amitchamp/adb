<?php

/**
 * @file
 * A handler to output print command of a current page.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsPrintHandler extends views_handler_area_text {

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
    if ($this->options['tokenize']) {
      // Get the print text.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['content'], 0);
      $print_text = $this->sanitize_value($value, 'xss_admin');

      $output = t('<a href="@url">@printtext</a>', array('@url' => url('print/' . current_path()), '@printtext' => $print_text));
    }
    else {
      $output = t('<a href="@url">Print</a>', array('@url' => url('print/' . current_path())));
    }

    return $output;
  }

}