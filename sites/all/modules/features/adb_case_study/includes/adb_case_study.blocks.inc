<?php

/**
 * @file
 * ADB case study block callbacks.
 */

/**
 *  Custom function for creating comment form.
 *  @return string
 */
function _adb_case_study_comment_form_block($nid) {
  // Get Comment form block for node.
  $query = db_select('node', 'n')
    ->fields('n', array('type'))
    ->condition('nid', $nid)
    ->execute();
  $node_type = $query->fetchField();
  $comment = new stdClass;
  $comment->nid = $nid;
  $form = drupal_get_form("comment_node_{$node_type}_form", $comment);
  return drupal_render($form);
}

/**
 *  Define menu link for custom section on case study.
 *  We are getting curent node nid and link url for another view content.
 *  @return string
 */
function _adb_case_study_block_sub_sction_menu_content() {

  // Get current path and get node ID.
  $current_path = explode('/', current_path());
  $current_node = $current_path[1];
  $node_wrapper = entity_metadata_wrapper('node', $current_node);
  $node_type = $node_wrapper->type->value();
  $lang_code = $node_wrapper->language->value();
  if (isset($current_node) && is_numeric($current_node)) {
    switch ($node_type) {
      case 'case_study':
        // Create link for sub section menu and combine for continue reading.
        $linklist = array(
          'overview' => array(
            'title' => t('Overview'),
            'href' => 'node/' . $current_node
          ),
          'context' => array(
            'title' => $node_wrapper->field_context->value()->field_value[$lang_code][0]['value'],
            'href' => 'context/' . $current_node
          ),
          'impact' => array(
            'title' => $node_wrapper->field_impact_sub_title->value(),
            'href' => 'impact/' . $current_node
          ),
          'challenges' => array(
            'title' => $node_wrapper->field_challenges->value()->field_value[$lang_code][0]['value'],
            'href' => 'challenges/' . $current_node
          ),
          'lessons' => array(
            'title' => $node_wrapper->field_lessons->value()->field_value[$lang_code][0]['value'],
            'href' => 'lessons/' . $current_node
          ),
          'solutions' => array(
            'title' => $node_wrapper->field_solutions->value()->field_value[$lang_code][0]['value'],
            'href' => 'solutions/' . $current_node
          ),
          'resources' => array(
            'title' => $node_wrapper->field_additional_resources->value()->field_value[$lang_code][0]['value'],
            'href' => 'resources/' . $current_node
        ));
        break;
      case 'policy_brief':

        // Create link for sub section menu and combine for continue reading.
        $linklist = array(
          'overview' => array(
            'title' => t('Overview'),
            'href' => 'node/' . $current_node
          ),
          'policy_option' => array(
            'title' => $node_wrapper->field_policy_options->value()->field_value[$lang_code][0]['value'],
            'href' => 'policy_option/' . $current_node
          ),
          'recommendations' => array(
            'title' => $node_wrapper->field_policy_recommendations->value()->field_value[$lang_code][0]['value'],
            'href' => 'recommendations/' . $current_node
          ),
          'policy_resources' => array(
            'title' => $node_wrapper->field_additi_reso_policy->value()->field_value[$lang_code][0]['value'],
            'href' => 'policy_resources/' . $current_node
        ));

        break;
    }
  }


  // Call render list items.
  return adb_case_study_get_theme_list_content($linklist);
}

/**
 *  Custom function for creating rate widget form.
 *  @return string
 */
function _adb_case_study_rate_widget_block($nid) {
  $node = node_load($nid);
  // Get rate widget and render its on views page.
  $rate_widget = '<div class="useful-content"><div class="wrapper-section"><label id="useful">' . t('Was this article useful?') . '</label>';
  $rate_widget .= rate_embed($node, 'rate_useful_content');
  $rate_widget .= '</div></div>';
  return $rate_widget;
}
