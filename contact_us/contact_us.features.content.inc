<?php
/**
 * @file
 * contact_us.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function contact_us_content_defaults() {
  $content = array();

  $content['thank_you'] = (object) array(
    'exported_path' => 'content/thank-you',
    'title' => 'Thank you',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1335991365',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'thank_you',
    'body' => array(),
  );

return $content;
}
