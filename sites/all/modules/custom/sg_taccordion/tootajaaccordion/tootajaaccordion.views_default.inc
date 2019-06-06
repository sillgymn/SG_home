<?php
/**
 * @file
 * tootajaaccordion.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tootajaaccordion_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tootajadaccordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tootajadaccordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'tootajadaccordion';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_eriala',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['style_options']['fillspace'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: amet */
  $handler->display->display_options['fields']['field_amet']['id'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['table'] = 'field_data_field_amet';
  $handler->display->display_options['fields']['field_amet']['field'] = 'field_amet';
  $handler->display->display_options['fields']['field_amet']['label'] = '/////////////////////////////////////////////////amet';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: eriala */
  $handler->display->display_options['fields']['field_eriala']['id'] = 'field_eriala';
  $handler->display->display_options['fields']['field_eriala']['table'] = 'field_data_field_eriala';
  $handler->display->display_options['fields']['field_eriala']['field'] = 'field_eriala';
  $handler->display->display_options['fields']['field_eriala']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_eriala']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: eriala (field_eriala) */
  $handler->display->display_options['filters']['field_eriala_value']['id'] = 'field_eriala_value';
  $handler->display->display_options['filters']['field_eriala_value']['table'] = 'field_data_field_eriala';
  $handler->display->display_options['filters']['field_eriala_value']['field'] = 'field_eriala_value';
  $handler->display->display_options['filters']['field_eriala_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_eriala_value']['expose']['operator_id'] = 'field_eriala_value_op';
  $handler->display->display_options['filters']['field_eriala_value']['expose']['label'] = 'eriala (field_eriala)';
  $handler->display->display_options['filters']['field_eriala_value']['expose']['operator'] = 'field_eriala_value_op';
  $handler->display->display_options['filters']['field_eriala_value']['expose']['identifier'] = 'field_eriala_value';
  $handler->display->display_options['filters']['field_eriala_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_eriala_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_eriala_value']['group_info']['label'] = 'eriala (field_eriala)';
  $handler->display->display_options['filters']['field_eriala_value']['group_info']['identifier'] = 'field_eriala_value';
  $handler->display->display_options['filters']['field_eriala_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_eriala_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tootajadaccordion';
  $translatables['tootajadaccordion'] = array(
    t('Master'),
    t('tootajadaccordion'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('/////////////////////////////////////////////////amet'),
    t('eriala'),
    t('eriala (field_eriala)'),
    t('Page'),
  );
  $export['tootajadaccordion'] = $view;

  return $export;
}
