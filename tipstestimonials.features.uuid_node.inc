<?php
/**
 * @file
 * tipstestimonials.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function tipstestimonials_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Deja Vu',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c78941c3-5f50-41e2-b526-66cb3b97e914',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1398021780,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1e5bc8ca-1519-4c05-b9a5-366db0006d98',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This is like deja vu all over again',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>This is like deja vu all over again</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_author' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_more_info' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-04-20 12:23:00 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Pre-qualify',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fae65966-6799-42a4-b711-0705f39382f9',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1398098098,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f33bf6e1-76c6-4538-a290-0737232fd648',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Sellers will know your offer is "real" if you have already been pre-qualified (or even better - pre-approved) for a loan. If your offer is not "contingent" upon obtaining financing, you may be able to negotiate better terms in other areas.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Sellers will know your offer is &quot;real&quot; if you have already been pre-qualified (or even better - pre-approved) for a loan. If your offer is not &quot;contingent&quot; upon obtaining financing, you may be able to negotiate better terms in other areas.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_author' => array(),
  'field_category' => array(
    'und' => array(
      0 => array(
        'target_id' => 8,
      ),
    ),
  ),
  'field_more_info' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2014-04-21 09:34:58 -0700',
);
  return $nodes;
}
