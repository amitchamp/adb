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
 * Implements hook_fe_date_custom_date_formats().
 */
function adb_case_study_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['j F Y'] = 'j F Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function adb_case_study_date_format_types() {
  $format_types = array();
  // Exported date format type: day_month_year
  $format_types['day_month_year'] = 'day-month-year';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function adb_case_study_image_default_styles() {
  $styles = array();

  // Exported image style: contributor_profile.
  $styles['contributor_profile'] = array(
    'label' => 'Contributor profile',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 102,
          'height' => 102,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_banner_image.
  $styles['node_banner_image'] = array(
    'label' => 'Node banner image',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 1200,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
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
