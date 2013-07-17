<?php
/**
 * @file
 * skroller_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function skroller_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'skrollr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Skrollr';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'skrollr-view skrollr-view-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'parallax-[nid]';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Background Data */
  $handler->display->display_options['fields']['field_skrollr_background_data']['id'] = 'field_skrollr_background_data';
  $handler->display->display_options['fields']['field_skrollr_background_data']['table'] = 'field_data_field_skrollr_background_data';
  $handler->display->display_options['fields']['field_skrollr_background_data']['field'] = 'field_skrollr_background_data';
  $handler->display->display_options['fields']['field_skrollr_background_data']['label'] = '';
  $handler->display->display_options['fields']['field_skrollr_background_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skrollr_background_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skrollr_background_data']['type'] = 'text_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_skrollr_body']['id'] = 'field_skrollr_body';
  $handler->display->display_options['fields']['field_skrollr_body']['table'] = 'field_data_field_skrollr_body';
  $handler->display->display_options['fields']['field_skrollr_body']['field'] = 'field_skrollr_body';
  $handler->display->display_options['fields']['field_skrollr_body']['label'] = '';
  $handler->display->display_options['fields']['field_skrollr_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_skrollr_body']['element_label_colon'] = FALSE;
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
    'skrollr_page' => 'skrollr_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'skrollr';
  $export['skrollr'] = $view;

  return $export;
}
