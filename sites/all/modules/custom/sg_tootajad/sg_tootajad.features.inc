<?php
/**
 * @file
 * sg_tootajad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sg_tootajad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sg_tootajad_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sg_tootajad_node_info() {
  $items = array(
    'worker' => array(
      'name' => t('Töötajad'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Perekinnanimi, Nimi'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
