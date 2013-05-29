<?php
/**
 * @file
 * work_sample.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function work_sample_taxonomy_default_vocabularies() {
  return array(
    'responsibilities' => array(
      'name' => 'Responsibilities',
      'machine_name' => 'responsibilities',
      'description' => 'List of responsibilities for the project',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
    'work_category' => array(
      'name' => 'Work Category',
      'machine_name' => 'work_category',
      'description' => 'Types of work',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
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
