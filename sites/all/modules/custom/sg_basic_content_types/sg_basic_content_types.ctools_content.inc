<?php
/**
 * @file
 * sg_basic_content_types.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function sg_basic_content_types_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'banner';
  $content->admin_title = 'Баннеры';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['banner'] = $content;

  return $export;
}
