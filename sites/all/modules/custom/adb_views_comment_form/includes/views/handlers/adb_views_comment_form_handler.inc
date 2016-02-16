<?php

/**
 * @file
 * A handler to output comment form of a node.
 *
 * @ingroup views_field_handlers
 */

class AdbViewsCommentFormHandler  extends views_handler_area_text {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['content']['#type'] = 'textfield';
  }

  // Empty, so we don't inherit options_submit from the parent.
  function options_submit(&$form, &$form_state) {}

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    if ($this->options['tokenize']) {
      // Get node id.
      // But also make sure output is sanitized.
      $value = $this->view->style_plugin->tokenize_value($this->options['content'], 0);
      $nid = $this->sanitize_value($value, 'xss_admin');

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

    return '';
  }

}
