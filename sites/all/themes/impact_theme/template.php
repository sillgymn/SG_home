<?php
/**
 * Implements hook_html_head_alter().
 * This will overwrite the default meta character type tag with HTML5 version.
 */
function impact_theme_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function impact_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // comment below line to hide current page to breadcrumb
  $breadcrumb[] = drupal_get_title();
    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

function impact_theme_preprocess_html(&$vars) {
  // Add body classes for custom design options
  $sidebar_layout = theme_get_setting('sidebar_layout', 'impact_theme');
  if($sidebar_layout == 'left_sidebar') {
    $vars['classes_array'][] = 'left-sidebar';
  }
  $sidebar_width = theme_get_setting('sidebar_width', 'impact_theme');
  if($sidebar_width == 'wide_sidebar') {
    $vars['classes_array'][] = 'wide-sidebar';
  }
}

/**
 * Override or insert variables into the page template.
 */
function impact_theme_preprocess_page(&$vars) {
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
  $view = views_get_page_view();
  if (!empty($view)) {
    global $base_path;
    if (strtolower($view->name) == 'dokumendiregister') {
      drupal_add_js(drupal_get_path('theme', 'impact_theme') . '/js/docreg.js');
    }
  }
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function impact_theme_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function impact_theme_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
  if($variables['view_mode'] == 'teaser') {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__teaser';   
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->nid . '__teaser';
  }

  $variables['date'] = t('!datetime', array('!datetime' =>  date('d.m.Y', $variables['created'])));
   $field = field_get_items('node', $node, 'body');
  // If available do execution ..
  if ($field) {
    $show_read_more = 1;
    $body = $node->body['und'][0]['safe_value'];
    $galery_images =  $field = field_get_items('node', $node, 'field_news_gallery'); 
    if (isset($galery_images) && count($galery_images) > 1 )  {
          
    }
    else {
        if (stristr($body, "<!--break-->")) { // Lets make sure that this is indeed the end of article.
          $rest_of_the_text = substr($body, strpos($body, "<!--break-->"));
          if (strlen($rest_of_the_text) < strlen("<!--break--></p><p>&nbsp;</p>"))
            $show_read_more = 0;
        } else if ($variables['content']['body'][0]['#markup'] == $body) {
            $show_read_more = 0;
        }
        if($show_read_more == 0) {
            unset($variables['content']['links']['node']['#links']['node-readmore']);
        }
    }
    
  }
}

function impact_theme_page_alter($page) {
  // <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"/>
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' =>  'viewport',
    'content' =>  'width=device-width, initial-scale=1, maximum-scale=1'
    )
  );
  drupal_add_html_head($viewport, 'viewport');
}

/**
 * Add javascript files for front-page jquery slideshow.
 */
if (drupal_is_front_page()) {
 // drupal_add_js(drupal_get_path('theme', 'impact_theme') . '/js/jquery.cycle.all.min.js');
  drupal_add_js(drupal_get_path('theme', 'impact_theme') . '/js/slide.js');
}


/**
 * Implements template_preprocess_html.
 *
 * @param mixed $variables
 *   Variables.
 */
function  impact_theme_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}
/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
/*function  impact_theme_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}*/


