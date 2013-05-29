<?php
/**
 * @file
 * work_sample.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function work_sample_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function work_sample_node_info() {
  $items = array(
    'work_sample' => array(
      'name' => t('Work Sample'),
      'base' => 'node_content',
      'description' => t('Add Work Samples here.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
