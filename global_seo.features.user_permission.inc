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

  // Exported permission: 'allow seo check failures'.
  $permissions['allow seo check failures'] = array(
    'name' => 'allow seo check failures',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'seo_checker',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'SEO editor' => 'SEO editor',
      'content editor' => 'content editor',
    ),
    'module' => 'metatag',
  );

  return $permissions;
}
