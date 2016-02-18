<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_download_views_data_alter(&$data) {
  $data['views']['printpdf'] = array(
    'title' => t('Download'),
    'help' => t('Show download link of a current page'),
    'area' => array(
      'handler' => 'AdbViewsDownloadHandler',
    ),
  );
}
