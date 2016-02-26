<?php
/**
 * @file
 * adb_policy_brief.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adb_policy_brief_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function adb_policy_brief_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function adb_policy_brief_node_info() {
  $items = array(
    'policy_brief' => array(
      'name' => t('Policy brief'),
      'base' => 'node_content',
      'description' => t('Policy brief content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
