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
  'title' => 'Make your Home Presentable',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85006f60-152b-4d99-8727-c7cf941133b6',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '00bc9d46-aecc-4a7f-b651-c45d59b6c291',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make sure your home is "market ready" when you list it - clean it up, fix it up, and pack away the clutter. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make sure your home is &quot;market ready&quot; when you list it - clean it up, fix it up, and pack away the clutter.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3427c0dd-e27a-49a5-b889-92f709291674',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '06acdaa3-883f-40bb-ab78-5bc42a4267ab',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Tell a man there are 300 billion stars in the universe and he\'ll believe you. Tell him a bench has wet paint on it and he\'ll have to touch to be sure. great discoveries are made by mistake. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Tell a man there are 300 billion stars in the universe and he&#039;ll believe you. Tell him a bench has wet paint on it and he&#039;ll have to touch to be sure. great discoveries are made by mistake.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b401ff60-a552-4930-80ed-f431a4b25238',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '07100b91-46f2-4a7a-ad40-d47738858023',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I knew I was going to take the wrong train, so I left early.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I knew I was going to take the wrong train, so I left early.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1ace863a-8db9-4a89-8f64-15a9084965df',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '08a3e382-1d00-4f52-9c2c-9af23b0d485c',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I\'d find the fellow who lost it, and, if he was poor, I\'d return it." -- When asked what he would do if he found a million dollars',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I&#039;d find the fellow who lost it, and, if he was poor, I&#039;d return it.&quot; -- When asked what he would do if he found a million dollars</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e229c8f6-f2d4-4fb3-873c-423bedf00312',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '094d1143-17a0-4f50-a5f5-23e060b04264',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'ROBIN WILLIAMS',
        'format' => NULL,
        'safe_value' => 'ROBIN WILLIAMS',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Death is nature\'s way of saying, Your table is ready.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Death is nature&#039;s way of saying, Your table is ready.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b209a694-a64d-46d1-8acd-68d1b91c60ba',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09a29762-77b1-49f6-a3b2-3b6d5d3a8b75',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Once, Yogi\'s wife Carmen asked, "Yogi, you are from St. Louis, we live in New Jersey, and you played ball in New York. If you go before I do, where would you like me to have you buried?" Yogi replied, "Surprise me."',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Once, Yogi&#039;s wife Carmen asked, &quot;Yogi, you are from St. Louis, we live in New Jersey, and you played ball in New York. If you go before I do, where would you like me to have you buried?&quot; Yogi replied, &quot;Surprise me.&quot;</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Save questions for the realtor',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4ea38ef6-063d-4525-8db0-ce8189446b16',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09e86696-cee2-4cc0-b21b-d3c5935a1d74',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Keep questions to yourself if the seller is present when you see the home.  Sometimes the seller gets flustered or may not remember what year he put the heating system in. Your agent can get as much information as you need in most cases, without putting the seller on the spot.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Keep questions to yourself if the seller is present when you see the home.  Sometimes the seller gets flustered or may not remember what year he put the heating system in. Your agent can get as much information as you need in most cases, without putting the seller on the spot.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e91114f-b029-44b7-9409-69144b22fb51',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '12420941-6e23-4565-8178-d91c350e4335',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'You\'ve got to be very careful if you don\'t know where you\'re going, because you might not get there.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>You&#039;ve got to be very careful if you don&#039;t know where you&#039;re going, because you might not get there.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Silence is golden',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '654a97de-a7cc-4e9d-a0e7-a968c5f469d0',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1475eec8-33bf-4292-86ae-75bdab53dbf6',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Leave showing to the professionals. He or she knows how to gauge reactions and meet objections.  The salesperson knows the things the buyer wants and will gladly ask you questions if needed.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Leave showing to the professionals. He or she knows how to gauge reactions and meet objections.  The salesperson knows the things the buyer wants and will gladly ask you questions if needed.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'E-Mail Scams',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e54b05a7-cd97-41b6-bffc-74f2610b32d0',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '14b62ec1-3571-4654-97f1-7baa942c36fd',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Everyone receives E-Mail from well-meaning friends regarding lost children, special phone numbers, E-Mail virus alerts, and so on. Before you re-broadcast the "alert" to everyone in your E-Mail directory, check it out by using the "google.com" search engine for supporting information. Scams, Urban Legends and inaccurate information become "virus-like" if you rebroadcast them unwittingly.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Everyone receives E-Mail from well-meaning friends regarding lost children, special phone numbers, E-Mail virus alerts, and so on. Before you re-broadcast the &quot;alert&quot; to everyone in your E-Mail directory, check it out by using the &quot;google.com&quot; search engine for supporting information. Scams, Urban Legends and inaccurate information become &quot;virus-like&quot; if you rebroadcast them unwittingly.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3b210436-661e-468a-9dae-0858e7a211c6',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '17ba47b0-e7f5-4a04-bf9a-53c7f0e36324',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If everything seems to be going well, you have obviously overlooked something ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If everything seems to be going well, you have obviously overlooked something</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '33588781-e220-45f8-9e39-121c196b9e6f',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1e740d77-c73d-4a9b-85d6-1caea9e73ef1',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'G. K. CHESTERTON',
        'format' => NULL,
        'safe_value' => 'G. K. CHESTERTON',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I owe my success to having listened respectfully to the very best advice, and then going away and doing the exact opposite.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I owe my success to having listened respectfully to the very best advice, and then going away and doing the exact opposite.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eab5e2cf-1e96-4434-a13c-7dd952974143',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '202e7237-9189-41e6-a3ed-62c1f419c8bd',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'You can observe a lot just by watching',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>You can observe a lot just by watching</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law of Lines Corollary',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '76bd2c4d-f936-4d50-b531-da7f0418e9c7',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2a53596a-660b-4ccb-84ad-114d6b60b571',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you switch lines, the new line will become the slowest line.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you switch lines, the new line will become the slowest line.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:57 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Erma Bombeck\'s Observation',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3fbf2699-d561-40d5-a1a9-10dcc360875a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2bc228c8-0735-455d-ae9b-12f6698ede26',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'ERMA BOMBECK',
        'format' => NULL,
        'safe_value' => 'ERMA BOMBECK',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Anything dropped in the bathroom will fall in the toilet.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Anything dropped in the bathroom will fall in the toilet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '66af1581-7f19-4b88-ad74-1e19882f504f',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2dddd78f-d6cc-4c54-9c5d-6cf731200d43',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'A nickel isn\'t worth a dime today',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>A nickel isn&#039;t worth a dime today</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0de3d473-18ce-4501-956e-780d480df061',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34c2c530-dd9f-469f-b592-206db71efb10',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If anything can go wrong, it will',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If anything can go wrong, it will</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e2002753-e171-471d-9235-64a1ed09f799',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '368d1a21-72e7-450a-820d-5bd82e795af4',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'THOMAS EDISON',
        'format' => NULL,
        'safe_value' => 'THOMAS EDISON',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Many of life\'s failures are people who did not realize how close they were to success when they gave up.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Many of life&#039;s failures are people who did not realize how close they were to success when they gave up.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c3a14b8c-8554-4176-972d-f116b129b2f2',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3ae4f46b-6679-4052-9876-f3b97fb868cc',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'WALTER CHRYSLER',
        'format' => NULL,
        'safe_value' => 'WALTER CHRYSLER',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The real secret of success is enthusiasm',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The real secret of success is enthusiasm</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '101809b2-3a31-4dba-b129-86f7315f736b',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3b328272-f4cc-4f9f-ad51-206c1d2ec943',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'GROUCHO MARX',
        'format' => NULL,
        'safe_value' => 'GROUCHO MARX',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Either this man is dead or my watch has stopped.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Either this man is dead or my watch has stopped.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '15a12c0c-7399-41f0-9209-b56dbb7450b4',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3ba65a83-86d4-41a6-8c44-1edf5162087a',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'MICKEY ROONEY',
        'format' => NULL,
        'safe_value' => 'MICKEY ROONEY',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I buy women shoes, and they use them to walk away from me.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I buy women shoes, and they use them to walk away from me.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '714de239-cd57-4738-aaea-51d57a320127',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3bd79a21-b7af-47e4-baca-b0d529365e9a',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'It gets late early out there. -- Referring to the bad sun conditions in left field at the stadium.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>It gets late early out there. -- Referring to the bad sun conditions in left field at the stadium.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd2c2ad84-3694-4a8d-beea-45de584f3f30',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3c5a09d0-e9bd-4cab-bda0-875a01e3cc7f',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you come to a fork in the road, take it',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you come to a fork in the road, take it</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '03d74fee-37e1-4d2b-8b5b-5bc03e9276fd',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3ce9f519-e311-4de6-94e1-29bbbb419081',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'To spot the expert, pick the one who predicts the job will take the longest and cost the most. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>To spot the expert, pick the one who predicts the job will take the longest and cost the most.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'First Impression',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'beb643a5-039e-4fa7-8796-ac7857ecf399',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e23df04-31bf-42ae-93a5-73d02d7b5c6e',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Your front door gives a vital first impression while the Realtor and Buyer wait for you answer it.  Repaint if needed, and put potted flowers alongside!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Your front door gives a vital first impression while the Realtor and Buyer wait for you answer it.  Repaint if needed, and put potted flowers alongside!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law of Lines',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '11258837-8320-4fe0-8d92-7287a1c4563c',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40541616-b424-4068-a4eb-105646262a07',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The line you pick is always the slowest.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The line you pick is always the slowest.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:57 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cee5757e-0820-43b7-9c21-e5bc0ad69dcd',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '45067bbb-f2f7-43dc-ac96-456d07ee5014',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'A failure will not appear till a unit has passed final inspection. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>A failure will not appear till a unit has passed final inspection.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Don\'t hesitate',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a180fd90-22dd-4363-84e9-5143a61f9964',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4caa94f8-165b-4272-ac18-91ca925511bb',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Don\'t hesitate too long.  Over analyzing has cost many people the home of their dreams.  While your real estate agent can help you determine a reasonable offering price based on their knowledge, your heart will also tell you what is the right figure to put in the offer contract.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Don&#039;t hesitate too long.  Over analyzing has cost many people the home of their dreams.  While your real estate agent can help you determine a reasonable offering price based on their knowledge, your heart will also tell you what is the right figure to put in the offer contract.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Anti-virus Updates',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9504b100-644e-4c3b-aabb-f95e3db137bf',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d241458-b553-4e3f-9418-da1e347ed508',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make sure you purchase AND regularly update Anti-Virus software (McAfee, Norton, AVG, etc.), the best insurance you have against becoming infected with an E-Mail virus. "Regularly" means "Daily", not "Weekly".',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make sure you purchase AND regularly update Anti-Virus software (McAfee, Norton, AVG, etc.), the best insurance you have against becoming infected with an E-Mail virus. &quot;Regularly&quot; means &quot;Daily&quot;, not &quot;Weekly&quot;.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85efab97-4bc0-4a51-afc6-1d449c2d8445',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d2b8d1b-cd97-4e69-a033-a82a2ed78dcb',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'LILY TOMLIN',
        'format' => NULL,
        'safe_value' => 'LILY TOMLIN',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'re all in this alone.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>We&#039;re all in this alone.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8192487e-eb31-4d9e-a801-29f5a73cc000',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4f254ac7-c380-47df-b56b-3c3b995c7b46',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => ' "Do you mean now?" -- When asked for the time',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>&quot;Do you mean now?&quot; -- When asked for the time</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5f6a9f42-5e55-4b70-a2de-3e68160088f5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4f95f4fd-74b4-47d3-92ac-2290328c6e56',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you don\'t know where you are going, you will wind up somewhere else',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you don&#039;t know where you are going, you will wind up somewhere else</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cef19f38-efbf-4071-b9c0-57c9a734c158',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '530b6cc4-a5d4-4bee-8f9c-1edd6c0c93ae',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'You better cut the pizza in four pieces because I\'m not hungry enough to eat six',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>You better cut the pizza in four pieces because I&#039;m not hungry enough to eat six</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f1f2e88f-1d35-43d1-a6ed-4d9bef6d3b75',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '538ea94c-7242-4e1c-9c0b-4385a2f0b91b',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'GLORIA STEINEM',
        'format' => NULL,
        'safe_value' => 'GLORIA STEINEM',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The only thing I can\'t stand is discomfort.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The only thing I can&#039;t stand is discomfort.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0d4568fd-77cd-41c1-abd1-acf5f156c230',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '53e5082f-591f-4b8c-ad2b-5edfe8af0147',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'W. H. AUDEN',
        'format' => NULL,
        'safe_value' => 'W. H. AUDEN',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'We are here on earth to do good to others. What the others are here for, I don\'t know.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>We are here on earth to do good to others. What the others are here for, I don&#039;t know.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9c8d57c9-5f2a-405b-9827-70ff09892729',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '54360947-af10-4e02-88a7-f8118449f012',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'It was impossible to get a conversation going, everybody was talking too much',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>It was impossible to get a conversation going, everybody was talking too much</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c4a9aa8f-cdd2-4842-a8c1-b1d32be44cc7',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '59899231-5649-45d8-8e85-b9c897a7d595',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'JAPANESE PROVERB',
        'format' => NULL,
        'safe_value' => 'JAPANESE PROVERB',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Fall seven times, stand up eight.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Fall seven times, stand up eight.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '20ee21e2-8567-4271-a01d-7b0224607b9d',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '59f1be1b-f439-441f-8620-6dd077e37f6d',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'WOODY ALLEN',
        'format' => NULL,
        'safe_value' => 'WOODY ALLEN',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I don\'t want to achieve immortality through my work. I want to achieve it through not dying. I want to achieve it through not dying.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I don&#039;t want to achieve immortality through my work. I want to achieve it through not dying. I want to achieve it through not dying.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Spam - should I try to "unsubscribe"?',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3f9afffa-e28e-41c1-8f21-1ff717286b9a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5ad7dfc3-c807-470c-b5d7-9750128d5e0a',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'NO! Many spammers use this unsavory "unsubscribe" tactic to validate E-mail addresses. If they remove your E-mail address from this list, they may also sell your E-mail address to 10 related or unrelated lists.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>NO! Many spammers use this unsavory &quot;unsubscribe&quot; tactic to validate E-mail addresses. If they remove your E-mail address from this list, they may also sell your E-mail address to 10 related or unrelated lists.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Pricing Your Home to Sell',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9c7062dd-6fbb-440c-a40c-51280f1f1a2c',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '655ea152-f1ae-4143-9252-c82efedc2778',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Your real estate agent will prepare a "Comparative Marketing Analysis" (CMA) to help you set your home\'s initial selling price. The CMA compares your home\'s features, condition and location to similar homes that have recently sold, and will help you avoid emotional choices that often lead to overpricing.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Your real estate agent will prepare a &quot;Comparative Marketing Analysis&quot; (CMA) to help you set your home&#039;s initial selling price. The CMA compares your home&#039;s features, condition and location to similar homes that have recently sold, and will help you avoid emotional choices that often lead to overpricing.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fd41a906-479d-424f-a770-58cd2d24affc',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66dce4a9-624e-4f24-93db-6c7f9a69e27c',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'GARRISON KEILLOR',
        'format' => NULL,
        'safe_value' => 'GARRISON KEILLOR',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Cats are intended to teach us that not everything in nature has a function.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Cats are intended to teach us that not everything in nature has a function.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f8195008-2dc0-4dba-be1c-bbda680debb4',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '685e81f8-7e2e-40d7-8aea-78595c42cc62',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'JAY LENO',
        'format' => NULL,
        'safe_value' => 'JAY LENO',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'As Miss America, my goal is to bring peace to the entire world and then to get my own apartment.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>As Miss America, my goal is to bring peace to the entire world and then to get my own apartment.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'The Dilbert Principle',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '07f55d41-0d76-4b2a-bc45-5d2380fd88fb',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '690c5db0-ce8e-4734-a010-df0fdbf4a425',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Scott Adams',
        'format' => NULL,
        'safe_value' => 'Scott Adams',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The most ineffective workers are systematically moved to the place where they can do the least damage: management - Scott Adams',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The most ineffective workers are systematically moved to the place where they can do the least damage: management - Scott Adams</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yoda',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f2864dad-3bc8-4951-a6e1-0973292c2a04',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '69e80142-98d3-40b4-9f72-a122b24477ac',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'YODA',
        'format' => NULL,
        'safe_value' => 'YODA',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Do or do not. There is no try.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Do or do not. There is no try.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Pricing Your Home',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7bd261cd-cc36-4cad-a687-d09e87096aaa',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '69f53c4f-484d-4bbc-a4ff-8bd88abb2c53',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make sure you price your home within reason - overpriced homes often sell (eventually) for less than if they had been priced right the first time around.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make sure you price your home within reason - overpriced homes often sell (eventually) for less than if they had been priced right the first time around.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Illusions of a pet free home',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd4405065-3e44-4566-ba49-ea258f737775',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6afed5bf-dfd4-4030-946f-a4d9be37fb8e',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Avoid pet odors.  You may not even notice them but buyers will.  There are products available that remove them. Let Fido sleep in the garage while the house is listed, and freshen the air and carpets up!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Avoid pet odors.  You may not even notice them but buyers will.  There are products available that remove them. Let Fido sleep in the garage while the house is listed, and freshen the air and carpets up!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5516e912-b04e-4c01-9c6e-e29a7b920ace',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c967d00-d712-415f-8c5b-863a03218cc2',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The most ominous phrase in science: "_Uh_-oh . . ."',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The most ominous phrase in science: &quot;_Uh_-oh . . .&quot;</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Keep it tidy',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7ee473a4-9a72-4af5-950d-f708c10f16e5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6cfcbf8a-f3e9-45a3-82db-c7e0f94d81b5',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Go through the house like a hurricane every morning. Make beds, do dishes, give counters a final wipe down!  Enlist kids by promising (and delivering of course) a special outing when the house sells.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Go through the house like a hurricane every morning. Make beds, do dishes, give counters a final wipe down!  Enlist kids by promising (and delivering of course) a special outing when the house sells.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Disclosure',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1ecfd44d-91eb-4649-b527-328279e5bd2a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7594a0bd-71e4-405c-b4bb-01454ac119ec',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Your Real Estate Agent will help you determine how best to disclose the condition of your home to prospective buyers. If you hide "material defects", you may be liable for remedy & repair after the sale.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Your Real Estate Agent will help you determine how best to disclose the condition of your home to prospective buyers. If you hide &quot;material defects&quot;, you may be liable for remedy &amp; repair after the sale.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'The Peter Principle',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5552ab6f-1774-4247-81e9-9a4adf7acd78',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7a9ef6a8-279c-4153-ae3c-7cf0347edb6f',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Dr. Lawrence J. Peter',
        'format' => NULL,
        'safe_value' => 'Dr. Lawrence J. Peter',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'In a Hierarchy Every Employee Tends to Rise to His Level of Incompetence - Dr. Lawrence J. Peter ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>In a Hierarchy Every Employee Tends to Rise to His Level of Incompetence - Dr. Lawrence J. Peter</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Pre-approve or Pre-qualify?',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c7236445-f656-482b-ae17-69d2cc52fe12',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e7f2752-493d-4d33-b5f7-668eb09f81c2',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Loan pre-qualification is a routine and fairly inexpensive way to determine how much money you would qualify for IF you apply for a loan. However, there is no guarantee that you will get the loan. Pre-approval means that you have qualified AND been approved for a loan.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Loan pre-qualification is a routine and fairly inexpensive way to determine how much money you would qualify for IF you apply for a loan. However, there is no guarantee that you will get the loan. Pre-approval means that you have qualified AND been approved for a loan.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'The Murphy Philosophy',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7ac0dc43-f21c-451d-a031-ebe37959bdf0',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e8b9124-2464-43f3-9e62-5ee98432fd24',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Smile . . . tomorrow will be worse. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Smile . . . tomorrow will be worse.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Don\'t buy that Car (yet)',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5ddf16e3-5743-4e9e-8481-cf15d4056fee',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8b327092-fd2c-4712-990b-ebd6360d4557',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you are planning to purchase a home, don\'t do anything to jeopardize your credit rating. Consider putting off that new car or boat purchase - anything that increases your "debt to income" ratio may adversely affect your ability to borrow money ... or the interest rate you\'ll pay for your new home loan.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you are planning to purchase a home, don&#039;t do anything to jeopardize your credit rating. Consider putting off that new car or boat purchase - anything that increases your &quot;debt to income&quot; ratio may adversely affect your ability to borrow money ... or the interest rate you&#039;ll pay for your new home loan.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4791fa76-0caf-401a-9c4c-e65a7e6578ab',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8b6f96e2-8eef-489c-9eb8-1408c900c011',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Arthur C. Clark',
        'format' => NULL,
        'safe_value' => 'Arthur C. Clark',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Any sufficiently advanced technology is indistinguishable from magic -- Arthur C. Clark',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Any sufficiently advanced technology is indistinguishable from magic -- Arthur C. Clark</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ff260d08-a86e-4399-be45-c80e24e48fd0',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8c396b23-fb45-427c-9018-599e8fe3328c',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Left to themselves, things tend to go from bad to worse ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Left to themselves, things tend to go from bad to worse</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'High Speed Internet Services',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '687ba70f-8722-48c4-a215-4dd2ad902744',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8c824f7c-2c19-4aba-965e-8af9121759a8',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make sure your Real Estate Agents knows whether or not High Speed Internet services are available to your home or not. This information can be included in the "Listing" and will help people with High Speed Internet requirements qualify your home.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make sure your Real Estate Agents knows whether or not High Speed Internet services are available to your home or not. This information can be included in the &quot;Listing&quot; and will help people with High Speed Internet requirements qualify your home.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Backing up your Data',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b4f2221a-f757-4089-9bed-bb4eb92456b8',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8e915847-253e-4c6a-b8ee-4df8aab0801b',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you don\'t back up your data on a regular basis, someday you\'ll be sorry.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you don&#039;t back up your data on a regular basis, someday you&#039;ll be sorry.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Anti-virus Updates',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c38e6ad1-b5de-42d2-a0d8-09b8e04fedd5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '90e45222-b78d-478c-9c53-d8a3a8201ae8',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make sure you install an "Internet Firewall" to protect your computer from outside attackers. A "firewall" can be hardware or software, and prevents unwanted Internet-based visitors from gaining access to your computer and the information it holds. Symantec, McAfee, Blackice and AVG are all good personal firewall software programs. The "free" versions of most anti-virus programs are generally good enough unless you have specific needs.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make sure you install an &quot;Internet Firewall&quot; to protect your computer from outside attackers. A &quot;firewall&quot; can be hardware or software, and prevents unwanted Internet-based visitors from gaining access to your computer and the information it holds. Symantec, McAfee, Blackice and AVG are all good personal firewall software programs. The &quot;free&quot; versions of most anti-virus programs are generally good enough unless you have specific needs.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '844b2ca0-99b8-41e0-bd07-75aad51d7bb5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '918c721e-c945-47d0-ad27-fc846b7d22fe',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If there is a possibility of several things going wrong, the one that will cause the most damage will be the one to go wrong; Corollary: If there is a worse time for something to go wrong, it will happen then ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If there is a possibility of several things going wrong, the one that will cause the most damage will be the one to go wrong; Corollary: If there is a worse time for something to go wrong, it will happen then</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fe7fdf35-ccd8-411b-86a7-4dc2b8b0b8f1',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '92f70554-0286-49c2-955f-14d9d4fab533',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Slump? I ain\'t in no slump. I just ain\'t hitting',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Slump? I ain&#039;t in no slump. I just ain&#039;t hitting</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Delaying a New Home Purchase #2',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8a28bcfb-6cf7-469a-8583-707dce2e610c',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '968c29ab-2f7f-4cd1-9da9-d6df3747a455',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Consider delaying a New Home purchase if you are having marital or other family problems. A divorce or separation can increase the financial strain in your life significantly, and a "New Home" or "New Home Search" will usually add additional pressures to the turmoil.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Consider delaying a New Home purchase if you are having marital or other family problems. A divorce or separation can increase the financial strain in your life significantly, and a &quot;New Home&quot; or &quot;New Home Search&quot; will usually add additional pressures to the turmoil.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'More light',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd78d97b4-8e43-428e-9bd0-c788542b95d5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9739c096-d711-42be-93d5-28776545ab6e',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Don\'t forget to have all light fixtures filled with bulbs. Illumination is like a welcome sign. Turn on lights and open heavy drapes when you are preparing for a showing.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Don&#039;t forget to have all light fixtures filled with bulbs. Illumination is like a welcome sign. Turn on lights and open heavy drapes when you are preparing for a showing.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Brecht',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1e3a077e-47ab-4ba9-9cfc-d63a00a043e3',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98d3728e-411d-45b5-a126-18bc11ae24f5',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'BERTOLT BRECHT',
        'format' => NULL,
        'safe_value' => 'BERTOLT BRECHT',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Do not fear death so much, but rather the inadequate life.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Do not fear death so much, but rather the inadequate life.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Prequalify',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '21bb0fff-e4b6-4edb-8a10-004bfe3a64ac',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9af4a5a1-a353-49af-9296-fd271b52cc38',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Get prequalified. It really doesn\'t take much time and will make your offer much more likely to get accepted.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Get prequalified. It really doesn&#039;t take much time and will make your offer much more likely to get accepted.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2e05b093-2c86-4005-83dc-8c725fc7c807',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c60821f-a93a-434f-9abc-08ec37606d7e',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Nobody goes there anymore; it\'s too crowded',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Nobody goes there anymore; it&#039;s too crowded</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Three\'s a crowd',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b7a9b477-be92-4b1a-a1cd-8af0c5dd3b27',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a2bffc44-a83d-4e3c-99a5-7857832a1419',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Avoid having too many people in the house when it is shown. It makes buyers uncomfortable and they will hurry through and miss some of the best features. Jump in the car and go for a quick drive!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Avoid having too many people in the house when it is shown. It makes buyers uncomfortable and they will hurry through and miss some of the best features. Jump in the car and go for a quick drive!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Reduce clutter',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b0d1c7bd-02d4-40a0-b28d-e818bc44635a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a51854b8-c4f9-4665-99a6-0e8946022b0f',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Dress up windows in freshly laundered curtains. Add floral centerpieces. Minimize family clutter and photos. The buyers should visualize their family in the home, not yours.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Dress up windows in freshly laundered curtains. Add floral centerpieces. Minimize family clutter and photos. The buyers should visualize their family in the home, not yours.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Make it smell like heaven',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '11eccf1b-91f3-4124-9e96-045910f9e1e0',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a942fdb7-0692-429b-9b74-9a9f903d32e0',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you have time to light a scented candle and can leave it in a safe place, or slip a frozen apple pie into the oven before prospects arrive, it will give such a nice welcoming smell when the door opens for the buyers.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you have time to light a scented candle and can leave it in a safe place, or slip a frozen apple pie into the oven before prospects arrive, it will give such a nice welcoming smell when the door opens for the buyers.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Painting',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '794bbfaf-5a70-4e0b-bd53-926ecd17540b',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aa85d334-ecec-4212-80e0-e1737ca960ee',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Repaint any room that needs it.  It will probably make your selling price higher and certainly makes a difference in appearance.  Neutral and light colors are the best!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Repaint any room that needs it.  It will probably make your selling price higher and certainly makes a difference in appearance.  Neutral and light colors are the best!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Technology Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e7dc9812-a787-4433-a9b2-a37b2f11fca3',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'acdc41e9-e821-4b60-8e02-e84664822897',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'To err is human, but to really foul things up requires a computer. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>To err is human, but to really foul things up requires a computer.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Technology Law',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4ecb80a6-5612-4017-9d61-23a1cd5fadeb',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ade99af9-20f5-4782-8c8d-9474a990c93b',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The attention span of a computer is only as long as it electrical cord. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The attention span of a computer is only as long as it electrical cord.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Keep props handy',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8fe371ce-e924-4ab6-9dc2-2495882613e5',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b30b948b-1e51-4dc7-ba19-43a685d2d8ea',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Stage the dining room table if you have one.  Use nice dishes, place mats, tablecloth and candles. Make your home look loved and warm!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Stage the dining room table if you have one.  Use nice dishes, place mats, tablecloth and candles. Make your home look loved and warm!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a05e2e93-9dc8-4a59-ac3e-a3d773508013',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b63b4d3e-6426-4ed9-9f84-a2c92be14ecd',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'He must have made that before he died." -- Referring to a Steve McQueen movie.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>He must have made that before he died.&quot; -- Referring to a Steve McQueen movie.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'My Dog roams free ....',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0c7b612b-0d03-4133-a357-b73c866c8fc8',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b7649193-0dea-4135-ab4b-4ac3ca0caf28',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Make an effort to prevent your animals from disturbing Realtors and potential buyers. Nothing is worse than a barking, growling or overly friendly dog running loose in the yard when a buyer wants to preview your home. (Maybe an attack bird loose in the living room is worse).',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Make an effort to prevent your animals from disturbing Realtors and potential buyers. Nothing is worse than a barking, growling or overly friendly dog running loose in the yard when a buyer wants to preview your home. (Maybe an attack bird loose in the living room is worse).</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 108,
        'uuid' => 'a84c4b55-83b7-4e9b-b253-04b7bd7a19d9',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7aa2c719-be84-419f-9ffb-42cbd50b1232',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ba93b9a1-8995-45b3-83a2-10c6f5d5c253',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'QUEEN ELIZABETH II',
        'format' => NULL,
        'safe_value' => 'QUEEN ELIZABETH II',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I learned the way a monkey learns - by watching its parents.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I learned the way a monkey learns - by watching its parents.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '20eb4ad9-9aac-43ef-bfb6-989cf2b5d90a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'babe9c54-f6e6-4f92-a183-71d079664d26',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Never argue with a fool, people might not know the difference. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Never argue with a fool, people might not know the difference.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e727111a-49da-4391-8dee-f9dfb7bd0c3f',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'baeb693a-2760-49e1-8f05-24bee420bf01',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Whatever hits the fan will not be evenly distributed. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Whatever hits the fan will not be evenly distributed.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '810a27e0-2724-4884-bfbd-5a7cca336603',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c1613dc8-1504-4e8f-a797-8ab514418e73',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Baseball is 90% mental -- the other half is physical',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Baseball is 90% mental -- the other half is physical</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '194654f4-eb4a-4fc6-8c1c-f26b30a41c7a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c5fb43ae-a431-400c-a928-f931429fd85e',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The other line always moves faster. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The other line always moves faster.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5d747ad0-6c1f-4c1f-a93c-94bfda41c42f',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c8a8c142-14ed-4e0e-9094-b50fa3ad8337',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I want to thank you for making this day necessary." -- On Yogi Berra Appreciation Day in St. Louis in 1947',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I want to thank you for making this day necessary.&quot; -- On Yogi Berra Appreciation Day in St. Louis in 1947</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law (Corollary)',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e3adfb75-431b-4bbb-a470-4ed0b8b22bde',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c9065916-e510-4447-b8ed-5edd7cf9ac0f',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'All\'s well that ends. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>All&#039;s well that ends.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Constant',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5ce31dbf-e98f-4c80-bbd2-25add859ac4d',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cb4c83bc-bedb-44d2-8f23-0d212a8963d0',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Matter will be damaged in direct proportion to its value ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Matter will be damaged in direct proportion to its value</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'feel free to look around',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4283ff83-0425-4560-956e-623f2cdc3a88',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cc5f32aa-1d08-4816-87b2-a70bbd32a9dd',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Don\'t be shy!  Open closets and drawers as these are part of the home you are considering, but on the other hand watch your children and respect the cleanliness and rules of the owner.  Muddy shoes are best left outside the front door!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Don&#039;t be shy!  Open closets and drawers as these are part of the home you are considering, but on the other hand watch your children and respect the cleanliness and rules of the owner.  Muddy shoes are best left outside the front door!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:57 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Real Estate Laws',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '43eee257-55b9-44ab-8d87-5fef6fe6e92d',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd164baa4-237c-4796-9bff-f37db39d3afc',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Murphy\'s Law',
        'format' => NULL,
        'safe_value' => 'Murphy&#039;s Law',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Nothing ever gets built on schedule or within budget. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Nothing ever gets built on schedule or within budget.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2932eb4d-4bbf-42f8-a9dd-664bb4c47815',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd2f045c5-c449-4c69-919f-aae56e32ac6a',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Glen Cove. -- Referring to Glenn Close on a movie review television show.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Glen Cove. -- Referring to Glenn Close on a movie review television show.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Get Prequalified',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '89183065-8639-47df-91a2-23ad09cac108',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd7d39432-5955-4d3c-9ca5-0d3951448ba5',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
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
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0ac1a40f-8329-4458-b3f0-3ef1270b9c52',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd84d53e4-7581-43c4-b8a0-e8f376797b7e',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'ALBERT EINSTEIN',
        'format' => NULL,
        'safe_value' => 'ALBERT EINSTEIN',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Only two things are infinite, the universe and human stupidity, and I\'m not sure about the former.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Only two things are infinite, the universe and human stupidity, and I&#039;m not sure about the former.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'What\'s a Realtor?',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b44f6e99-07c7-4dc4-babb-dd51f56bb9f4',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd8eb599f-d37a-4873-8298-5e104d11c201',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'In Oregon, all Real Estate Agents must be licensed by the State of Oregon. "Realtor" is a trademark, and can only be used by licensed Real Estate Agents who are also members of the National Association of Realtors(tm).',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>In Oregon, all Real Estate Agents must be licensed by the State of Oregon. &quot;Realtor&quot; is a trademark, and can only be used by licensed Real Estate Agents who are also members of the National Association of Realtors(tm).</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Stop and smell the flowers',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6d00089b-1d8a-4536-b855-85dcdf6e118c',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da14b5cc-906c-4733-9747-3a5cdf080bc0',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Don\'t try to see too many homes at once. Of course there are exceptions to every rule, and if you have to fly out in 24 hours, go for it!  But in general, you will forget which house had the lovely master suite, the green one or the beige one. It all becomes a blur after more than 3 to 5 homes in one afternoon.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Don&#039;t try to see too many homes at once. Of course there are exceptions to every rule, and if you have to fly out in 24 hours, go for it!  But in general, you will forget which house had the lovely master suite, the green one or the beige one. It all becomes a blur after more than 3 to 5 homes in one afternoon.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:57 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7622ec70-c11c-4b84-92a0-00af2ef6cb85',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dd3ffdb8-ded1-47ff-bdac-6d71b4ca0f98',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you can\'t imitate him, don\'t copy him',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you can&#039;t imitate him, don&#039;t copy him</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'The Peter Principal',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '36d9dc00-58c4-4eb0-9c73-2c13a07a9a14',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1465577386,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e0daec47-b516-4abb-bcdf-a96ce355b188',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'The Peter Principle',
        'format' => NULL,
        'safe_value' => 'The Peter Principle',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Employees tend to rise to the level of their incompetence.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Employees tend to rise to the level of their incompetence.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"overlay";i:1;s:18:"htmlmail_plaintext";i:0;}',
  'date' => '2016-06-10 09:49:46 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '014962e8-9bfd-4ba3-aeb7-1ddef70a2bf4',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e57ddb01-5921-4868-bb04-7bc56f33f465',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'It ain\'t over till it\'s over',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>It ain&#039;t over till it&#039;s over</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law of Lines Corollary',
  'log' => 'Replaced by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e0063717-3e40-4682-9b41-d6333c9ace3b',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847551,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e8e382c6-54c0-469f-9e3f-80f1d74942c6',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If you switch lines, the new line will become the slowest line.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If you switch lines, the new line will become the slowest line.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:05:51 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Be loyal',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd394c129-ae8d-4df3-bbb1-10ebd1a17bad',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ec399c90-57d9-4874-9108-52b37f862858',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Be loyal to your agent and you will be rewarded by his or her loyalty in return.  All agents work from the same computer database in a given area.  They work on commission, and hope that they will be paid eventually for the hard work they put forth for buyers and sellers.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Be loyal to your agent and you will be rewarded by his or her loyalty in return.  All agents work from the same computer database in a given area.  They work on commission, and hope that they will be paid eventually for the hard work they put forth for buyers and sellers.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bd8ca8bd-f435-4399-a380-0f097905c96e',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ed16cf82-6868-4ab1-ab52-3a89e379b2e1',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'You should always go to other people\'s funerals; otherwise, they won\'t come to yours',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>You should always go to other people&#039;s funerals; otherwise, they won&#039;t come to yours</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '39812fd9-d72c-41c9-962b-ae940fc1ab3a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'edf36c0f-7c98-4021-afe8-952a96cb6266',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'THOMAS A. EDISON',
        'format' => NULL,
        'safe_value' => 'THOMAS A. EDISON',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Results! Why, man, I have gotten a lot of results. I know several thousand things that won\'t work.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Results! Why, man, I have gotten a lot of results. I know several thousand things that won&#039;t work.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bcff2482-940f-4c9c-8b3e-744d78c76fd3',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ef550f54-5a26-4f91-b69a-585d3a3032dd',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'I take a two hour nap, from one o\'clock to four.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>I take a two hour nap, from one o&#039;clock to four.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8b4869d6-4ce2-4112-9344-bd1e09ba9499',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f078e4a7-26f9-44eb-9fde-3db58fbfbe4d',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'SALLY KEMPTON',
        'format' => NULL,
        'safe_value' => 'SALLY KEMPTON',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'It is hard to fight an enemy who has outposts in your head.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>It is hard to fight an enemy who has outposts in your head.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Make yourself available',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '482e40bf-22f5-4589-b955-3917f596afbd',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f402b9c5-dd32-4f5e-b1ef-9fd937ef13f7',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Be available!  Your agent may see a great deal come up on the office computer, but if he or she can\'t get hold of you quickly, it may have another offer before you can even get there to see it!  Leave all pertinent phone numbers and check email and phone messages often!',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Be available!  Your agent may see a great deal come up on the office computer, but if he or she can&#039;t get hold of you quickly, it may have another offer before you can even get there to see it!  Leave all pertinent phone numbers and check email and phone messages often!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:57 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Law in Action',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '789e2a88-ca1a-4baa-ae07-8cffc5875216',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f50bc711-3e49-4eaa-aaaa-587cb6c237ea',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'The chance of the bread falling with the buttered side down is directly proportional to the cost of the carpet',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>The chance of the bread falling with the buttered side down is directly proportional to the cost of the carpet</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Research',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c53a9206-137b-4f29-a547-d2be5ba20384',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6537f19-dcfc-448b-b7f5-de2633b6d985',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Do your research!  Watch newspaper and internet ads for properties in your desired area. Attend open houses to see what home values are.  Ask your agent for a list of homes in a price range, and do some drive bys on your own if you are familiar with the area.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Do your research!  Watch newspaper and internet ads for properties in your desired area. Attend open houses to see what home values are.  Ask your agent for a list of homes in a price range, and do some drive bys on your own if you are familiar with the area.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Is Your Computer Obsolete?',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bff7239b-109c-4fac-a596-cd00fea1d17a',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f8c34080-a7ec-4fb8-ac7f-271747f718da',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Yes, it is. However, if it does what you need it to do, don\'t worry about it.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Yes, it is. However, if it does what you need it to do, don&#039;t worry about it.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 106,
        'uuid' => '0d5ef380-160c-44ed-80ab-0e724256af27',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Real Estate Laws',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cc09b475-1607-4083-b185-38f5e7e140df',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f9aaeedd-383b-4019-a966-84f3755e1a3b',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Murphy\'s Law',
        'format' => NULL,
        'safe_value' => 'Murphy&#039;s Law',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'If builders built buildings the way computer programmers wrote programs, then the first woodpecker that came along would destroy civilization. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>If builders built buildings the way computer programmers wrote programs, then the first woodpecker that came along would destroy civilization.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
        'uuid' => 'baee04e5-c2b5-421b-b92c-bbf0d2d7226a',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Murphy\'s Real Estate Laws',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f52e2376-1b7a-434a-8abf-661407af2d66',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fcb66bd9-512a-4839-9d48-e7e9cb7fb304',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Murphy\'s Real Estate Laws',
        'format' => NULL,
        'safe_value' => 'Murphy&#039;s Real Estate Laws',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'In order to get a loan, you must first prove you don\'t need it.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>In order to get a loan, you must first prove you don&#039;t need it.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Yogi Berra',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '094abf42-2dcc-4f7a-b6a0-1164a9590bd3',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fcff81ba-42a8-4ed3-a07f-c8a55be055c4',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'Yogi Berra',
        'format' => NULL,
        'safe_value' => 'Yogi Berra',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
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
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 105,
        'uuid' => '09a7bd33-0429-4af7-8782-54d612cc1076',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Humorous',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5bc7012e-4f7b-488b-8ad7-4923ae011666',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe379e7a-dd27-44f1-bc84-e43ae6b24d2b',
  'revision_uid' => 1,
  'field_author_source' => array(
    'und' => array(
      0 => array(
        'value' => 'EARL WILSON',
        'format' => NULL,
        'safe_value' => 'EARL WILSON',
      ),
    ),
  ),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Success is simply a matter of luck. Ask any failure.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Success is simply a matter of luck. Ask any failure.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 110,
        'uuid' => 'd2b1f92b-55a4-41f5-989a-2eca44bc0536',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Delaying a New Home Purchase #1',
  'log' => 'Created by FeedsNodeProcessor',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b0811037-d98b-4a18-a31c-baa4743bb0b6',
  'ds_switch' => '',
  'type' => 'tips',
  'language' => 'und',
  'created' => 1464847735,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'feb09767-fd73-4d8b-afcf-ada280802d9f',
  'revision_uid' => 1,
  'field_author_source' => array(),
  'field_more_info' => array(),
  'field_tip' => array(
    'und' => array(
      0 => array(
        'value' => 'Consider delaying a New Home purchase if you have an "uncertain" job future. If you don\'t have a firm idea of your financial future, you don\'t need a New Home Loan burdening your family if you suddenly lose your job or get transferred.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Consider delaying a New Home purchase if you have an &quot;uncertain&quot; job future. If you don&#039;t have a firm idea of your financial future, you don&#039;t need a New Home Loan burdening your family if you suddenly lose your job or get transferred.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tiptype' => array(
    'und' => array(
      0 => array(
        'tid' => 111,
        'uuid' => 'f4bfd9d4-f05d-4431-9a26-c76d594ec92b',
      ),
    ),
  ),
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
  'date' => '2016-06-01 23:08:55 -0700',
);
  return $nodes;
}
