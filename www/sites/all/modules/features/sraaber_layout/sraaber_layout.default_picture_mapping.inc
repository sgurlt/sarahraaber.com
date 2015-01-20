<?php
/**
 * @file
 * sraaber_layout.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function sraaber_layout_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'artwork';
  $picture_mapping->machine_name = 'artwork';
  $picture_mapping->breakpoint_group = 'artwork';
  $picture_mapping->mapping = array(
    'custom.user.artwork_desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'artwork_standard',
      ),
    ),
    'custom.user.artwork_1_row' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'artwork_1_row',
      ),
    ),
  );
  $export['artwork'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Home recent work';
  $picture_mapping->machine_name = 'home_recent_work';
  $picture_mapping->breakpoint_group = 'home_recent_work';
  $picture_mapping->mapping = array(
    'custom.user.home_desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'home_recent_work_standard',
      ),
    ),
    'custom.user.home_1_row' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'home_recent_work_1_row',
      ),
    ),
  );
  $export['home_recent_work'] = $picture_mapping;

  return $export;
}
