<?php
/**
 * @file
 * sg_muuseum.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sg_muuseum_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sg_muuseum';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SG muuseum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kooli muuseum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Kirjeid lehel';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kõik -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Nihe';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Väli: Sisu: Pildid */
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['id'] = 'field_sg_muuseumi_pildid';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['table'] = 'field_data_field_sg_muuseumi_pildid';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['field'] = 'field_sg_muuseumi_pildid';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['label'] = '';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['settings'] = array(
    'image_style' => 'gallery_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_sg_muuseumi_pildid']['delta_offset'] = '1';
  /* Väli: Sisu: Pealkiri */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Lühike kriteerium: Sisu: Postituse kuupäev */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sg_muuseumi_artikkel' => 'sg_muuseumi_artikkel',
  );
  /* Filtri kriteeriumid: Sisu: Keel */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sg-muuseum';
  $translatables['sg_muuseum'] = array(
    t('Master'),
    t('Kooli muuseum'),
    t('veel'),
    t('Rakenda'),
    t('Lähtesta'),
    t('Sorteerimise alus'),
    t('Kasvav'),
    t('Kahanev'),
    t('Kirjeid lehel'),
    t('- Kõik -'),
    t('Nihe'),
    t('« esimene'),
    t('‹ eelmine'),
    t('järgmine ›'),
    t('viimane »'),
    t('Page'),
  );
  $export['sg_muuseum'] = $view;

  return $export;
}
