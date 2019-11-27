<?php
/**
 * @file
 * sg_tootajad.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sg_tootajad_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'specialist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spetsialistid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Õpetajad';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_foto' => 'field_foto',
    'field_amet' => 'field_amet',
    'field_subject' => 'field_subject',
    'title' => 'title',
    'field_tel' => 'field_tel',
    'field_email' => 'field_email',
    'field_hours' => 'field_hours',
    'language' => 'language',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_foto' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_amet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p></p>';
  /* Field: Content: foto */
  $handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
  $handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['label'] = '';
  $handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto']['empty'] = '<div id="no_photo">&nbsp;</div>';
  $handler->display->display_options['fields']['field_foto']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_foto']['settings'] = array(
    'colorbox_node_style' => 'photod',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: amet */
  $handler->display->display_options['fields']['field_amet']['id'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['table'] = 'field_data_field_amet';
  $handler->display->display_options['fields']['field_amet']['field'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['label'] = '';
  $handler->display->display_options['fields']['field_amet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amet']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ees - ja perekonnanimi';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br>[field_amet]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: tel */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['label'] = '';
  $handler->display->display_options['fields']['field_tel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tel']['element_label_colon'] = FALSE;
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Kontaktandmed';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: vastuvõttuaeg */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Vastuvõttuaeg';
  $handler->display->display_options['fields']['field_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Field: Content: Õppeaine õpetaja */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['exclude'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'worker' => 'worker',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Spetsialistid */
  $handler = $view->new_display('page', 'Spetsialistid', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Juhtkond ja spetsialistid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: foto */
  $handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
  $handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['label'] = '';
  $handler->display->display_options['fields']['field_foto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto']['empty'] = '<div id="no_photo">&nbsp;</div>';
  $handler->display->display_options['fields']['field_foto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_foto']['settings'] = array(
    'colorbox_node_style' => 'photod',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: amet */
  $handler->display->display_options['fields']['field_amet']['id'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['table'] = 'field_data_field_amet';
  $handler->display->display_options['fields']['field_amet']['field'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['label'] = '';
  $handler->display->display_options['fields']['field_amet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amet']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ees - ja perekonnanimi';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<br>[field_amet]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a></br>';
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_email']['separator'] = '';
  /* Field: Content: vastuvõttuaeg */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Vastuvõttuaeg';
  $handler->display->display_options['fields']['field_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['alter']['text'] = '<b>Vastuvõtuaeg:</b><br>[field_hours]';
  $handler->display->display_options['fields']['field_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['empty_zero'] = TRUE;
  /* Field: Content: tel */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['label'] = 'Kontaktandmed';
  $handler->display->display_options['fields']['field_tel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tel']['alter']['text'] = 'tel:[field_tel] &nbsp;</br>';
  $handler->display->display_options['fields']['field_tel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tel']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tel']['empty_zero'] = TRUE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Kontaktandmed';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_tel][field_email][field_hours]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: kaal (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content revision: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'worker' => 'worker',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Spetsialist (field_spetsialist) */
  $handler->display->display_options['filters']['field_spetsialist_value']['id'] = 'field_spetsialist_value';
  $handler->display->display_options['filters']['field_spetsialist_value']['table'] = 'field_data_field_spetsialist';
  $handler->display->display_options['filters']['field_spetsialist_value']['field'] = 'field_spetsialist_value';
  $handler->display->display_options['filters']['field_spetsialist_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'juhtkond_spetsialistid';

  /* Display: Õpetajad */
  $handler = $view->new_display('page', 'Õpetajad', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: foto */
  $handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
  $handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
  $handler->display->display_options['fields']['field_foto']['label'] = '';
  $handler->display->display_options['fields']['field_foto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto']['empty'] = '<div id="no_photo">&nbsp;</div>';
  $handler->display->display_options['fields']['field_foto']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_foto']['settings'] = array(
    'colorbox_node_style' => 'photod',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: amet */
  $handler->display->display_options['fields']['field_amet']['id'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['table'] = 'field_data_field_amet';
  $handler->display->display_options['fields']['field_amet']['field'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['label'] = '';
  $handler->display->display_options['fields']['field_amet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amet']['element_default_classes'] = FALSE;
  /* Field: Content: Õppeaine õpetaja */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ees - ja perekonnanimi';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong><br>Õppeaine: [field_subject]<br> [field_amet]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: tel */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['label'] = '';
  $handler->display->display_options['fields']['field_tel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tel']['element_label_colon'] = FALSE;
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Kontaktandmed';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]">[field_email]</a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: vastuvõttuaeg */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Vastuvõttuaeg';
  $handler->display->display_options['fields']['field_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'worker' => 'worker',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Õpetaja (field_teacher) */
  $handler->display->display_options['filters']['field_teacher_value']['id'] = 'field_teacher_value';
  $handler->display->display_options['filters']['field_teacher_value']['table'] = 'field_data_field_teacher';
  $handler->display->display_options['filters']['field_teacher_value']['field'] = 'field_teacher_value';
  $handler->display->display_options['filters']['field_teacher_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'opetajad';
  $translatables['specialist'] = array(
    t('Master'),
    t('Õpetajad'),
    t('veel'),
    t('Rakenda'),
    t('Lähtesta'),
    t('Sorteerimise alus'),
    t('Kasvav'),
    t('Kahanev'),
    t('<p></p>'),
    t('<div id="no_photo">&nbsp;</div>'),
    t('Ees - ja perekonnanimi'),
    t('[title]<br>[field_amet]'),
    t('Kontaktandmed'),
    t('<a href="mailto:[field_email]">[field_email]</a>'),
    t('Vastuvõttuaeg'),
    t('Õppeaine õpetaja'),
    t('Spetsialistid'),
    t('Juhtkond ja spetsialistid'),
    t('<a href="mailto:[field_email]">[field_email]</a></br>'),
    t('<b>Vastuvõtuaeg:</b><br>[field_hours]'),
    t('tel:[field_tel] &nbsp;</br>'),
    t('[field_tel][field_email][field_hours]'),
    t('<strong>[title]</strong><br>Õppeaine: [field_subject]<br> [field_amet]'),
  );
  $export['specialist'] = $view;

  return $export;
}
