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
  if (isset($current_node) && is_numeric($current_node)) {

    // Create link for sub section menu and combine for continue reading.
    $linklist = array(
      'overview' => array(
        'title' => t('Overview'),
        'href' => 'node/' . $current_node
      ),
      'context' => array(
        'title' => t('Context'),
        'href' => 'context/' . $current_node
      ),
      'challenges' => array(
        'title' => t('Challenges'),
        'href' => 'challenges/' . $current_node
      ),
      'solutions' => array(
        'title' => t('Solutions'),
        'href' => 'solutions/' . $current_node
      ),
      'impact' => array(
        'title' => t('Impact'),
        'href' => 'impact/' . $current_node
      ),
      'lessons' => array(
        'title' => t('Lessons'),
        'href' => 'lessons/' . $current_node
      ),
      'resources' => array(
        'title' => t('Additional resources'),
        'href' => 'resources/' . $current_node
      )
    );
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
