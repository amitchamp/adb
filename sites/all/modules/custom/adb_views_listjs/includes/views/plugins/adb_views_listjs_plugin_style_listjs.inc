<?php

/**
 * @file
 * Listjs style plugin.
 */

/**
 * Implements a style type plugin for the Views module.
 */
class AdbViewsListjsPluginStyleListjs extends views_plugin_style {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  /**
   * Show a form to edit the style options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
   * Render the display in this style.
   */
  function render() {
    // Group the rows according to the grouping field, if specified.
    $sets = $this->render_grouping($this->view->result, $this->options['grouping']);

    // Render each group separately and concatenate.
    $output = '';

    foreach ($sets as $title => $rows) {
      $output .= theme($this->theme_functions(), array(
        'view' => $this->view,
        'options' => $this->options,
        'rows' => $rows,
        'title' => $title,
      ));
    }

    return $output;
  }
}
