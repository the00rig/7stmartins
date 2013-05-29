<?php
/**
 * @file
 * work_sample.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function work_sample_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|work_sample|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'work_sample';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-threecol_25_50_25_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_featured_image',
        1 => 'field_additional_imges',
      ),
      'left' => array(
        2 => 'field_responsibilities',
      ),
      'middle' => array(
        3 => 'body',
      ),
      'right' => array(
        4 => 'field_visit_site',
      ),
    ),
    'fields' => array(
      'field_featured_image' => 'top',
      'field_additional_imges' => 'top',
      'field_responsibilities' => 'left',
      'body' => 'middle',
      'field_visit_site' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|work_sample|full'] = $ds_layout;

  return $export;
}
