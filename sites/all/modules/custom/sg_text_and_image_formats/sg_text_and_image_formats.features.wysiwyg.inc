<?php
/**
 * @file
 * sg_text_and_image_formats.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function sg_text_and_image_formats_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'image' => 1,
          'cleanup' => 1,
          'forecolor' => 1,
          'backcolor' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'sup' => 1,
          'sub' => 1,
          'blockquote' => 1,
          'code' => 1,
          'hr' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
          'visualaid' => 1,
          'removeformat' => 1,
          'charmap' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'advlink' => array(
          'advlink' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'media' => array(
          'media' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
          'pasteword' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'theme' => 'advanced',
      'language' => 'en',
      'theme_advanced_toolbar_location' => 'top',
      'theme_advanced_toolbar_align' => 'left',
      'theme_advanced_statusbar_location' => 'bottom',
      'theme_advanced_path' => 1,
      'theme_advanced_resizing' => 1,
      'theme_advanced_resize_horizontal' => 0,
      'indent' => 0,
      'verify_html' => 1,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'preformatted' => 0,
      'css_setting' => 'theme',
      'css_theme' => 'seven',
      'css_path' => '',
      'theme_advanced_blockformats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'theme_advanced_styles' => '',
      'style_formats' => '',
      'formats' => '',
      'paste_auto_cleanup_on_paste' => 1,
      'paste_block_drop' => 0,
      'paste_retain_style_properties' => 'none',
      'paste_strip_class_attributes' => 'mso',
      'paste_remove_spans' => 0,
      'paste_remove_styles' => 1,
      'paste_remove_styles_if_webkit' => 1,
      'paste_convert_middot_lists' => 1,
      'paste_convert_headers_to_strong' => 1,
      'paste_max_consecutive_linebreaks' => 1,
      'paste_text_use_dialog' => 0,
      'paste_text_sticky' => 0,
      'paste_text_sticky_default' => 1,
      'paste_text_notifyalways' => 0,
      'paste_text_linebreaktype' => 'combined',
      'autoresize_min_height' => '',
      'autoresize_max_height' => '',
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '3.5.8',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  // Exported profile: plain_text.
  $profiles['plain_text'] = array(
    'format' => 'plain_text',
    'editor' => 'tinymce',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'css_setting' => 'theme',
      'css_path' => '',
      'theme_advanced_statusbar_location' => 'bottom',
      'theme_advanced_toolbar_location' => 'top',
      'theme_advanced_toolbar_align' => 'left',
      'theme_advanced_blockformats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'theme_advanced_styles' => '',
      'theme_advanced_resizing' => 1,
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 1,
      'user_choose' => 0,
      'version' => '3.5.8',
    ),
    'name' => 'formatplain_text',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
