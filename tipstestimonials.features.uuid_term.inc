<?php
/**
 * @file
 * tipstestimonials.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tipstestimonials_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Yogi Berra',
    'description' => 'Yogi Berra quips and quotes (humorous)',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Computer',
    'description' => 'Computer/Technology Tips',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Testimonials',
    'description' => 'Testimonials',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41322eeb-e559-4376-9a03-c9e08fc023d1',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Seller',
    'description' => 'Seller Tips',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Murphy\'s Law',
    'description' => 'Murphy\'s Law ("Whatever can go wrong will go wrong")',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Humorous',
    'description' => 'Humorous quotes and quips',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  $terms[] = array(
    'name' => 'Buyer',
    'description' => 'Buyer Tips',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
    'vocabulary_machine_name' => 'tips',
    'field_tipstatus' => array(),
  );
  return $terms;
}
