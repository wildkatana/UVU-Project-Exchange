<?php
/**
 * @file
 * project_exchange.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function project_exchange_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:projects
  $menu_links['main-menu:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Projects');


  return $menu_links;
}
