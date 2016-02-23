<?php
/**
 * @file
 * Views hook implementations.
 */

/*
 * Implements hook_views_plugins().
 */
function adb_views_listjs_views_plugins() {
  // Style plugin for the listjs.
  return array(
    'style' => array(
      'adb_views_listjs' => array(
        'title' => t('List.js'),
        'help' => t('Display the results in a list.js widget.'),
        'handler' => 'AdbViewsListjsPluginStyleListjs',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => FALSE,
      ),
    ),
  );
}
