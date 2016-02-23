<?php

/**
 * @file
 * Theme functions for listjs theme.
 */

/**
 * Add more variables to listjs template.
 */
function template_preprocess_adb_listjs(&$variables) {
  // Alter variables if it is rendered from view.
  if (!empty($variables['view'])) {
    $items = array();
    $view = $variables['view'];

    $row_plugin = $view->style_plugin->row_plugin;

    foreach ($variables['rows'] as $id => $row) {
      // Render the row into a slide
      $view->row_index = $id;
      $item['title'] = $row_plugin->render($row);
      $items[] = $item;
    }

    // Add the items to the variables.
    $variables['items'] = $items;

    // @TODO make this configurable.
    $variables['placeholder_text'] = t('Change this');
  }

  drupal_add_js(drupal_get_path('module', 'adb_views_listjs') . '/js/list.min.js');
  drupal_add_js(drupal_get_path('module', 'adb_views_listjs') . '/js/adb_views_listjs.js');
}
