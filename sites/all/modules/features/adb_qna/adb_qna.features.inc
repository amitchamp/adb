<?php
/**
 * @file
 * adb_qna.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adb_qna_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function adb_qna_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function adb_qna_node_info() {
  $items = array(
    'question_answer' => array(
      'name' => t('Question and answer'),
      'base' => 'node_content',
      'description' => t('Create question and answers content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
