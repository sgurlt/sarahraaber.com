<?php
/**
 * @file
 * sraaber_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sraaber_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'kalypso';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_kalypso_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon02.png',
    'favicon_upload' => '',
    'breadcrumbs' => 0,
    'seo_title' => 'Sebastian Gurlt',
    'seo_description' => '',
    'seo_keywords' => '',
    'branding_type' => 'text',
    'bg_path' => 'public://',
    'bg_upload' => '',
    'background_path' => 'public://',
    'background_upload' => '',
    'enable_highlight' => 1,
    'highlight_text' => '<center>HOME</center>',
    'enable_slider' => 1,
    'slider_type' => 'default',
    'slides_number' => '4',
    'slide_path_1' => 'public://slider05.jpg',
    'slide_upload_1' => '',
    'slide_url_1' => '',
    'slide_caption_1' => 'test',
    'slide_path_2' => 'public://slider07.jpg',
    'slide_upload_2' => '',
    'slide_url_2' => '',
    'slide_caption_2' => 'test',
    'slide_path_3' => 'public://slider04.jpg',
    'slide_upload_3' => '',
    'slide_url_3' => '',
    'slide_caption_3' => 'test',
    'slide_path_4' => 'public://slider06.jpg',
    'slide_upload_4' => '',
    'slide_url_4' => '',
    'slide_caption_4' => 'test',
    'enable_panels' => 0,
    'panels_title' => 'WHAT WE DO',
    'enable_portfolio' => 1,
    'portfolio_title' => 'RECENT WORK',
    'enable_contact' => 0,
    'contact_title' => 'GET IN TOUCH',
    'enable_map' => 1,
    'map_address' => 'http://maps.google.de/maps?q=wiesbaden+Bl%C3%BCcherstra%C3%9Fe&hl=de&ie=UTF8&ll=50.080691,8.22464&spn=0.011911,0.033023&sll=50.079093,8.231678&sspn=0.011911,0.033023&hnear=Bl%C3%BCcherstra%C3%9Fe,+65195+Wiesbaden,+Hessen&t=m&z=16',
    'enable_clients' => 0,
    'clients_title' => 'OUR CLIENTS',
    'page_layout' => 'full_width',
    'blog_layout' => 'sidebar_right',
    'color_scheme' => 'purple',
    'background_select' => 'gplaypattern',
    'user_css' => '',
    'font_family' => 'Arial, Helvetica, sans-serif',
    'h1' => '36px',
    'h2' => '30px',
    'h3' => '24px',
    'h4' => '18px',
    'h5' => '14px',
    'h6' => '12px',
    'enable_primary_footer' => 1,
    'twitter_icon' => 1,
    'twitter_url' => 'http://twitter.com',
    'facebook_icon' => 1,
    'facebook_url' => 'http://facebook.com',
    'flickr_icon' => 0,
    'flickr_url' => 'http://flickr.com',
    'google_plus_icon' => 1,
    'google_plus_url' => 'http://plus.google.com',
    'pinterest_icon' => 0,
    'pinterest_url' => 'http://pinterest.com',
    'linkedin_icon' => 0,
    'linkedin_url' => 'http://linkedin.com',
    'youtube_icon' => 0,
    'youtube_url' => 'http://youtube.com',
    'rss_icon' => 1,
    'rss_url' => '',
    'enable_secondary_footer' => 1,
    'secondary_footer_text' => 'Design by <a href="http://refaktor.co" target="_blank">Refaktor</a>',
    'options__active_tab' => 'edit-general',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_kalypso_settings'] = $strongarm;

  return $export;
}
