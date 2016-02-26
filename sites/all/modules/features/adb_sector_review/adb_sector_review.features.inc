<?php
/**
 * @file
 * adb_sector_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adb_sector_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function adb_sector_review_node_info() {
  $items = array(
    'sector_review' => array(
      'name' => t('Sector review'),
      'base' => 'node_content',
      'description' => t('Content define type of sector review.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
