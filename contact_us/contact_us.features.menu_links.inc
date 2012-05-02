<?php
/**
 * @file
 * contact_us.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_us_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:contactusview
  $menu_links['main-menu:contactusview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contactusview',
    'router_path' => 'contactusview',
    'link_title' => 'Contact Us',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/add/contact-us
  $menu_links['main-menu:node/add/contact-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/contact-us',
    'router_path' => 'node/add/contact-us',
    'link_title' => 'Contact Us Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/contact-us
  $menu_links['navigation:node/add/contact-us'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/contact-us',
    'router_path' => 'node/add/contact-us',
    'link_title' => 'contact_us',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Contact Us Form');
  t('contact_us');


  return $menu_links;
}
