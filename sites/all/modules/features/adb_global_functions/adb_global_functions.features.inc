<?php
/**
 * @file
 * adb_global_functions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adb_global_functions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function adb_global_functions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
