<?php
/**
 * @file
 * tipstestimonials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tipstestimonials_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tips_rotating';
  $view->description = 'Rotating Tips';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tips & Testimonials Rotating';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tips & Testimonials Rotating';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Tip */
  $handler->display->display_options['fields']['field_tip']['id'] = 'field_tip';
  $handler->display->display_options['fields']['field_tip']['table'] = 'field_data_field_tip';
  $handler->display->display_options['fields']['field_tip']['field'] = 'field_tip';
  /* Field: Content: Author/Source */
  $handler->display->display_options['fields']['field_author_source']['id'] = 'field_author_source';
  $handler->display->display_options['fields']['field_author_source']['table'] = 'field_data_field_author_source';
  $handler->display->display_options['fields']['field_author_source']['field'] = 'field_author_source';
  $handler->display->display_options['fields']['field_author_source']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Authors/Source';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node = node_load($data->nid);
$wrapper = entity_metadata_wrapper(\'node\',$node);
$author = $wrapper->field_author_source->value();
if ($author == \' \') {
    echo $wrapper->title;
} else {
    echo $author;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );
  /* Filter criterion: Content: Tip Type (field_tiptype) */
  $handler->display->display_options['filters']['field_tiptype_tid']['id'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['table'] = 'field_data_field_tiptype';
  $handler->display->display_options['filters']['field_tiptype_tid']['field'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tiptype_tid']['vocabulary'] = 'tips';
  $handler->display->display_options['filters']['field_tiptype_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rotatingtips';

  /* Display: Tips */
  $handler = $view->new_display('block', 'Tips', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rotating Tips';
  $handler->display->display_options['display_description'] = 'Rotating Tips';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );
  /* Filter criterion: Content: Tip Type (field_tiptype) */
  $handler->display->display_options['filters']['field_tiptype_tid']['id'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['table'] = 'field_data_field_tiptype';
  $handler->display->display_options['filters']['field_tiptype_tid']['field'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['value'] = array(
    36 => '36',
    40 => '40',
    39 => '39',
    35 => '35',
  );
  $handler->display->display_options['filters']['field_tiptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tiptype_tid']['vocabulary'] = 'tips';
  $handler->display->display_options['filters']['field_tiptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Rotating Tips';

  /* Display: Testimonials */
  $handler = $view->new_display('block', 'Testimonials', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['display_description'] = 'Rotating Tips';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );
  /* Filter criterion: Content: Tip Type (field_tiptype) */
  $handler->display->display_options['filters']['field_tiptype_tid']['id'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['table'] = 'field_data_field_tiptype';
  $handler->display->display_options['filters']['field_tiptype_tid']['field'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['value'] = array(
    37 => '37',
  );
  $handler->display->display_options['filters']['field_tiptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tiptype_tid']['vocabulary'] = 'tips';
  $handler->display->display_options['filters']['field_tiptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Rotating Testimonials';

  /* Display: Real Estate */
  $handler = $view->new_display('block', 'Real Estate', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rotating Tips';
  $handler->display->display_options['display_description'] = 'Rotating Real Estate Tips';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );
  /* Filter criterion: Content: Tip Type (field_tiptype) */
  $handler->display->display_options['filters']['field_tiptype_tid']['id'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['table'] = 'field_data_field_tiptype';
  $handler->display->display_options['filters']['field_tiptype_tid']['field'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['value'] = array(
    41 => '41',
    38 => '38',
  );
  $handler->display->display_options['filters']['field_tiptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tiptype_tid']['vocabulary'] = 'tips';
  $handler->display->display_options['filters']['field_tiptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Rotating Real Estate tips';

  /* Display: All Tips */
  $handler = $view->new_display('block', 'All Tips', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rotating Tips';
  $handler->display->display_options['display_description'] = 'Rotating Tips (All)';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tips' => 'tips',
  );
  /* Filter criterion: Content: Tip Type (field_tiptype) */
  $handler->display->display_options['filters']['field_tiptype_tid']['id'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['table'] = 'field_data_field_tiptype';
  $handler->display->display_options['filters']['field_tiptype_tid']['field'] = 'field_tiptype_tid';
  $handler->display->display_options['filters']['field_tiptype_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tiptype_tid']['value'] = array(
    37 => '37',
  );
  $handler->display->display_options['filters']['field_tiptype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tiptype_tid']['vocabulary'] = 'tips';
  $handler->display->display_options['filters']['field_tiptype_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'Rotating Tips (All)';
  $export['tips_rotating'] = $view;

  return $export;
}
