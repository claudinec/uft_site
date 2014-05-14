<?php
/**
 * @file
 * uft_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uft_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_blocks';
  $context->description = 'Blocks to display only on the front page.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-welcome' => array(
          'module' => 'boxes',
          'delta' => 'welcome',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display only on the front page.');
  t('blocks');
  $export['front_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_blocks';
  $context->description = 'Blocks to display on all pages except timetable.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~timetable*' => '~timetable*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-important-links' => array(
          'module' => 'menu',
          'delta' => 'menu-important-links',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on all pages except timetable.');
  t('blocks');
  $export['sitewide_blocks'] = $context;

  return $export;
}
