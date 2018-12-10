<?php
/**
 * @file
 * sg_text_and_image_formats.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function sg_text_and_image_formats_image_default_styles() {
  $styles = array();

  // Exported image style: ad_images.
  $styles['ad_images'] = array(
    'label' => 'ad images',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'label' => 'gallery_thumb',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 225,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: photod.
  $styles['photod'] = array(
    'label' => 'photod',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
