<?php
/**
 * @file
 * uft_units.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uft_units_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'timetable';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timetable';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timetable';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_unit_semester',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_unit_semester' => 'field_unit_semester',
    'field_unit_day' => 'field_unit_day',
    'field_unit_time' => 'field_unit_time',
    'field_unit_code' => 'field_unit_code',
    'title' => 'title',
    'field_courses' => 'field_courses',
    'field_mode_of_teaching' => 'field_mode_of_teaching',
    'field_class_location' => 'field_class_location',
    'field_lecturer_reference' => 'field_lecturer_reference',
    'field_undergraduate_level' => 'field_undergraduate_level',
    'field_postgraduate_level' => 'field_postgraduate_level',
    'field_years_offered' => 'field_years_offered',
    'field_unit_timetable_notes' => 'field_unit_timetable_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_unit_semester' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_day' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_unit_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_unit_code' => array(
      'sortable' => 1,
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
    'field_courses' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mode_of_teaching' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecturer_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_undergraduate_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_postgraduate_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_years_offered' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_timetable_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Use this form to search for units offered by UFT.

You can also download a <strong><a href="/sites/uft.edu.au/files/information/UFT_2014_Timetable_20140331.pdf">PDF version of the timetable for 2014</a></strong>.';
  $handler->display->display_options['header']['area']['format'] = 'html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for this search.
';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Field: Content: Unit Semester */
  $handler->display->display_options['fields']['field_unit_semester']['id'] = 'field_unit_semester';
  $handler->display->display_options['fields']['field_unit_semester']['table'] = 'field_data_field_unit_semester';
  $handler->display->display_options['fields']['field_unit_semester']['field'] = 'field_unit_semester';
  $handler->display->display_options['fields']['field_unit_semester']['label'] = '';
  $handler->display->display_options['fields']['field_unit_semester']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unit_semester']['element_label_colon'] = FALSE;
  /* Field: Content: Unit Day */
  $handler->display->display_options['fields']['field_unit_day']['id'] = 'field_unit_day';
  $handler->display->display_options['fields']['field_unit_day']['table'] = 'field_data_field_unit_day';
  $handler->display->display_options['fields']['field_unit_day']['field'] = 'field_unit_day';
  $handler->display->display_options['fields']['field_unit_day']['label'] = 'Day';
  $handler->display->display_options['fields']['field_unit_day']['element_label_colon'] = FALSE;
  /* Field: Content: Unit Time */
  $handler->display->display_options['fields']['field_unit_time']['id'] = 'field_unit_time';
  $handler->display->display_options['fields']['field_unit_time']['table'] = 'field_data_field_unit_time';
  $handler->display->display_options['fields']['field_unit_time']['field'] = 'field_unit_time';
  $handler->display->display_options['fields']['field_unit_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_unit_time']['settings'] = array(
    'display_format' => array(
      'hour' => 'g',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'a',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Unit Code */
  $handler->display->display_options['fields']['field_unit_code']['id'] = 'field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['field'] = 'field_unit_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Unit Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Courses */
  $handler->display->display_options['fields']['field_courses']['id'] = 'field_courses';
  $handler->display->display_options['fields']['field_courses']['table'] = 'field_data_field_courses';
  $handler->display->display_options['fields']['field_courses']['field'] = 'field_courses';
  $handler->display->display_options['fields']['field_courses']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_courses']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_courses']['multi_type'] = 'ul';
  /* Field: Content: Mode of Teaching */
  $handler->display->display_options['fields']['field_mode_of_teaching']['id'] = 'field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['table'] = 'field_data_field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['field'] = 'field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['delta_limit'] = 'all';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_class_location']['id'] = 'field_class_location';
  $handler->display->display_options['fields']['field_class_location']['table'] = 'field_data_field_class_location';
  $handler->display->display_options['fields']['field_class_location']['field'] = 'field_class_location';
  $handler->display->display_options['fields']['field_class_location']['hide_empty'] = TRUE;
  /* Field: Content: Lecturer */
  $handler->display->display_options['fields']['field_lecturer_reference']['id'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['table'] = 'field_data_field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['field'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lecturer_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lecturer_reference']['multi_type'] = 'ul';
  /* Field: Content: Undergraduate Level */
  $handler->display->display_options['fields']['field_undergraduate_level']['id'] = 'field_undergraduate_level';
  $handler->display->display_options['fields']['field_undergraduate_level']['table'] = 'field_data_field_undergraduate_level';
  $handler->display->display_options['fields']['field_undergraduate_level']['field'] = 'field_undergraduate_level';
  $handler->display->display_options['fields']['field_undergraduate_level']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_undergraduate_level']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Postgraduate Level */
  $handler->display->display_options['fields']['field_postgraduate_level']['id'] = 'field_postgraduate_level';
  $handler->display->display_options['fields']['field_postgraduate_level']['table'] = 'field_data_field_postgraduate_level';
  $handler->display->display_options['fields']['field_postgraduate_level']['field'] = 'field_postgraduate_level';
  $handler->display->display_options['fields']['field_postgraduate_level']['hide_empty'] = TRUE;
  /* Field: Content: Years Offered */
  $handler->display->display_options['fields']['field_years_offered']['id'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['table'] = 'field_data_field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['field'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_years_offered']['delta_offset'] = '0';
  /* Field: Content: Unit Timetable Notes */
  $handler->display->display_options['fields']['field_unit_timetable_notes']['id'] = 'field_unit_timetable_notes';
  $handler->display->display_options['fields']['field_unit_timetable_notes']['table'] = 'field_data_field_unit_timetable_notes';
  $handler->display->display_options['fields']['field_unit_timetable_notes']['field'] = 'field_unit_timetable_notes';
  $handler->display->display_options['fields']['field_unit_timetable_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_unit_timetable_notes']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Unit Semester (field_unit_semester) */
  $handler->display->display_options['sorts']['field_unit_semester_value']['id'] = 'field_unit_semester_value';
  $handler->display->display_options['sorts']['field_unit_semester_value']['table'] = 'field_data_field_unit_semester';
  $handler->display->display_options['sorts']['field_unit_semester_value']['field'] = 'field_unit_semester_value';
  /* Sort criterion: Content: Unit Day (field_unit_day) */
  $handler->display->display_options['sorts']['field_unit_day_value']['id'] = 'field_unit_day_value';
  $handler->display->display_options['sorts']['field_unit_day_value']['table'] = 'field_data_field_unit_day';
  $handler->display->display_options['sorts']['field_unit_day_value']['field'] = 'field_unit_day_value';
  /* Sort criterion: Content: Unit Time (field_unit_time) */
  $handler->display->display_options['sorts']['field_unit_time_value']['id'] = 'field_unit_time_value';
  $handler->display->display_options['sorts']['field_unit_time_value']['table'] = 'field_data_field_unit_time';
  $handler->display->display_options['sorts']['field_unit_time_value']['field'] = 'field_unit_time_value';
  /* Sort criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['sorts']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['sorts']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['sorts']['field_unit_code_value']['field'] = 'field_unit_code_value';
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
    'unit' => 'unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['filters']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['filters']['field_unit_code_value']['field'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_unit_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['operator_id'] = 'field_unit_code_value_op';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['label'] = 'Unit Code';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['operator'] = 'field_unit_code_value_op';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['identifier'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Pre-2013 Unit Code (field_pre_2013_unit_code) */
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['id'] = 'field_pre_2013_unit_code_value';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['table'] = 'field_data_field_pre_2013_unit_code';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['field'] = 'field_pre_2013_unit_code_value';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['expose']['operator_id'] = 'field_pre_2013_unit_code_value_op';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['expose']['label'] = 'Pre-2013 Unit Code';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['expose']['operator'] = 'field_pre_2013_unit_code_value_op';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['expose']['identifier'] = 'field_pre_2013_unit_code_value';
  $handler->display->display_options['filters']['field_pre_2013_unit_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Unit Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Courses (field_courses) */
  $handler->display->display_options['filters']['field_courses_value']['id'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['table'] = 'field_data_field_courses';
  $handler->display->display_options['filters']['field_courses_value']['field'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['group'] = 1;
  $handler->display->display_options['filters']['field_courses_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_courses_value']['expose']['operator_id'] = 'field_courses_value_op';
  $handler->display->display_options['filters']['field_courses_value']['expose']['label'] = 'Courses';
  $handler->display->display_options['filters']['field_courses_value']['expose']['operator'] = 'field_courses_value_op';
  $handler->display->display_options['filters']['field_courses_value']['expose']['identifier'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Mode of Teaching (field_mode_of_teaching) */
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['id'] = 'field_mode_of_teaching_value';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['table'] = 'field_data_field_mode_of_teaching';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['field'] = 'field_mode_of_teaching_value';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['operator_id'] = 'field_mode_of_teaching_value_op';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['label'] = 'Mode of Teaching';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['operator'] = 'field_mode_of_teaching_value_op';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['identifier'] = 'field_mode_of_teaching_value';
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_teaching_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Years Offered (field_years_offered) */
  $handler->display->display_options['filters']['field_years_offered_value']['id'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['table'] = 'field_data_field_years_offered';
  $handler->display->display_options['filters']['field_years_offered_value']['field'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['value']['value'] = '2014';
  $handler->display->display_options['filters']['field_years_offered_value']['group'] = 1;
  $handler->display->display_options['filters']['field_years_offered_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['operator_id'] = 'field_years_offered_value_op';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['label'] = 'Years Offered';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['operator'] = 'field_years_offered_value_op';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['identifier'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Unit Semester (field_unit_semester) */
  $handler->display->display_options['filters']['field_unit_semester_value']['id'] = 'field_unit_semester_value';
  $handler->display->display_options['filters']['field_unit_semester_value']['table'] = 'field_data_field_unit_semester';
  $handler->display->display_options['filters']['field_unit_semester_value']['field'] = 'field_unit_semester_value';
  $handler->display->display_options['filters']['field_unit_semester_value']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_semester_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['operator_id'] = 'field_unit_semester_value_op';
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['operator'] = 'field_unit_semester_value_op';
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['identifier'] = 'field_unit_semester_value';
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_unit_semester_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Unit Day (field_unit_day) */
  $handler->display->display_options['filters']['field_unit_day_value']['id'] = 'field_unit_day_value';
  $handler->display->display_options['filters']['field_unit_day_value']['table'] = 'field_data_field_unit_day';
  $handler->display->display_options['filters']['field_unit_day_value']['field'] = 'field_unit_day_value';
  $handler->display->display_options['filters']['field_unit_day_value']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_day_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['operator_id'] = 'field_unit_day_value_op';
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['label'] = 'Day';
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['operator'] = 'field_unit_day_value_op';
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['identifier'] = 'field_unit_day_value';
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_unit_day_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'timetable';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Units and Timetables';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Error check */
  $handler = $view->new_display('page', 'Error check', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'unit::field_mdiv_type_of_study' => 'unit::field_mdiv_type_of_study',
          'unit::field_postgraduate_level' => 'unit::field_postgraduate_level',
          'unit::field_rti' => 'unit::field_rti',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Unit Code */
  $handler->display->display_options['fields']['field_unit_code']['id'] = 'field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['field'] = 'field_unit_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Unit Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Courses */
  $handler->display->display_options['fields']['field_courses']['id'] = 'field_courses';
  $handler->display->display_options['fields']['field_courses']['table'] = 'field_data_field_courses';
  $handler->display->display_options['fields']['field_courses']['field'] = 'field_courses';
  $handler->display->display_options['fields']['field_courses']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_courses']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_courses']['multi_type'] = 'ul';
  /* Field: Content: Mode of Teaching */
  $handler->display->display_options['fields']['field_mode_of_teaching']['id'] = 'field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['table'] = 'field_data_field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['field'] = 'field_mode_of_teaching';
  $handler->display->display_options['fields']['field_mode_of_teaching']['delta_limit'] = 'all';
  /* Field: Content: Postgraduate Level */
  $handler->display->display_options['fields']['field_postgraduate_level']['id'] = 'field_postgraduate_level';
  $handler->display->display_options['fields']['field_postgraduate_level']['table'] = 'field_data_field_postgraduate_level';
  $handler->display->display_options['fields']['field_postgraduate_level']['field'] = 'field_postgraduate_level';
  /* Field: Content: MDiv Type of Study */
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['id'] = 'field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['table'] = 'field_data_field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['field'] = 'field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'unit' => 'unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Unit Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Courses (field_courses) */
  $handler->display->display_options['filters']['field_courses_value']['id'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['table'] = 'field_data_field_courses';
  $handler->display->display_options['filters']['field_courses_value']['field'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_courses_value']['expose']['operator_id'] = 'field_courses_value_op';
  $handler->display->display_options['filters']['field_courses_value']['expose']['label'] = 'Courses';
  $handler->display->display_options['filters']['field_courses_value']['expose']['operator'] = 'field_courses_value_op';
  $handler->display->display_options['filters']['field_courses_value']['expose']['identifier'] = 'field_courses_value';
  $handler->display->display_options['filters']['field_courses_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Postgraduate Level (field_postgraduate_level) */
  $handler->display->display_options['filters']['field_postgraduate_level_value']['id'] = 'field_postgraduate_level_value';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['table'] = 'field_data_field_postgraduate_level';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['field'] = 'field_postgraduate_level_value';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_postgraduate_level_value']['expose']['operator_id'] = 'field_postgraduate_level_value_op';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['expose']['label'] = 'Postgraduate Level';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['expose']['operator'] = 'field_postgraduate_level_value_op';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['expose']['identifier'] = 'field_postgraduate_level_value';
  $handler->display->display_options['filters']['field_postgraduate_level_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'timetable/check';
  $export['timetable'] = $view;

  $view = new view();
  $view->name = 'units_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'units_admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'units_admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'VBO';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::revisioning_delete_archived_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'unit::field_years_offered' => 'unit::field_years_offered',
          'unit::field_lecturer_reference' => 'unit::field_lecturer_reference',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::revisioning_publish_latest_revision_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content revision: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'node_revision';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  /* Field: Content: Unit Code */
  $handler->display->display_options['fields']['field_unit_code']['id'] = 'field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['field'] = 'field_unit_code';
  /* Field: Content: Pre-2013 Unit Code */
  $handler->display->display_options['fields']['field_pre_2013_unit_code']['id'] = 'field_pre_2013_unit_code';
  $handler->display->display_options['fields']['field_pre_2013_unit_code']['table'] = 'field_data_field_pre_2013_unit_code';
  $handler->display->display_options['fields']['field_pre_2013_unit_code']['field'] = 'field_pre_2013_unit_code';
  $handler->display->display_options['fields']['field_pre_2013_unit_code']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  /* Field: Content: Lecturer */
  $handler->display->display_options['fields']['field_lecturer_reference']['id'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['table'] = 'field_data_field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['field'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lecturer_reference']['delta_offset'] = '0';
  /* Sort criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['sorts']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['sorts']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['sorts']['field_unit_code_value']['field'] = 'field_unit_code_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'unit' => 'unit',
  );
  /* Filter criterion: Content: Years Offered (field_years_offered) */
  $handler->display->display_options['filters']['field_years_offered_value']['id'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['table'] = 'field_data_field_years_offered';
  $handler->display->display_options['filters']['field_years_offered_value']['field'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['value']['value'] = '2014';
  $handler->display->display_options['filters']['field_years_offered_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['operator_id'] = 'field_years_offered_value_op';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['label'] = 'Years Offered';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['operator'] = 'field_years_offered_value_op';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['identifier'] = 'field_years_offered_value';
  $handler->display->display_options['filters']['field_years_offered_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['filters']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['filters']['field_unit_code_value']['field'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['operator_id'] = 'field_unit_code_value_op';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['label'] = 'Unit Code';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['operator'] = 'field_unit_code_value_op';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['identifier'] = 'field_unit_code_value';
  $handler->display->display_options['filters']['field_unit_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'node';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'units-admin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Units - admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['units_admin'] = $view;

  $view = new view();
  $view->name = 'units_by_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Units by staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Units taught';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Unit Code */
  $handler->display->display_options['fields']['field_unit_code']['id'] = 'field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['fields']['field_unit_code']['field'] = 'field_unit_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Unit Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Years Offered */
  $handler->display->display_options['fields']['field_years_offered']['id'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['table'] = 'field_data_field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['field'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_years_offered']['delta_offset'] = '0';
  /* Field: Content: Lecturer */
  $handler->display->display_options['fields']['field_lecturer_reference']['id'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['table'] = 'field_data_field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['field'] = 'field_lecturer_reference';
  $handler->display->display_options['fields']['field_lecturer_reference']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lecturer_reference']['delta_offset'] = '0';
  /* Sort criterion: Content: Unit Code (field_unit_code) */
  $handler->display->display_options['sorts']['field_unit_code_value']['id'] = 'field_unit_code_value';
  $handler->display->display_options['sorts']['field_unit_code_value']['table'] = 'field_data_field_unit_code';
  $handler->display->display_options['sorts']['field_unit_code_value']['field'] = 'field_unit_code_value';
  /* Contextual filter: Content: Lecturer (field_lecturer_reference) */
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['id'] = 'field_lecturer_reference_target_id';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['table'] = 'field_data_field_lecturer_reference';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['field'] = 'field_lecturer_reference_target_id';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lecturer_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'unit' => 'unit',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['units_by_staff'] = $view;

  return $export;
}
