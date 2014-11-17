<?php
/**
 * @file
 * ads_items_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ads_items_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_item_condition'
  $field_bases['field_item_condition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_item_condition',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'New' => 'New',
        'Like new' => 'Like new',
        'Very good' => 'Very good',
        'Good' => 'Good',
        'Acceptable' => 'Acceptable',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
