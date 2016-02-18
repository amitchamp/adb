<?php
/**
 * @file
 * adb_case_study.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function adb_case_study_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'impact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Impact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Impact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Print Link */
  $handler->display->display_options['header']['print']['id'] = 'print';
  $handler->display->display_options['header']['print']['table'] = 'views';
  $handler->display->display_options['header']['print']['field'] = 'print';
  /* Header: Global: Download */
  $handler->display->display_options['header']['printpdf']['id'] = 'printpdf';
  $handler->display->display_options['header']['printpdf']['table'] = 'views';
  $handler->display->display_options['header']['printpdf']['field'] = 'printpdf';
  /* Header: Global: Social Simplified Share */
  $handler->display->display_options['header']['socialshare']['id'] = 'socialshare';
  $handler->display->display_options['header']['socialshare']['table'] = 'views';
  $handler->display->display_options['header']['socialshare']['field'] = 'socialshare';
  /* Footer: Global: Comment form */
  $handler->display->display_options['footer']['comment_form']['id'] = 'comment_form';
  $handler->display->display_options['footer']['comment_form']['table'] = 'views';
  $handler->display->display_options['footer']['comment_form']['field'] = 'comment_form';
  $handler->display->display_options['footer']['comment_form']['content'] = '!1';
  $handler->display->display_options['footer']['comment_form']['tokenize'] = TRUE;
  /* Relationship: Content: Impact (field_impact) */
  $handler->display->display_options['relationships']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['relationships']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['relationships']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['relationships']['field_impact_value']['label'] = 'field_impact';
  $handler->display->display_options['relationships']['field_impact_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_impact_value']['delta'] = '-1';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'field_topic',
    4 => 'field_tags',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_impact',
    1 => 'field_impact_summary',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Case study-Impact */
  $handler = $view->new_display('page', 'Case study-Impact', 'impact');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_tags',
    2 => 'field_countries',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_topic']['separator'] = '#';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_impact',
    1 => 'field_impact_summary',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Impact */
  $handler->display->display_options['fields']['field_impact']['id'] = 'field_impact';
  $handler->display->display_options['fields']['field_impact']['table'] = 'field_data_field_impact';
  $handler->display->display_options['fields']['field_impact']['field'] = 'field_impact';
  $handler->display->display_options['fields']['field_impact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_impact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_impact']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_impact']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_impact']['separator'] = '';
  /* Field: Content: Impact summary */
  $handler->display->display_options['fields']['field_impact_summary']['id'] = 'field_impact_summary';
  $handler->display->display_options['fields']['field_impact_summary']['table'] = 'field_data_field_impact_summary';
  $handler->display->display_options['fields']['field_impact_summary']['field'] = 'field_impact_summary';
  $handler->display->display_options['fields']['field_impact_summary']['label'] = '';
  $handler->display->display_options['fields']['field_impact_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['relationship'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_impact' => 'field_impact',
  );
  /* Filter criterion: Content: Impact (field_impact) */
  $handler->display->display_options['filters']['field_impact_value']['id'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['table'] = 'field_data_field_impact';
  $handler->display->display_options['filters']['field_impact_value']['field'] = 'field_impact_value';
  $handler->display->display_options['filters']['field_impact_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'impact/%';

  /* Display: Case study-Context */
  $handler = $view->new_display('page', 'Case study-Context', 'context');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Context';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_tags',
    2 => 'field_countries',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_context',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Context */
  $handler->display->display_options['fields']['field_context']['id'] = 'field_context';
  $handler->display->display_options['fields']['field_context']['table'] = 'field_data_field_context';
  $handler->display->display_options['fields']['field_context']['field'] = 'field_context';
  $handler->display->display_options['fields']['field_context']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_context']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Content: Context (field_context) */
  $handler->display->display_options['filters']['field_context_value']['id'] = 'field_context_value';
  $handler->display->display_options['filters']['field_context_value']['table'] = 'field_data_field_context';
  $handler->display->display_options['filters']['field_context_value']['field'] = 'field_context_value';
  $handler->display->display_options['filters']['field_context_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'context/%';

  /* Display: Case study-Challenges */
  $handler = $view->new_display('page', 'Case study-Challenges', 'challenges');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Challenges';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_tags',
    2 => 'field_countries',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_challenges',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Challenges */
  $handler->display->display_options['fields']['field_challenges']['id'] = 'field_challenges';
  $handler->display->display_options['fields']['field_challenges']['table'] = 'field_data_field_challenges';
  $handler->display->display_options['fields']['field_challenges']['field'] = 'field_challenges';
  $handler->display->display_options['fields']['field_challenges']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_challenges']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Content: Challenges (field_challenges) */
  $handler->display->display_options['filters']['field_challenges_value']['id'] = 'field_challenges_value';
  $handler->display->display_options['filters']['field_challenges_value']['table'] = 'field_data_field_challenges';
  $handler->display->display_options['filters']['field_challenges_value']['field'] = 'field_challenges_value';
  $handler->display->display_options['filters']['field_challenges_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'challenges/%';

  /* Display: Case study-Solutions */
  $handler = $view->new_display('page', 'Case study-Solutions', 'solutions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Solutions';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_tags',
    2 => 'field_countries',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['label'] = '';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_solutions',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Solutions */
  $handler->display->display_options['fields']['field_solutions']['id'] = 'field_solutions';
  $handler->display->display_options['fields']['field_solutions']['table'] = 'field_data_field_solutions';
  $handler->display->display_options['fields']['field_solutions']['field'] = 'field_solutions';
  $handler->display->display_options['fields']['field_solutions']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_solutions']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Content: Solutions (field_solutions) */
  $handler->display->display_options['filters']['field_solutions_value']['id'] = 'field_solutions_value';
  $handler->display->display_options['filters']['field_solutions_value']['table'] = 'field_data_field_solutions';
  $handler->display->display_options['filters']['field_solutions_value']['field'] = 'field_solutions_value';
  $handler->display->display_options['filters']['field_solutions_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'solutions/%';

  /* Display: Case study-Lessons */
  $handler = $view->new_display('page', 'Case study-Lessons', 'lessons');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lessons';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_countries',
    2 => 'field_tags',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['label'] = '';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_lessons',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Lessons */
  $handler->display->display_options['fields']['field_lessons']['id'] = 'field_lessons';
  $handler->display->display_options['fields']['field_lessons']['table'] = 'field_data_field_lessons';
  $handler->display->display_options['fields']['field_lessons']['field'] = 'field_lessons';
  $handler->display->display_options['fields']['field_lessons']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_lessons']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Content: Lessons (field_lessons) */
  $handler->display->display_options['filters']['field_lessons_value']['id'] = 'field_lessons_value';
  $handler->display->display_options['filters']['field_lessons_value']['table'] = 'field_data_field_lessons';
  $handler->display->display_options['filters']['field_lessons_value']['field'] = 'field_lessons_value';
  $handler->display->display_options['filters']['field_lessons_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'lessons/%';

  /* Display: Case study-Resources */
  $handler = $view->new_display('page', 'Case study-Resources', 'resources');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Additional resources';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'header';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'type',
    1 => 'title',
    2 => 'field_date',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'tagging';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_topic',
    1 => 'field_tags',
    2 => 'field_countries',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = '#';
  /* Field: Content: Countries */
  $handler->display->display_options['fields']['field_countries']['id'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['table'] = 'field_data_field_countries';
  $handler->display->display_options['fields']['field_countries']['field'] = 'field_countries';
  $handler->display->display_options['fields']['field_countries']['label'] = '';
  $handler->display->display_options['fields']['field_countries']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_countries']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countries']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_countries']['separator'] = '#';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="tagging">[field_topic] [field_tags] [field_countries]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'service-link';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'service_links',
    1 => 'field_download_file',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Download file */
  $handler->display->display_options['fields']['field_download_file']['id'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['table'] = 'field_data_field_download_file';
  $handler->display->display_options['fields']['field_download_file']['field'] = 'field_download_file';
  $handler->display->display_options['fields']['field_download_file']['label'] = 'Download';
  $handler->display->display_options['fields']['field_download_file']['click_sort_column'] = 'fid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'data-body';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_additional_resources',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Content: Additional resources */
  $handler->display->display_options['fields']['field_additional_resources']['id'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['table'] = 'field_data_field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['field'] = 'field_additional_resources';
  $handler->display->display_options['fields']['field_additional_resources']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_additional_resources']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  /* Filter criterion: Content: Additional resources (field_additional_resources) */
  $handler->display->display_options['filters']['field_additional_resources_value']['id'] = 'field_additional_resources_value';
  $handler->display->display_options['filters']['field_additional_resources_value']['table'] = 'field_data_field_additional_resources';
  $handler->display->display_options['filters']['field_additional_resources_value']['field'] = 'field_additional_resources_value';
  $handler->display->display_options['filters']['field_additional_resources_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'resources/%';
  $export['impact'] = $view;

  $view = new view();
  $view->name = 'more_case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'More Case Studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'More Case Studies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'more_case_studies';
  $handler->display->display_options['style_options']['captionfield'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[tid]';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['group_type'] = 'stddev_pop';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'more_case_studies_340x168',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_banner_image']['group_column'] = 'entity_id';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['group_type'] = 'stddev_pop';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'topics' => 'topics',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );

  /* Display: More Case Studies */
  $handler = $view->new_display('block', 'More Case Studies', 'block');
  $handler->display->display_options['block_description'] = 'More Case Studies';
  $export['more_case_studies'] = $view;

  return $export;
}
