<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */
/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
  function adaptivetheme_subtheme_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

  }
  // */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
  function adaptivetheme_subtheme_process_html(&$vars) {
  }
  // */


/**
 * Override or insert variables for the page templates.
 */
function adb_preprocess_page(&$vars) {
  // Add class to main content container for pages with sidebar first.
  if (!empty($vars['page']['sidebar_first'])) {
    $vars['main_content_sidebar_first_class'] = 'sidebar-first-pages';
  }
  else {
    $vars['main_content_sidebar_first_class'] = '';
  }
}
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_process_page(&$vars) {
  }
  // */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_node(&$vars) {
  }
  function adaptivetheme_subtheme_process_node(&$vars) {
  }
  // */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_comment(&$vars) {
  }
  function adaptivetheme_subtheme_process_comment(&$vars) {
  }
  // */

/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_block(&$vars) {
  }
  function adaptivetheme_subtheme_process_block(&$vars) {
  }



  /**
 *  Implements theme_preprocess_views_view().
 */
function adb_preprocess_views_view(&$vars) {
  // Store value of views name of check condition.
  $views_name = $vars['view']->name;

  // Check condition for 'more_case_studies' views only.
  if ($views_name == 'more_case_studies') {
    // Get term id from header and convert into integer.
    $term_id = intval(strip_tags($vars['header']));

    // Get term detail using drupal function for display term name.
    $term_deatail = taxonomy_term_load($term_id);
    // Get total number of node associated with given term id.
    $total_nodes = taxonomy_select_nodes($term_id, FALSE);
    $node_count = count($total_nodes) - 1;

    // Create variable named 'term_name' of term name for display.
    $vars['term_name'] = $term_deatail->name;
    // Create variable named 'node_count' for display total number of node in views.
    $vars['node_count'] = $node_count;
  }
}

/**
 * Implements template_preprocess_form_required_marker().
 */
function adb_form_required_marker($variables) {
  // This is also used in the installer, pre-database setup.
  // Do not show the asterisk sign for required field.
  $t = get_t();
  $attributes = array(
    'class' => 'form-required',
    'title' => $t('This field is required.'),
  );
  return '<span' . drupal_attributes($attributes) . '></span>';
}

/**
 * Renders the content of the print page using the theme api.
 * Implements theme_preprocess_print().
 */
function adb_preprocess_print(&$vars, $hook) {
  // Create variable for print pdf template.
  if (isset($vars['node'])) {
    $node = $vars['node'];

    switch ($node->type) {
      case 'case_study':
        // Get value for context field.
        $case_study_context = '<h2>' . t('Case study') . '</h2>' . '<h3>' . t('Context') . '</h3>';
        $context = field_get_items('node', $node, 'field_context');
        $view_field = field_view_value('node', $node, 'field_context', $context[0]);
        $case_study_context .= render($view_field);

        // Get value for challenges field.
        $case_study_challenges = '<h3>' . t('Challenges') . '</h3>';
        $challenges = field_get_items('node', $node, 'field_challenges');
        $view_field = field_view_value('node', $node, 'field_challenges', $challenges[0]);
        $case_study_challenges .= render($view_field);

        // Get value for solutions field.
        $case_study_solutions = '<h3>' . t('Solutions') . '</h3>';
        $solutions = field_get_items('node', $node, 'field_solutions');
        $view_field = field_view_value('node', $node, 'field_solutions', $solutions[0]);
        $case_study_solutions .= render($view_field);

        // Get value for lessons field.
        $case_study_lessons = '<h3>' . t('Lessons') . '</h3>';
        $lessons = field_get_items('node', $node, 'field_lessons');
        $view_field = field_view_value('node', $node, 'field_lessons', $lessons[0]);
        $case_study_lessons .= render($view_field);

        // Get value for additional resources field.
        $case_study_additional_resources = '<h3>' . t('Additional Resources') . '</h3>';
        $additional_resources = field_get_items('node', $node, 'field_additional_resources');
        $view_field = field_view_value('node', $node, 'field_additional_resources', $additional_resources[0]);
        $case_study_additional_resources .= render($view_field);

        $vars['case_study_context'] = $case_study_context;
        $vars['case_study_challenges'] = $case_study_challenges;
        $vars['case_study_solutions'] = $case_study_solutions;
        $vars['case_study_lessons'] = $case_study_lessons;
        $vars['case_study_additional_resources'] = $case_study_additional_resources;
        break;
    }
  }
}
