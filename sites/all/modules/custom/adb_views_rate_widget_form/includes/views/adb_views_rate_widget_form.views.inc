<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_rate_widget_form_views_data_alter(&$data) {
  $data['views']['rate_widget_form'] = array(
    'title' => t('Rate Widget'),
    'help' => t('Show rate widget form in views pages'),
    'area' => array(
      'handler' => 'AdbViewsRateWidgetFormHandler',
    ),
  );
}
