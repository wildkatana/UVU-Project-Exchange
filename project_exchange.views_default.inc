<?php
/**
 * @file
 * project_exchange.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function project_exchange_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Open Projects';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise']['id'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['table'] = 'field_data_field_expertise';
  $handler->display->display_options['fields']['field_expertise']['field'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_expertise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_expertise']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status']['field_api_classes'] = 0;
  /* Field: Content: Student Rating */
  $handler->display->display_options['fields']['field_student_project_rating']['id'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['table'] = 'field_data_field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['field'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_student_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_student_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_student_project_rating']['field_api_classes'] = 0;
  /* Field: Content: Manager Rating */
  $handler->display->display_options['fields']['field_manager_project_rating']['id'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['table'] = 'field_data_field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['field'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_manager_project_rating']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Student (field_student) */
  $handler->display->display_options['arguments']['field_student_target_id']['id'] = 'field_student_target_id';
  $handler->display->display_options['arguments']['field_student_target_id']['table'] = 'field_data_field_student';
  $handler->display->display_options['arguments']['field_student_target_id']['field'] = 'field_student_target_id';
  $handler->display->display_options['arguments']['field_student_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_student_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_student_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_student_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_student_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_student_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_student_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_student_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_student_target_id']['not'] = 0;
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
    'project' => 'project',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    'Open' => 'Open',
  );

  /* Display: Find Projects */
  $handler = $view->new_display('page', 'Find Projects', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Find Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Project History */
  $handler = $view->new_display('page', 'Project History', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project History';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_expertise' => 'title',
    'field_project_status' => 'field_project_status',
    'name' => 'name',
    'field_manager_project_rating' => 'name',
    'field_student' => 'field_student',
    'field_student_project_rating' => 'field_student',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manager_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Participated as a Manager';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Below are the projects that [name] created as a Manager.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise']['id'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['table'] = 'field_data_field_expertise';
  $handler->display->display_options['fields']['field_expertise']['field'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_expertise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_expertise']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Manager';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Manager Rating */
  $handler->display->display_options['fields']['field_manager_project_rating']['id'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['table'] = 'field_data_field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['field'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_manager_project_rating']['field_api_classes'] = 0;
  /* Field: Content: Student */
  $handler->display->display_options['fields']['field_student']['id'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['table'] = 'field_data_field_student';
  $handler->display->display_options['fields']['field_student']['field'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_student']['field_api_classes'] = 0;
  /* Field: Content: Student Rating */
  $handler->display->display_options['fields']['field_student_project_rating']['id'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['table'] = 'field_data_field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['field'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_student_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_student_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_student_project_rating']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'user/%/project-history';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Project History';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Project Feedback */
  $handler = $view->new_display('page', 'Project Feedback', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Give Project Feedback';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_expertise' => 'title',
    'field_project_status' => 'field_project_status',
    'field_student' => 'field_student',
    'field_student_project_rating' => 'field_student',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Here you can give feedback on all projects you participated in.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise']['id'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['table'] = 'field_data_field_expertise';
  $handler->display->display_options['fields']['field_expertise']['field'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_expertise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_expertise']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status']['field_api_classes'] = 0;
  /* Field: Content: Student */
  $handler->display->display_options['fields']['field_student']['id'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['table'] = 'field_data_field_student';
  $handler->display->display_options['fields']['field_student']['field'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_student']['field_api_classes'] = 0;
  /* Field: Content: Student Rating */
  $handler->display->display_options['fields']['field_student_project_rating']['id'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['table'] = 'field_data_field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['field'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_student_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_student_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_student_project_rating']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    'Active' => 'Active',
    'Closed' => 'Closed',
  );
  $handler->display->display_options['path'] = 'project-feedback';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Give Project Feedback';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Project History Attachment */
  $handler = $view->new_display('attachment', 'Project History Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'As a Student';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_expertise' => 'title',
    'field_project_status' => 'field_project_status',
    'field_student' => 'field_student',
    'field_student_project_rating' => 'field_student',
    'name' => 'name',
    'field_manager_project_rating' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manager_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Participated as a Student';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Below are the projects that [field_student] participated in as a Student.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise']['id'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['table'] = 'field_data_field_expertise';
  $handler->display->display_options['fields']['field_expertise']['field'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_expertise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_expertise']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status']['field_api_classes'] = 0;
  /* Field: Content: Student */
  $handler->display->display_options['fields']['field_student']['id'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['table'] = 'field_data_field_student';
  $handler->display->display_options['fields']['field_student']['field'] = 'field_student';
  $handler->display->display_options['fields']['field_student']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_student']['field_api_classes'] = 0;
  /* Field: Content: Student Rating */
  $handler->display->display_options['fields']['field_student_project_rating']['id'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['table'] = 'field_data_field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['field'] = 'field_student_project_rating';
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_student_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_student_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_student_project_rating']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Manager';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Manager Rating */
  $handler->display->display_options['fields']['field_manager_project_rating']['id'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['table'] = 'field_data_field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['field'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_manager_project_rating']['field_api_classes'] = 0;
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
    'project' => 'project',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = 0;

  /* Display: Project Feedback Attachment */
  $handler = $view->new_display('attachment', 'Project Feedback Attachment', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'As a Student';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_expertise' => 'title',
    'field_project_status' => 'field_project_status',
    'field_manager_project_rating' => 'name',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_expertise' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manager_project_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise']['id'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['table'] = 'field_data_field_expertise';
  $handler->display->display_options['fields']['field_expertise']['field'] = 'field_expertise';
  $handler->display->display_options['fields']['field_expertise']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_expertise']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_expertise']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_expertise']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_expertise']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_expertise']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_expertise']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_expertise']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_expertise']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_expertise']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_expertise']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_expertise']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_expertise']['field_api_classes'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_status']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Manager';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Manager Rating */
  $handler->display->display_options['fields']['field_manager_project_rating']['id'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['table'] = 'field_data_field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['field'] = 'field_manager_project_rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_manager_project_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_manager_project_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_manager_project_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_manager_project_rating']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Student (field_student) */
  $handler->display->display_options['arguments']['field_student_target_id']['id'] = 'field_student_target_id';
  $handler->display->display_options['arguments']['field_student_target_id']['table'] = 'field_data_field_student';
  $handler->display->display_options['arguments']['field_student_target_id']['field'] = 'field_student_target_id';
  $handler->display->display_options['arguments']['field_student_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_student_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_student_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_student_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_student_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_student_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_student_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_student_target_id']['not'] = 0;
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['value'] = array(
    'Active' => 'Active',
    'Closed' => 'Closed',
  );
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = 0;
  $export['projects'] = $view;

  return $export;
}
