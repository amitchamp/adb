<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_print_views_data_alter(&$data) {
  $data['views']['print'] = array(
    'title' => t('Print Link'),
    'help' => t('Show print link of a current page'),
    'area' => array(
      'handler' => 'AdbViewsPrintHandler',
    ),
  );

  $data['views']['printpdf'] = array(
    'title' => t('PDF Link'),
    'help' => t('Show pdf link of a current page'),
    'area' => array(
      'handler' => 'AdbViewsPdfHandler',
    ),
  );
}
