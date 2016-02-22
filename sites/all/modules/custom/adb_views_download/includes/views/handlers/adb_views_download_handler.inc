<?php

/**
 * @file
 * A handler to output download of a current page.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsDownloadHandler extends views_handler_area_text {

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
      // Get the download text.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['content'], 0);
      $download_text = $this->sanitize_value($value, 'xss_admin');

      $output = t('<a href="@url" class="download-link">@downloadtext</a>', array('@url' => url('printpdf/' . current_path()), '@downloadtext' => $download_text));
    }
    else {
      $output = t('<a href="@url" class="download-link">Download</a>', array('@url' => url('printpdf/' . current_path())));
    }

    return $output;
  }

}