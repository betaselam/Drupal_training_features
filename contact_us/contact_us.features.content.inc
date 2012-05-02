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
    'exported_path' => 'thank_you',
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
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'you\'re welcome',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>you\'re welcome</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_subtitle' => array(
      'und' => array(
        0 => array(
          'value' => 'blah',
          'format' => 'filtered_html',
          'safe_value' => '<p>blah</p>
',
        ),
      ),
    ),
  );

return $content;
}
