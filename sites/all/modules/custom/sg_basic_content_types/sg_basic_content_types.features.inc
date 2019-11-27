<?php
/**
 * @file
 * sg_basic_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sg_basic_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sg_basic_content_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sg_basic_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikkel'),
      'base' => 'node_content',
      'description' => t('<em>Artikleid</em> kasutatakse aeguva sisu jaoks nagu uudised, pressiteated või blogi sissekanded.'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'content_slider' => array(
      'name' => t('Content_slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'document_folder' => array(
      'name' => t('Document Folder'),
      'base' => 'node_content',
      'description' => t('Dokumendiregisteri folder'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'filelist' => array(
      'name' => t('Filelist'),
      'base' => 'node_content',
      'description' => t('список фалйов'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'footer_logo' => array(
      'name' => t('Footer logo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('image gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Galerii'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Uudis'),
      'base' => 'node_content',
      'description' => t('Новости сайта, публикуемые на главной странице'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Lihtlehekülg'),
      'base' => 'node_content',
      'description' => t('<em>Lihtlehti</em> võib kasutada muutumatu sisu jaoks, nagu näiteks leht \'Meist lähemalt\'.'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'projektid' => array(
      'name' => t('Projektid'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'right_sidepane_logo' => array(
      'name' => t('right sidepane logo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'sg_ads' => array(
      'name' => t('Kuulutused'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'slider_image' => array(
      'name' => t('Slider image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Slider image'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
