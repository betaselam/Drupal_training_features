<?php
/**
 * @file
 * contact_us.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function contact_us_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contact_us';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_contact_us'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contact_us';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contact_us'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_content_enabled';
  $strongarm->value = 1;
  $export['node_content_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contact_us';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_contact_us'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contact_us';
  $strongarm->value = '1';
  $export['node_preview_contact_us'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contact_us';
  $strongarm->value = 1;
  $export['node_submitted_contact_us'] = $strongarm;

  return $export;
}
