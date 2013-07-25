<?php
/**
 * @file
 * uft_staff.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uft_staff_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff_blocks';
  $context->description = 'Blocks to display on a staff profile page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'staff_profile' => 'staff_profile',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-units_by_staff-block' => array(
          'module' => 'views',
          'delta' => 'units_by_staff-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on a staff profile page');
  t('blocks');
  $export['staff_blocks'] = $context;

  return $export;
}
