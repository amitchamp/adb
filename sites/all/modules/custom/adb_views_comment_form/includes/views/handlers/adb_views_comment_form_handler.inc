<?php

/**
 * @file
 * A handler to output comment form of a node.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsCommentFormHandler  extends views_handler_area {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    // Set the default to TRUE so it shows on empty pages by default.
    $options['empty']['default'] = TRUE;
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    $comment = new stdClass;
    $comment->nid = 2;
    $form = drupal_get_form('comment_form', $comment);
    return drupal_render($form);
  }

}
