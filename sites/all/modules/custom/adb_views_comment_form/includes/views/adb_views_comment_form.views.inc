<?php

/**
 * @file
 * Views hook implementations.
 */

/**
 * Implements hook_views_data_alter().
 */
function adb_views_comment_form_views_data_alter(&$data) {
  $data['views']['comment_form'] = array(
    'title' => t('Comment form'),
    'help' => t('Show comment form of a node'),
    'area' => array(
      'handler' => 'AdbViewsCommentFormHandler',
    ),
  );
}
