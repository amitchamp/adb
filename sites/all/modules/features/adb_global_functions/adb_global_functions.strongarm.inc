<?php
/**
 * @file
 * adb_global_functions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function adb_global_functions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'rate_useful_content',
      'tag' => 'vote',
      'title' => 'Useful content',
      'node_types' => array(
        0 => 'case_study',
        1 => 'policy_brief',
        2 => 'question_answer',
      ),
      'comment_types' => array(
        0 => 'case_study',
        1 => 'policy_brief',
        2 => 'question_answer',
      ),
      'options' => array(
        0 => array(
          0 => '1',
          1 => 'Yes',
        ),
        1 => array(
          0 => '-1',
          1 => 'No',
        ),
      ),
      'template' => 'yesno',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '0',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        1 => '1',
        2 => '2',
        3 => 0,
        4 => 0,
      ),
      'allow_voting_by_author' => 0,
      'noperm_behaviour' => '4',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'option',
      'theme' => 'rate_template_yesno',
      'css' => 'sites/all/modules/contrib/rate/templates/yesno/yesno.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
