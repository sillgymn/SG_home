<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

$info = array();
// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array('style.css');
// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'color-body' => t('Posts title color'),
  'color-headers' => t('Header color'),
  'link' => t('Links color'),
  'color-slogan' => t('Slogan color'),
  'color-base' => t('Background color'),
  'color-background-menu' => t('Menu background color'),
  'text' => t('Main text color'),
  'color-title-name' => t('Header title color'),
  'color-title' => t('Pages title color'),
  'color-menu-links' => t('Menu links color'),
  'color-menu-bg' => t('Menu links background'),
  
);

// Color schemes for the site.
// Define the default scheme.
$info['schemes'] = array(
  // Scheme title.
  'default' => array(
    // Scheme colors.
    'title' => t('Default scheme'),
    'colors' => array(
      'color-body' => '#555',
      'color-headers' => '#3c7ead',
      'link' => '#1982d1',
      'color-slogan' => '#28b5ff',
      'color-base' => '#33383a',
      'color-background-menu' => '#99aebe',
      'text' => '#726f6f',
      'color-title-name' => '#1982d1',
      'color-title' => '#269ccb',
      'color-menu-links' => '#444',
      'color-menu-bg' => '#f9f9f9',
    ),
    // Scheme title.
  ),
  'default1' => array(
    // Scheme colors.
    'title' => t('Default scheme 1'),
    'colors' => array(
      'color-body' => '#555',
      'color-headers' => '#3c7ead',
      'link' => '#1982d1',
      'color-slogan' => '#28b4ff',
      'color-base' => '#33383a',
      'color-background-menu' => '#fb0000',
      'text' => '#169FE6',
      'color-title-name' => '#1982d1',
      'color-title' => '#269ccb',
      'color-menu-links' => '#444',
      'color-menu-bg' => '#f9f9f9',
      
    ),
    // Scheme title.
  ),

);
// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();
// Files used in the scheme preview.
$info['preview_css'] = '';
$info['preview_js'] = '';
//$info['preview_html'] = 'preview.html';
// Gradients.
$info['gradients'] = array();
// Color areas to fill (x, y, width, height).
$info['fill'] = array();
// Coordinates of all the theme slices (x, y, width, height)
// With their filename as used in the stylesheet.
$info['slices'] = array();

$info['base_image'] = 'logo.png';
$info['blend_target'] = '';


