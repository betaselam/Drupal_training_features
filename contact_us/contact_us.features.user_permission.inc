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
      0 => 'CSR',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any contact_us content.
  $permissions['delete any contact_us content'] = array(
    'name' => 'delete any contact_us content',
    'roles' => array(
      0 => 'CSR',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own contact_us content.
  $permissions['delete own contact_us content'] = array(
    'name' => 'delete own contact_us content',
    'roles' => array(
      0 => 'CSR',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any contact_us content.
  $permissions['edit any contact_us content'] = array(
    'name' => 'edit any contact_us content',
    'roles' => array(
      0 => 'CSR',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own contact_us content.
  $permissions['edit own contact_us content'] = array(
    'name' => 'edit own contact_us content',
    'roles' => array(
      0 => 'CSR',
    ),
    'module' => 'node',
  );

  return $permissions;
}
