<?php
/**
 * @file
 * sg_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sg_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: dokumendiregistri haldur.
  $roles['dokumendiregistri haldur'] = array(
    'name' => 'dokumendiregistri haldur',
    'weight' => 6,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: newsmaker.
  $roles['newsmaker'] = array(
    'name' => 'newsmaker',
    'weight' => 4,
  );

  return $roles;
}
