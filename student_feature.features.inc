<?php
/**
 * @file
 * student_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function student_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function student_feature_node_info() {
  $items = array(
    'student' => array(
      'name' => t('Student'),
      'base' => 'node_content',
      'description' => t('Content type student'),
      'has_title' => '1',
      'title_label' => t('Student'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
