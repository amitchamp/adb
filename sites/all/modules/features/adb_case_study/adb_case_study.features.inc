<?php
/**
 * @file
 * adb_case_study.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adb_case_study_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function adb_case_study_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function adb_case_study_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => t('Use <em>case study</em> for time-sensitive content like different case study context.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'knowledge_contributor' => array(
      'name' => t('Knowledge contributor'),
      'base' => 'node_content',
      'description' => t('Content relate to contributor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
