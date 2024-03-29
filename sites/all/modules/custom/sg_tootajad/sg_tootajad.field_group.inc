<?php
/**
 * @file
 * sg_tootajad.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sg_tootajad_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_positsioon|node|worker|form';
  $field_group->group_name = 'group_positsioon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'worker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'positsioon',
    'weight' => '3',
    'children' => array(
      0 => 'field_spetsialist',
      1 => 'field_teacher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-positsioon field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_positsioon|node|worker|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('positsioon');

  return $field_groups;
}
