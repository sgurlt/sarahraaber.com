<?php

/* Define $root as a global variable */
global $root;
$root = base_path() . path_to_theme();

include_once(drupal_get_path('theme', 'kalypso').'/includes/init.php');


function kalypso_preprocess_page(&$vars, $hook) {
  if (isset($vars['node'])) {
    $suggest = "page__node__{$vars['node']->type}";
    $vars['theme_hook_suggestions'][] = $suggest;
  }
  
  $status = drupal_get_http_header("status");  
  if($status == "404 Not Found") {      
    $vars['theme_hook_suggestions'][] = 'page__404';
  }
  // We need to rebuild the scripts variable with the new script included.
  $variables['scripts'] = drupal_get_js();

}

/* Allow sub-menu items to be displayed */
function kalypso_links($variables) {
  if (array_key_exists('id', $variables['attributes']) && $variables['attributes']['id'] == 'main-menu-links') {
  	$pid = variable_get('menu_main_links_source', 'main-menu');
	$tree = menu_tree($pid);
	return '<div id="main-menu-links">' . drupal_render($tree) . "</div>";
  }
  return theme_links($variables);
}

/* Add a comma delimiter between field tags*/
function kalypso_field($variables) {
 
  $output = '';
 
  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    
  }
 
  // Render the items.
 

  if ($variables['element']['#field_name'] == 'field_tags') {
    // For tags, concatenate into a single, comma-delimitated string.
    foreach ($variables['items'] as $delta => $item) {
      $rendered_tags[] = drupal_render($item);
    }
    $output .= implode(', ', $rendered_tags);
  }
  
  elseif ($variables['element']['#field_name'] == 'field_portfolio_tags') {
    // For tags, concatenate into a single, comma-delimitated string.
    foreach ($variables['items'] as $delta => $item) {
      $rendered_tags[] = drupal_render($item);
    }
    $output .= implode(', ', $rendered_tags);
  }
   
  else {
    // Default rendering taken from theme_field().
    foreach ($variables['items'] as $delta => $item) {
      $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
      $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
    }
  }
  
  // Render the top-level DIV.
   
  return $output;
}


/* Put Breadcrumbs in a ul li structure and add descending z-index style to each <a href> tag */
// sarahraaber.com does not have breadcrumbs
//function kalypso_breadcrumb($variables, $page) {
//  $count = '100';
//  $breadcrumb = $variables['breadcrumb'];
//
//  if (!empty($breadcrumb)) {
//
//    foreach($breadcrumb as $value) {
//      $count = $count - 1;
//      $style = ' style="z-index:'.$count.';"';
//      $pos = strpos( $value, ">");
//      $temp1=substr($value,0,$pos);
//      $temp2=substr($value,$pos,$pos);
//      $crumbs .= $value.'&#8592; ';
//    }
//
//  }
//  return $crumbs;
//}

/* Add various META tags to HTML head. */
function kalypso_preprocess_html(&$vars){
  global $root;
  $meta_title = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 1,
    '#attributes' => array(
      'name' => 'title',
      'content' => 'SarahRaaber.com'
    )
  );
  $meta_description = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 2,
    '#attributes' => array(
      'name' => 'description',
      'content' => theme_get_setting('seo_description')
    )
  );
  $meta_keywords = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 3,
    '#attributes' => array(
      'name' => 'keywords',
      'content' => theme_get_setting('seo_keywords')
    )
  );
  /* Commenting out for now
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 0,
    '#attributes' => array(
      'content' =>  'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    )
  );
  */
  $font = array(
    '#tag' => 'link', 
    '#weight' => 4,
    '#attributes' => array( 
      'href' => 'http://fonts.googleapis.com/css?family=Open+Sans', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  );
  $rale = array(
    '#tag' => 'link', 
    '#weight' => 5,
    '#attributes' => array( 
      'href' => 'http://fonts.googleapis.com/css?family=Raleway', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  );
  $bootstrap = array(
    '#tag' => 'link', 
    '#weight' => 6,
    '#attributes' => array( 
      'href' => ''.$root.'/bootstrap/css/bootstrap.css', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
      'media' => 'screen',
    ),
  );
  $bootstrap_responsive = array(
    '#tag' => 'link', 
    '#weight' => 7,
    '#attributes' => array( 
      'href' => ''.$root.'/bootstrap/css/bootstrap-responsive.css', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
      'media' => 'screen',
    ),
  );
  $style = array(
    '#tag' => 'link', 
    '#weight' => 8,
    '#attributes' => array( 
      'href' => ''.$root.'/css/style.css', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
      'media' => 'screen',
    ),
  );
  $color = array(
    '#tag' => 'link', 
    '#weight' => 9,
    '#attributes' => array( 
      'href' => ''.$root.'/css/colors/'.theme_get_setting('color_scheme').'.css', 
      'rel' => 'stylesheet',
      'type' => 'text/css',
      'media' => 'screen',
    ),
  );
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 10,
    '#attributes' => array(
      'name' => 'viewport',
      'content' =>  'width=device-width, initial-scale=1, maximum-scale=1',
    )
  );
  $font_family = array(
    '#type' => 'markup',
    '#markup' => "<style type='text/css'>body {font-family:".theme_get_setting('font_family')." !important;}</style> ",
    '#weight' => 11,
  );
  $headings = array(
    '#type' => 'markup',
    '#markup' => "<style type='text/css'>h1 {font-size:".theme_get_setting('h1').";} h2 {font-size:".theme_get_setting('h2').";} h3 {font-size:".theme_get_setting('h3').";} h4 {font-size:".theme_get_setting('h4').";} h5 {font-size:".theme_get_setting('h5').";} h6 {font-size:".theme_get_setting('h6').";}</style> ",
    '#weight' => 12,
  );
  
  $background = array(
    '#type' => 'markup',
    '#markup' => "<style type='text/css'>body {background-image:url(".$root."/images/backgrounds/".theme_get_setting('background_select').".png);}</style> ",
    '#weight' => 13,
  );

    
  if (theme_get_setting('seo_title') != "") {
    drupal_add_html_head( $meta_title, 'meta_title' );
  }
   if (theme_get_setting('seo_description') != "") {
    drupal_add_html_head( $meta_description, 'meta_description' );
  }
  if (theme_get_setting('seo_keywords') != "") {
    drupal_add_html_head( $meta_keywords, 'meta_keywords' );
  }
  drupal_add_html_head( $font, 'google_font_open_sans' );
  drupal_add_html_head( $rale, 'google_font_raleway' );
  drupal_add_html_head( $bootstrap, 'bootstrap_style' );
  drupal_add_html_head( $bootstrap_responsive, 'bootstrap_responsive_style' );
  drupal_add_html_head( $style, 'main_style' );
  drupal_add_html_head( $color, 'color_style' );
  drupal_add_html_head( $viewport, 'meta_viewport' );
  drupal_add_html_head( $font_family, 'font_family');
  drupal_add_html_head( $headings, 'headings');
  drupal_add_html_head( $background, 'background');
    
}

/* Separate from kalypso_preprocess_html so function can be called directly before </head> tag. */
function kalypso_user_css() {
  echo "<!-- User defined CSS -->";
  echo "<style type='text/css'>";
  echo theme_get_setting('user_css');
  echo "</style>";
  echo "<!-- End user defined CSS -->";	
}

/**
 * Implements hook_preprocess_views_view().
 */
function kalypso_preprocess_views_view(&$vars) {

  // Uncomment the lines below to see variables you can use to target a view.
  // This requires http://drupal.org/project/devel to be installed.
//  dpm($vars['view']->name, 'view name');

  // Hook view id specific functions.
  // This is a super neato trick.
  if (isset($vars['view']->name)) {
    $function = 'preprocess_views_view__' . $vars['view']->name;
    if (function_exists($function)) {
      $function($vars);
    }
  }
}

/**
 * Implements preprocess_views_view__VIEW().
 */
function preprocess_views_view__artwork(&$vars) {
  $display_id = $vars['display_id'];
  dpm($display_id);
  $classes = &$vars['classes_array'];
  $title_classes = &$vars['title_attributes_array']['class'];
  $content_classes = &$vars['content_attributes_array']['class'];

  // Uncomment the lines below to see variables you can use to target a view.
  // This requires http://drupal.org/project/devel to be installed.
  // dpm($vars['view']->name, 'view name');

  switch ($display_id) {

    // Call flexslider scripts.
    case 'page_3':
      libraries_load('photoswipe');
      break;
   }
}


?>