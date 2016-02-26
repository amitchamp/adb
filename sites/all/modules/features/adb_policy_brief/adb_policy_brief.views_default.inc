<?php
/**
 * @file
 * adb_policy_brief.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function adb_policy_brief_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'policy_brief';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy Brief';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy Brief';
  $handler->display->display_options['css_class'] = 'wrapper-section';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Footer: Global: Sub-Section Navigation Link */
  $handler->display->display_options['footer']['navigation']['id'] = 'navigation';
  $handler->display->display_options['footer']['navigation']['table'] = 'views';
  $handler->display->display_options['footer']['navigation']['field'] = 'navigation';
  $handler->display->display_options['footer']['navigation']['empty'] = TRUE;
  $handler->display->display_options['footer']['navigation']['content'] = '!1';
  $handler->display->display_options['footer']['navigation']['tokenize'] = TRUE;
  /* Field: Content: Policy options */
  $handler->display->display_options['fields']['field_policy_options']['id'] = 'field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['table'] = 'field_data_field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['field'] = 'field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['label'] = '';
  $handler->display->display_options['fields']['field_policy_options']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_options']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_policy_options']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
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
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'policy_brief' => 'policy_brief',
  );

  /* Display: Policy Brief */
  $handler = $view->new_display('page', 'Policy Brief', 'policy_option');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'section-overview';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_policy_options',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'overview-content';
  /* Field: Content: Policy options */
  $handler->display->display_options['fields']['field_policy_options']['id'] = 'field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['table'] = 'field_data_field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['field'] = 'field_policy_options';
  $handler->display->display_options['fields']['field_policy_options']['label'] = '';
  $handler->display->display_options['fields']['field_policy_options']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_options']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_policy_options']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['path'] = 'policy_option/%';

  /* Display: Recommendations */
  $handler = $view->new_display('page', 'Recommendations', 'recommendations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommendations';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'wrapper-section content-detail-page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'section-overview';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_policy_recommendations',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'overview-content';
  /* Field: Content: Policy recommendations */
  $handler->display->display_options['fields']['field_policy_recommendations']['id'] = 'field_policy_recommendations';
  $handler->display->display_options['fields']['field_policy_recommendations']['table'] = 'field_data_field_policy_recommendations';
  $handler->display->display_options['fields']['field_policy_recommendations']['field'] = 'field_policy_recommendations';
  $handler->display->display_options['fields']['field_policy_recommendations']['label'] = '';
  $handler->display->display_options['fields']['field_policy_recommendations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_recommendations']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_policy_recommendations']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['path'] = 'recommendations/%';

  /* Display: Resources */
  $handler = $view->new_display('page', 'Resources', 'policy_resources');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'wrapper-section additional-resources';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'section-overview';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_additi_reso_policy',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'overview-content';
  /* Field: Content: Additional resources */
  $handler->display->display_options['fields']['field_additi_reso_policy']['id'] = 'field_additi_reso_policy';
  $handler->display->display_options['fields']['field_additi_reso_policy']['table'] = 'field_data_field_additi_reso_policy';
  $handler->display->display_options['fields']['field_additi_reso_policy']['field'] = 'field_additi_reso_policy';
  $handler->display->display_options['fields']['field_additi_reso_policy']['label'] = '';
  $handler->display->display_options['fields']['field_additi_reso_policy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additi_reso_policy']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_additi_reso_policy']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['path'] = 'policy_resources/%';
  $export['policy_brief'] = $view;

  return $export;
}
