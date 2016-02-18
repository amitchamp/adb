<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_pdf_views_data_alter(&$data) {

  $data['views']['printpdf'] = array(
    'title' => t('PDF Link'),
    'help' => t('Show pdf link of a current page'),
    'area' => array(
      'handler' => 'AdbViewsPdfHandler',
    ),
  );
}
