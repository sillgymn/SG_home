<?php
/**
 * @file
 * sg_pakkumised.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sg_pakkumised_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sg_pakkumised_node_info() {
  $items = array(
    't_pakkumised' => array(
      'name' => t('Tööpakkumised'),
      'base' => 'node_content',
      'description' => t('tööpakummised'),
      'has_title' => '1',
      'title_label' => t('Ametinimetus'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
