<?php
/**
 * @file
 * skroller_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function skroller_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function skroller_feature_node_info() {
  $items = array(
    'skrollr_page' => array(
      'name' => t('Skrollr Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
