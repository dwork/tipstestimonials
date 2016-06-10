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
  $view->name = 'tips';
  $view->description = 'General view of tips';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quote of the day';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_category' => 'field_category',
    'title' => 'title',
    'field_author' => 'field_author',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_category_target_id']['id'] = 'field_category_target_id';
  $handler->display->display_options['relationships']['field_category_target_id']['table'] = 'field_data_field_category';
  $handler->display->display_options['relationships']['field_category_target_id']['field'] = 'field_category_target_id';
  $handler->display->display_options['relationships']['field_category_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author/Source */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_category_target_id']['id'] = 'field_category_target_id';
  $handler->display->display_options['sorts']['field_category_target_id']['table'] = 'field_data_field_category';
  $handler->display->display_options['sorts']['field_category_target_id']['field'] = 'field_category_target_id';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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

  /* Display: Tips */
  $handler = $view->new_display('page', 'Tips', 'page');
  $handler->display->display_options['display_description'] = 'Display view of all tips';
  $handler->display->display_options['path'] = 'tips';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tips/Testimonials';
  $handler->display->display_options['menu']['description'] = 'Display and update Tips and Testimonials';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tips'] = $view;

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
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['title'] = 'Rotating Tips';
  $handler->display->display_options['display_description'] = 'Rotating Tips';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tip */
  $handler->display->display_options['fields']['field_tip']['id'] = 'field_tip';
  $handler->display->display_options['fields']['field_tip']['table'] = 'field_data_field_tip';
  $handler->display->display_options['fields']['field_tip']['field'] = 'field_tip';
  $handler->display->display_options['fields']['field_tip']['label'] = 'Testimonial';
  /* Field: Content: Author/Source */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tip */
  $handler->display->display_options['fields']['field_tip']['id'] = 'field_tip';
  $handler->display->display_options['fields']['field_tip']['table'] = 'field_data_field_tip';
  $handler->display->display_options['fields']['field_tip']['field'] = 'field_tip';
  $handler->display->display_options['fields']['field_tip']['label'] = 'Testimonial';
  /* Field: Content: Author/Source */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
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
