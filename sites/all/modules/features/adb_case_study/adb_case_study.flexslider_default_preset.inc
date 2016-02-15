<?php
/**
 * @file
 * adb_case_study.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function adb_case_study_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'more_case_studies';
  $preset->title = 'More Case Studies';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'linear',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '210',
    'itemMargin' => '5',
    'minItems' => '1',
    'maxItems' => '3',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 0,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '1',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 1,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['more_case_studies'] = $preset;

  return $export;
}
