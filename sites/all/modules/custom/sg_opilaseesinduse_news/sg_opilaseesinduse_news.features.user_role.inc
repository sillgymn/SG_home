<?php
/**
 * @file
 * sg_opilaseesinduse_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sg_opilaseesinduse_news_user_default_roles() {
  $roles = array();

  // Exported role: opelasesinduse_editor.
  $roles['opelasesinduse_editor'] = array(
    'name' => 'opelasesinduse_editor',
    'weight' => 5,
  );

  return $roles;
}
