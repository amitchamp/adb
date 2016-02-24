<?php
/**
 * @file
 * adb_case_study.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adb_case_study_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_subsection|node|case_study|form';
  $field_group->group_name = 'group_case_study_subsection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case study sub-sections',
    'weight' => '9',
    'children' => array(
      0 => 'field_additional_resources',
      1 => 'field_challenges',
      2 => 'field_context',
      3 => 'field_lessons',
      4 => 'field_solutions',
      5 => 'group_impact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-case-study-subsection field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_case_study_subsection|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cost|node|case_study|form';
  $field_group->group_name = 'group_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_snapshot';
  $field_group->data = array(
    'label' => 'Cost Group',
    'weight' => '8',
    'children' => array(
      0 => 'field_cost',
      1 => 'field_cost_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cost field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cost|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_impact|field_collection_item|field_impact|form';
  $field_group->group_name = 'group_data_impact';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_impact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Impact data',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_unit',
      2 => 'field_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-impact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_data_impact|field_collection_item|field_impact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impact|node|case_study|form';
  $field_group->group_name = 'group_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_subsection';
  $field_group->data = array(
    'label' => 'Impact group',
    'weight' => '16',
    'children' => array(
      0 => 'field_impact',
      1 => 'field_impact_summary',
      2 => 'field_impact_sub_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-impact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_impact|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_institution|node|case_study|form';
  $field_group->group_name = 'group_institution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_snapshot';
  $field_group->data = array(
    'label' => 'Institution and stakeholders',
    'weight' => '9',
    'children' => array(
      0 => 'field_institution_stakeholder',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-institution field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_institution|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_snapshot|node|case_study|form';
  $field_group->group_name = 'group_project_snapshot';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project snapshot',
    'weight' => '8',
    'children' => array(
      0 => 'field_project_snapshot',
      1 => 'group_cost',
      2 => 'group_institution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_project_snapshot|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stakeholder|field_collection_item|field_institution_stakeholder|form';
  $field_group->group_name = 'group_stakeholder';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_institution_stakeholder';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Institution and stakeholders',
    'weight' => '0',
    'children' => array(
      0 => 'field_institution_category',
      1 => 'field_institution_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stakeholder field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stakeholder|field_collection_item|field_institution_stakeholder|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Case study sub-sections');
  t('Cost Group');
  t('Impact data');
  t('Impact group');
  t('Institution and stakeholders');
  t('Project snapshot');

  return $field_groups;
}
