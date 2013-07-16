<?php
/**
 * @file
 * uft_handbook.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uft_handbook_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1703
  $menu_links['main-menu:node/1703'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1703',
    'router_path' => 'node/%',
    'link_title' => 'Information',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Information');


  return $menu_links;
}
