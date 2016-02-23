<?php
/**
 * @file
 * adb_case_study.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function adb_case_study_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['adb_case_study-comment_form'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'comment_form',
    'module' => 'adb_case_study',
    'node_types' => array(),
    'pages' => 'impact/*
context/*
challenges/*
solutions/*
lessons/*
resources/*',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'comments_section',
        'status' => 1,
        'theme' => 'adb',
        'weight' => -13,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['adb_case_study-rate_widget'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'rate_widget',
    'module' => 'adb_case_study',
    'node_types' => array(),
    'pages' => 'impact/*
context/*
challenges/*
solutions/*
lessons/*
resources/*',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'comments_section',
        'status' => 1,
        'theme' => 'adb',
        'weight' => -14,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['adb_case_study-section_navigation'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'section_navigation',
    'module' => 'adb_case_study',
    'node_types' => array(),
    'pages' => 'impact/*
context/*
challenges/*
solutions/*
lessons/*
resources/*',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => '',
        'status' => 0,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['adb_case_study-subsection_menu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'subsection_menu',
    'module' => 'adb_case_study',
    'node_types' => array(),
    'pages' => 'impact/*
context/*
challenges/*
solutions/*
lessons/*
resources/*',
    'roles' => array(),
    'themes' => array(
      'adb' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adb',
        'weight' => -15,
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
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
