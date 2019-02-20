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
  'color-body' => t('body color'), 
  'color-text' => t('Main text color'),
  'color-white' => t('Menu links color'),
  'color-headers' => t('Header color'),
  'color-links' => t('Links color'),
  'color-slogan' => t('Slogan color'),
  'color-background' => t('Background color'),
  'color-background-menu' => t('Menu background color'),
);
// Color schemes for the site.
// Define the default scheme.
$info['schemes'] = array(
  // Scheme title.
  'default' => array(
    // Scheme colors.
    'title' => t('Default scheme'),
    'colors' => array(
      'color-body' => '#33383a',
         'color-text' =>'#726f6f',
      'color-white' => '#fffffe',
      'color-headers' => '#555555',
      'color-links' => '#1982d1',
      'color-slogan' => '#28b4ff',
      'color-background' => '#33383a',
      'color-background-menu' => '#3e7bab',
  ),
    // Scheme title.
  ),
  /*'syddjurs_scheme' => array(
    // Scheme colors.
    'title' => t('OS2dagsorden lynglilla'),
    'colors' => array(
      'color-body' => '#fff',
      'color-white' => '#fff',
      'color-branding-secondary' => '#ae477d',
      'color-branding-primary' => '#9c1a5e',
      'color-background-primary' => '#f7f1f1',
      'color-background-secondary' => '#e3d6d6',
    ),
    // Define the default scheme.
  ),
  // Scheme title.
  'scheme_blue' => array(
    // Scheme colors.
    'title' => t('OS2dagsorden blå'),
    'colors' => array(
      'color-body' => '#fff',
      'color-white' => '#fff',
      'color-branding-secondary' => '#2d8bc0',
      'color-branding-primary' => '#2c8abe',
      'color-background-primary' => '#fbfcfd',
      'color-background-secondary' => '#f2f4fb',
    ),
  ),*/
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
