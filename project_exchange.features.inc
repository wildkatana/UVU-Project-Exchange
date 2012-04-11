<?php
/**
 * @file
 * project_exchange.features.inc
 */

/**
 * Implements hook_views_api().
 */
function project_exchange_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function project_exchange_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('A Project Proposal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
