<?php
/**
 * @file
 * adb_qna.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function adb_qna_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['adb_qna-adb_qna_header'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'adb_qna_header',
    'module' => 'adb_qna',
    'node_types' => array(),
    'pages' => 'qa/*
taxonomy/term/*',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'leaderboard',
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
    'visibility' => 1,
  );

  return $export;
}
