<?php
/**
 * @file
 * sg_muuseum.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sg_muuseum_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sg_muuseum_node_info() {
  $items = array(
    'sg_muuseumi_artikkel' => array(
      'name' => t('Muuseumi artikkel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
