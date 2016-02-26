<?php
/**
 * @file
 * adb_sector_review.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adb_sector_review_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insight|node|sector_review|form';
  $field_group->group_name = 'group_insight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sector_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Insight',
    'weight' => '9',
    'children' => array(
      0 => 'field_insight_sub_title',
      1 => 'field_insight_description',
      2 => 'field_insight_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insight field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_insight|node|sector_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|sector_review|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sector_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Resources',
    'weight' => '10',
    'children' => array(
      0 => 'field_additional_resources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_resources|node|sector_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sector_analaysis|node|sector_review|form';
  $field_group->group_name = 'group_sector_analaysis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sector_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sector analysis',
    'weight' => '8',
    'children' => array(
      0 => 'field_sector_analysis',
      1 => 'field_description_body',
      2 => 'field_sector_sub_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sector-analaysis field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sector_analaysis|node|sector_review|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Resources');
  t('Insight');
  t('Sector analysis');

  return $field_groups;
}
