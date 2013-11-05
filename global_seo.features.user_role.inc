<?php
/**
 * @file
 * global_seo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function global_seo_user_default_roles() {
  $roles = array();

  // Exported role: SEO editor.
  $roles['SEO editor'] = array(
    'name' => 'SEO editor',
    'weight' => 8,
  );

  return $roles;
}
