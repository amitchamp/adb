<?php
/**
 * @file
 * adb_global_functions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function adb_global_functions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['adb_global_functions-adb_footer'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'adb_footer',
    'module' => 'adb_global_functions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'adb',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['adb_global_functions-adb_profile_access'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'adb_profile_access',
    'module' => 'adb_global_functions',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'adb',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adb',
        'weight' => 10,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
