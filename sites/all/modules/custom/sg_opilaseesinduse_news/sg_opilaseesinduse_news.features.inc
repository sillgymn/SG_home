<?php
/**
 * @file
 * sg_opilaseesinduse_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function sg_opilaseesinduse_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sg_opilaseesinduse_news_node_info() {
  $items = array(
    'opilaste_esindus_news' => array(
      'name' => t('Новости ученического представильтельства'),
      'base' => 'node_content',
      'description' => t('Отображаются на странице ученического представительства'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
