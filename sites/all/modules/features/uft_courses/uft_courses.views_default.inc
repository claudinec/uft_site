<?php
/**
 * @file
 * uft_courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uft_courses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_course_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_course_type' => 'field_course_type',
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
    'field_course_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'courses' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course Type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'course' => 'course',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'courses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Courses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_course_type' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Course Type */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['type'] = 'list_key';
  /* Field: Content: Course Description */
  $handler->display->display_options['fields']['field_course_description']['id'] = 'field_course_description';
  $handler->display->display_options['fields']['field_course_description']['table'] = 'field_data_field_course_description';
  $handler->display->display_options['fields']['field_course_description']['field'] = 'field_course_description';
  /* Field: Content: Course Pathways */
  $handler->display->display_options['fields']['field_course_pathways']['id'] = 'field_course_pathways';
  $handler->display->display_options['fields']['field_course_pathways']['table'] = 'field_data_field_course_pathways';
  $handler->display->display_options['fields']['field_course_pathways']['field'] = 'field_course_pathways';
  $handler->display->display_options['fields']['field_course_pathways']['hide_empty'] = TRUE;
  /* Field: Content: Graduate Outcomes */
  $handler->display->display_options['fields']['field_graduate_outcomes']['id'] = 'field_graduate_outcomes';
  $handler->display->display_options['fields']['field_graduate_outcomes']['table'] = 'field_data_field_graduate_outcomes';
  $handler->display->display_options['fields']['field_graduate_outcomes']['field'] = 'field_graduate_outcomes';
  $handler->display->display_options['fields']['field_graduate_outcomes']['hide_empty'] = TRUE;
  /* Field: Content: Course Structure */
  $handler->display->display_options['fields']['field_course_structure']['id'] = 'field_course_structure';
  $handler->display->display_options['fields']['field_course_structure']['table'] = 'field_data_field_course_structure';
  $handler->display->display_options['fields']['field_course_structure']['field'] = 'field_course_structure';
  $handler->display->display_options['fields']['field_course_structure']['hide_empty'] = TRUE;
  /* Field: Content: Course Volume */
  $handler->display->display_options['fields']['field_course_volume']['id'] = 'field_course_volume';
  $handler->display->display_options['fields']['field_course_volume']['table'] = 'field_data_field_course_volume';
  $handler->display->display_options['fields']['field_course_volume']['field'] = 'field_course_volume';
  $handler->display->display_options['fields']['field_course_volume']['hide_empty'] = TRUE;
  /* Field: Content: Entry Requirements */
  $handler->display->display_options['fields']['field_entry_requirements']['id'] = 'field_entry_requirements';
  $handler->display->display_options['fields']['field_entry_requirements']['table'] = 'field_data_field_entry_requirements';
  $handler->display->display_options['fields']['field_entry_requirements']['field'] = 'field_entry_requirements';
  $handler->display->display_options['fields']['field_entry_requirements']['hide_empty'] = TRUE;
  /* Field: Content: Modes of Study */
  $handler->display->display_options['fields']['field_modes_of_study']['id'] = 'field_modes_of_study';
  $handler->display->display_options['fields']['field_modes_of_study']['table'] = 'field_data_field_modes_of_study';
  $handler->display->display_options['fields']['field_modes_of_study']['field'] = 'field_modes_of_study';
  $handler->display->display_options['fields']['field_modes_of_study']['hide_empty'] = TRUE;
  /* Field: Content: File attachments */
  $handler->display->display_options['fields']['field_file_attachments']['id'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['table'] = 'field_data_field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['field'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_attachments']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_file_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_file_attachments']['multi_type'] = 'ul';
  /* Field: Content: Univeristy of Divinity URL */
  $handler->display->display_options['fields']['field_mcd_url']['id'] = 'field_mcd_url';
  $handler->display->display_options['fields']['field_mcd_url']['table'] = 'field_data_field_mcd_url';
  $handler->display->display_options['fields']['field_mcd_url']['field'] = 'field_mcd_url';
  $handler->display->display_options['fields']['field_mcd_url']['label'] = 'University of Divinity URL';
  $handler->display->display_options['fields']['field_mcd_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_mcd_url']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'courses.json';
  $export['courses'] = $view;

  return $export;
}
