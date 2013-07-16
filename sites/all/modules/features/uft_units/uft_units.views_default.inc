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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_years_offered' => 'field_years_offered',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_unit_semester' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
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
    'field_years_offered' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  /* Field: Content: MDiv Type of Study */
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['id'] = 'field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['table'] = 'field_data_field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['field'] = 'field_mdiv_type_of_study';
  $handler->display->display_options['fields']['field_mdiv_type_of_study']['hide_empty'] = TRUE;
  /* Field: Content: Years Offered */
  $handler->display->display_options['fields']['field_years_offered']['id'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['table'] = 'field_data_field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['field'] = 'field_years_offered';
  $handler->display->display_options['fields']['field_years_offered']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_years_offered']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['field_years_offered_value']['value']['value'] = '2013';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
    'action::revisioning_delete_archived_action' => array(
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
    'action::revisioning_publish_latest_revision_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
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
  $handler->display->display_options['path'] = 'timetable/check';
  $export['timetable'] = $view;

  return $export;
}
