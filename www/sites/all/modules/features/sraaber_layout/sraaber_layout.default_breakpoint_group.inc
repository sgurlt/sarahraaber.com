<?php
/**
 * @file
 * sraaber_layout.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function sraaber_layout_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'artwork';
  $breakpoint_group->name = 'Artwork';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.artwork_desktop',
    1 => 'custom.user.artwork_1_row',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['artwork'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'home_recent_work';
  $breakpoint_group->name = 'Home_recent_work';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.home_desktop',
    1 => 'custom.user.home_1_row',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['home_recent_work'] = $breakpoint_group;

  return $export;
}
