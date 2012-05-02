<?php
/**
 * @file
 * contact_us.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function contact_us_user_default_permissions() {
  $permissions = array();

  // Exported permission: create contact_us content.
  $permissions['create contact_us content'] = array(
    'name' => 'create contact_us content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
