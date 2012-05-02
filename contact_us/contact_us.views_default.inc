<?php
/**
 * @file
 * contact_us.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function contact_us_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'contactusview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ContactUsView';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact List';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Content: Address Line 1 */
  $handler->display->display_options['fields']['field_addres_1']['id'] = 'field_addres_1';
  $handler->display->display_options['fields']['field_addres_1']['table'] = 'field_data_field_addres_1';
  $handler->display->display_options['fields']['field_addres_1']['field'] = 'field_addres_1';
  $handler->display->display_options['fields']['field_addres_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_addres_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_addres_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_addres_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_addres_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_addres_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_addres_1']['field_api_classes'] = 0;
  /* Field: Content: Address Line 2 */
  $handler->display->display_options['fields']['field_address_2']['id'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['table'] = 'field_data_field_address_2';
  $handler->display->display_options['fields']['field_address_2']['field'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_2']['field_api_classes'] = 0;
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_message']['id'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['table'] = 'field_data_field_message';
  $handler->display->display_options['fields']['field_message']['field'] = 'field_message';
  $handler->display->display_options['fields']['field_message']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_message']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_message']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_message']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_message']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_message']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_message']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_message']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_message']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_message']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_us' => 'contact_us',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contactusview';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contact Us';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['contactusview'] = $view;

  return $export;
}
