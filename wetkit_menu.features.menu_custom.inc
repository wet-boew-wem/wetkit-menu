<?php
/**
 * @file
 * wetkit_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wetkit_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: megamenu.
  $menus['megamenu'] = array(
    'menu_name' => 'megamenu',
    'title' => 'Mega Menu (Insert)',
    'description' => 'Mega Menu (Insert) for WetKit',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: sidebar.
  $menus['sidebar'] = array(
    'menu_name' => 'sidebar',
    'title' => 'Sidebar',
    'description' => 'Sidebar for WetKit',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mega Menu (Insert)');
  t('Mega Menu (Insert) for WetKit');
  t('Sidebar');
  t('Sidebar for WetKit');


  return $menus;
}
