<?php
/**
 * @file
 * contact_us.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function contact_us_user_default_roles() {
  $roles = array();

  // Exported role: CSR.
  $roles['CSR'] = array(
    'name' => 'CSR',
    'weight' => '6',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
