<?php
/**
 * @file
 * sg_pakkumised.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sg_pakkumised_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 't_pakkumised';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tööpakkumised';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lõpptähtaeg */
  $handler->display->display_options['fields']['field_application_deadline']['id'] = 'field_application_deadline';
  $handler->display->display_options['fields']['field_application_deadline']['table'] = 'field_data_field_application_deadline';
  $handler->display->display_options['fields']['field_application_deadline']['field'] = 'field_application_deadline';
  $handler->display->display_options['fields']['field_application_deadline']['label'] = 'Application deadline';
  $handler->display->display_options['fields']['field_application_deadline']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_toopakkumised_email']['id'] = 'field_toopakkumised_email';
  $handler->display->display_options['fields']['field_toopakkumised_email']['table'] = 'field_data_field_toopakkumised_email';
  $handler->display->display_options['fields']['field_toopakkumised_email']['field'] = 'field_toopakkumised_email';
  $handler->display->display_options['fields']['field_toopakkumised_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_toopakkumised_email']['alter']['target'] = 'mailto:[field_toopakkumised_email-value] ';
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
    't_pakkumised' => 't_pakkumised',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'toopakkumised';
  $translatables['t_pakkumised'] = array(
    t('Master'),
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
    t('Application deadline'),
    t('Email'),
    t('Page'),
  );
  $export['t_pakkumised'] = $view;

  return $export;
}
