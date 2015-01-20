<?php
/**
 * @file
 * sraaber_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sraaber_content_node_info() {
  $items = array(
    'graphic' => array(
      'name' => t('Graphic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
