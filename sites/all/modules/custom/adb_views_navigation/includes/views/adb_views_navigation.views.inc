<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_navigation_views_data_alter(&$data) {
  $data['views']['navigation'] = array(
    'title' => t('Sub-Section Navigation Link'),
    'help' => t('Show navigation link of a current page'),
    'area' => array(
      'handler' => 'AdbViewsNavigationHandler',
    ),
  );
}
