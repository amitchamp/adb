<?php
/**
 * @file
 * adb_global_functions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function adb_global_functions_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_footer_slider_text' => array(
      'name' => 'Footer slider text',
      'machine_name' => 'vocabulary_footer_slider_text',
      'description' => 'Add footer slider texts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
