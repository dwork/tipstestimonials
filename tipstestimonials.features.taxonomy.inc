<?php
/**
 * @file
 * tipstestimonials.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tipstestimonials_taxonomy_default_vocabularies() {
  return array(
    'tips' => array(
      'name' => 'Tips',
      'machine_name' => 'tips',
      'description' => 'Rotating Tips',
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
