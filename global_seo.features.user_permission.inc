<?php
/**
 * @file
 * global_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function global_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'SEO editor' => 'SEO editor',
    ),
    'module' => 'metatag',
  );

  return $permissions;
}
