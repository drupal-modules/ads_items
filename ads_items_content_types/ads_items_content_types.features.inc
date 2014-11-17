<?php
/**
 * @file
 * ads_items_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_items_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ads_items_content_types_node_info() {
  $items = array(
    'ads_book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('Written, printed, illustrated, or blank sheets, made of ink, paper, parchment, or other materials, usually fastened together to hinge at one side.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ads_item' => array(
      'name' => t('Item'),
      'base' => 'node_content',
      'description' => t('An individual item or unit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
