<?php
/**
 * @file
 * contact_us.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contact_us_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function contact_us_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function contact_us_node_info() {
  $items = array(
    'contact_us' => array(
      'name' => t('contact_us'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}


