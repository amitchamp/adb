<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_social_share_views_data_alter(&$data) {
  $data['views']['socialshare'] = array(
    'title' => t('Social Simplified Share'),
    'help' => t('Share current page using social simplified share'),
    'area' => array(
      'handler' => 'AdbViewsShareHandler',
    ),
  );
}
