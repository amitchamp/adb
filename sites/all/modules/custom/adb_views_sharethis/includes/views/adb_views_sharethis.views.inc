<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_sharethis_views_data_alter(&$data) {
  $data['views']['sharethis'] = array(
    'title' => t('Social Sharethis'),
    'help' => t('Share current page using social sharethis'),
    'area' => array(
      'handler' => 'AdbViewsSharethisHandler',
    ),
  );
}
