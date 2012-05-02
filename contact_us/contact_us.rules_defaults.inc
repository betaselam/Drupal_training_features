<?php
/**
 * @file
 * contact_us.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function contact_us_default_rules_configuration() {
  $items = array();
  $items['rules_contact_us_form_notifier_'] = entity_import('rules_config', '{ "rules_contact_us_form_notifier_" : {
      "LABEL" : "contact us form notifier ",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "DO" : [
        { "drupal_message" : { "message" : "A new contact form of the type [node:field_type] is now available." } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "7" : "7" } },
            "subject" : "New contact us request of type: [node:field_type].",
            "message" : "Alert ... new contact form is available for your review.",
            "from" : "contact@site.com"
          }
        },
        { "redirect" : { "url" : "thank_you" } }
      ]
    }
  }');
  return $items;
}
