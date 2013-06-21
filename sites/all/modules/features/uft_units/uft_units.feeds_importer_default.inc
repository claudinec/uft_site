<?php
/**
 * @file
 * uft_units.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function uft_units_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'units';
  $feeds_importer->config = array(
    'name' => 'Units',
    'description' => 'Units from 2012 site',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Unit Code',
            'target' => 'field_unit_code',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Path',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          3 => array(
            'source' => 'Body',
            'target' => 'field_unit_content',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'BTheol Field',
            'target' => 'field_unit_field',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'GradDip Field',
            'target' => 'field_postgraduate_level',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Learning Outcomes',
            'target' => 'field_learning_outcomes',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'MDiv Type of Study',
            'target' => 'field_mdiv_type_of_study',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Mode of Teaching',
            'target' => 'field_mode_of_teaching',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Pre-2013 Unit Code',
            'target' => 'field_pre_2013_unit_code',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Prerequisites',
            'target' => 'field_prerequisites',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Prohibited Combinations',
            'target' => 'field_prohibited_combinations',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'RTI',
            'target' => 'field_rti',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Teaching Methods',
            'target' => 'field_teaching_methods',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Undergraduate Level',
            'target' => 'field_undergraduate_level',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Unit Frequency',
            'target' => 'field_unit_frequency',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Department Name',
            'target' => 'field_department',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Disciplines',
            'target' => 'field_unit_disciplines',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Years Offered',
            'target' => 'field_years_offered',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Semester',
            'target' => 'field_unit_semester',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Day',
            'target' => 'field_unit_day',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Notes',
            'target' => 'field_unit_timetable_notes',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Lecturers',
            'target' => 'field_lecturers',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Recommended reading',
            'target' => 'field_recommended_reading',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Number of timetabled hours per week',
            'target' => 'field_weekly_workload_class',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Expected personal study hours per week',
            'target' => 'field_weekly_workload_personal',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Workload',
            'target' => 'field_unit_workload',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'html',
        'skip_hash_check' => 0,
        'bundle' => 'unit',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['units'] = $feeds_importer;

  return $export;
}
