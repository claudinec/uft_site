<?php
/**
 * @file
 * uft_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events/Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Upcoming events and important dates',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events/Calendar');


  return $menu_links;
}
