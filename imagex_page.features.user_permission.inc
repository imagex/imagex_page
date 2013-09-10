<?php
/**
 * @file
 * imagex_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create page_ct content.
  $permissions['create page_ct content'] = array(
    'name' => 'create page_ct content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any page_ct content.
  $permissions['delete any page_ct content'] = array(
    'name' => 'delete any page_ct content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own page_ct content.
  $permissions['delete own page_ct content'] = array(
    'name' => 'delete own page_ct content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any page_ct content.
  $permissions['edit any page_ct content'] = array(
    'name' => 'edit any page_ct content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own page_ct content.
  $permissions['edit own page_ct content'] = array(
    'name' => 'edit own page_ct content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}