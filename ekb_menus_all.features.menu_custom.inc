<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_menus_all_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-blog
  $menus['menu-blog'] = array(
    'menu_name' => 'menu-blog',
    'title' => 'Blog Contributor Menu',
    'description' => 'This is where someone can create a new blog entry.',
  );
  // Exported menu: menu-meaningful-use
  $menus['menu-meaningful-use'] = array(
    'menu_name' => 'menu-meaningful-use',
    'title' => 'Meaningful Use (MU)',
    'description' => 'OLD VERSION -- Any important documents or updates related to Meaningful Use that eCW employees should be aware of.',
  );
  // Exported menu: menu-newadmin
  $menus['menu-newadmin'] = array(
    'menu_name' => 'menu-newadmin',
    'title' => 'New Admin',
    'description' => '',
  );
  // Exported menu: menu-newsmenu
  $menus['menu-newsmenu'] = array(
    'menu_name' => 'menu-newsmenu',
    'title' => 'News',
    'description' => '',
  );
  // Exported menu: menu-quizzes-nav
  $menus['menu-quizzes-nav'] = array(
    'menu_name' => 'menu-quizzes-nav',
    'title' => 'Suckerfish Quizzes',
    'description' => 'List Quizzes such as MU, HIPAA and Sexual Harassment',
  );
  // Exported menu: menu-temporarymenu
  $menus['menu-temporarymenu'] = array(
    'menu_name' => 'menu-temporarymenu',
    'title' => 'Main Reference',
    'description' => '',
  );
  // Exported menu: menu-trainer-info
  $menus['menu-trainer-info'] = array(
    'menu_name' => 'menu-trainer-info',
    'title' => 'Trainer Info',
    'description' => '',
  );
  // Exported menu: menu-trainersmenu
  $menus['menu-trainersmenu'] = array(
    'menu_name' => 'menu-trainersmenu',
    'title' => 'Main (Used before June 4, 2011)',
    'description' => 'This is the top blue, bar of the main links on the site.  It is located on the "Suckerfish Menu" on the theme.',
  );
  // Exported menu: navigation
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: secondary-links
  $menus['secondary-links'] = array(
    'menu_name' => 'secondary-links',
    'title' => 'Secondary links',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog Contributor Menu');
  t('List Quizzes such as MU, HIPAA and Sexual Harassment');
  t('Main (Used before June 4, 2011)');
  t('Main Reference');
  t('Meaningful Use (MU)');
  t('Navigation');
  t('New Admin');
  t('News');
  t('OLD VERSION -- Any important documents or updates related to Meaningful Use that eCW employees should be aware of.');
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Secondary links');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('Suckerfish Quizzes');
  t('The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');
  t('This is the top blue, bar of the main links on the site.  It is located on the "Suckerfish Menu" on the theme.');
  t('This is where someone can create a new blog entry.');
  t('Trainer Info');


  return $menus;
}
