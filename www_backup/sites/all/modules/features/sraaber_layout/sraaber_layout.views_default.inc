<?php
/**
 * @file
 * sraaber_layout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sraaber_layout_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'artwork';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Artwork';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[field_image_type]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Image (field_portfolio_image:fid) */
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['id'] = 'field_portfolio_image_fid';
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['field'] = 'field_portfolio_image_fid';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_portfolio_image']['id'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['field'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_portfolio_image']['settings'] = array(
    'colorbox_node_style' => 'artwork',
    'colorbox_image_style' => 'colorbox',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Sort criterion: Content: Image Type (field_image_type) */
  $handler->display->display_options['sorts']['field_image_type_value']['id'] = 'field_image_type_value';
  $handler->display->display_options['sorts']['field_image_type_value']['table'] = 'field_data_field_image_type';
  $handler->display->display_options['sorts']['field_image_type_value']['field'] = 'field_image_type_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'graphic' => 'graphic',
  );
  /* Filter criterion: Content: Image Type (field_image_type) */
  $handler->display->display_options['filters']['field_image_type_value']['id'] = 'field_image_type_value';
  $handler->display->display_options['filters']['field_image_type_value']['table'] = 'field_data_field_image_type';
  $handler->display->display_options['filters']['field_image_type_value']['field'] = 'field_image_type_value';
  $handler->display->display_options['filters']['field_image_type_value']['value'] = array(
    'Digital' => 'Digital',
    'Traditional' => 'Traditional',
    'Graphics' => 'Graphics',
    'Scraps' => 'Scraps',
  );
  $handler->display->display_options['filters']['field_image_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_type_value']['expose']['operator_id'] = 'field_image_type_value_op';
  $handler->display->display_options['filters']['field_image_type_value']['expose']['label'] = 'Image Type (field_image_type)';
  $handler->display->display_options['filters']['field_image_type_value']['expose']['operator'] = 'field_image_type_value_op';
  $handler->display->display_options['filters']['field_image_type_value']['expose']['identifier'] = 'field_image_type_value';
  $handler->display->display_options['filters']['field_image_type_value']['group_info']['label'] = 'Image Type (field_image_type)';
  $handler->display->display_options['filters']['field_image_type_value']['group_info']['identifier'] = 'field_image_type_value';
  $handler->display->display_options['filters']['field_image_type_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_image_type_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page - Artwork */
  $handler = $view->new_display('page', 'Page - Artwork', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artwork';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_image_type_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Filters */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['ui_name'] = 'Filters';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<ul id="filters">
  <li class="first active"><a data-filter="*" href="#">Show All</a></li>
  <li><a data-filter=".Graphics" href="#">Graphics</a></li>
  <li><a data-filter=".Digital" href="#">Digital</a></li>
  <li class="last"><a data-filter=".Scraps" href="#">Scraps</a></li>
</ul>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Image (field_portfolio_image:fid) */
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['id'] = 'field_portfolio_image_fid';
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['relationships']['field_portfolio_image_fid']['field'] = 'field_portfolio_image_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Type */
  $handler->display->display_options['fields']['field_image_type']['id'] = 'field_image_type';
  $handler->display->display_options['fields']['field_image_type']['table'] = 'field_data_field_image_type';
  $handler->display->display_options['fields']['field_image_type']['field'] = 'field_image_type';
  $handler->display->display_options['fields']['field_image_type']['label'] = '';
  $handler->display->display_options['fields']['field_image_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_type']['element_label_colon'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_portfolio_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_portfolio_image']['id'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['field'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['text'] = '<div class="element ">
<a class="colorbox-load" href="[uri]" rel="gallery" title="[title]">
[field_portfolio_image]
</a>
</div>';
  $handler->display->display_options['fields']['field_portfolio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_portfolio_image']['settings'] = array(
    'picture_mapping' => 'artwork',
    'fallback_image_style' => '_original image_',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'original_image',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'graphic' => 'graphic',
  );
  $handler->display->display_options['path'] = 'artwork';
  $export['artwork'] = $view;

  $view = new view();
  $view->name = 'portfolio_three';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portfolio Three';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio Three';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'graphic' => 'graphic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'portfolio-three';
  $export['portfolio_three'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_images' => 0,
    'title' => 0,
    'body' => 0,
    'nothing' => 0,
    'field_project_teaser_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_project_teaser_image' => 'field_project_teaser_image',
    'field_project_images' => 0,
    'title' => 0,
    'body' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_project_images']['id'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['table'] = 'field_data_field_project_images';
  $handler->display->display_options['fields']['field_project_images']['field'] = 'field_project_images';
  $handler->display->display_options['fields']['field_project_images']['label'] = '';
  $handler->display->display_options['fields']['field_project_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_images']['element_wrapper_class'] = 'project_image';
  $handler->display->display_options['fields']['field_project_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_images']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_project_images']['settings'] = array(
    'slideshow_image_style' => 'tn485x380',
    'slideshow_link' => 'colorbox',
    'slideshow_colorbox_image_style' => 'colorbox',
    'slideshow_colorbox_slideshow' => '',
    'slideshow_colorbox_slideshow_speed' => '4000',
    'slideshow_colorbox_transition' => 'elastic',
    'slideshow_colorbox_speed' => '350',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'scrollHorz',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '0',
    'slideshow_order' => '',
    'slideshow_controls' => 1,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'before',
    'slideshow_pause' => 1,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'before',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_project_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'project_titel';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="project_info">
<img class="white_block" width="485px" height="380px" src="/sites/all/themes/kalypso/images/white_block.png">
<h1>[title]</h1>[body]</div>';
  $handler->display->display_options['fields']['body']['element_class'] = 'project_info';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clear"></div>
<div class="section_title"><span class="section_title_text">ALL PROJECTS</span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Image */
  $handler->display->display_options['fields']['field_project_teaser_image']['id'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['table'] = 'field_data_field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['field'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_teaser_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_teaser_image']['settings'] = array(
    'image_style' => 'tn296x200',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['projects'] = $view;

  $view = new view();
  $view->name = 'recent_work';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Work';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Work';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Teaser Image */
  $handler->display->display_options['fields']['field_project_teaser_image']['id'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['table'] = 'field_data_field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['field'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_teaser_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['path'] = 'projects';
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_project_teaser_image']['element_class'] = 'recent_work_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_teaser_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_project_teaser_image']['settings'] = array(
    'picture_mapping' => 'home_recent_work',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'artwork',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_portfolio_image']['id'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['table'] = 'field_data_field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['field'] = 'field_portfolio_image';
  $handler->display->display_options['fields']['field_portfolio_image']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['text'] = '<a href="artwork">[field_portfolio_image]</a>';
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['path'] = 'artwork';
  $handler->display->display_options['fields']['field_portfolio_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_image']['element_class'] = 'recent_work_image';
  $handler->display->display_options['fields']['field_portfolio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_image']['empty'] = '<a href="artwork">[field_project_teaser_image]</a>';
  $handler->display->display_options['fields']['field_portfolio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_portfolio_image']['settings'] = array(
    'picture_mapping' => 'home_recent_work',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'artwork',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'graphic' => 'graphic',
    'project' => 'project',
  );
  /* Filter criterion: Content: Front Page (field_front_page_sticky) */
  $handler->display->display_options['filters']['field_front_page_sticky_value']['id'] = 'field_front_page_sticky_value';
  $handler->display->display_options['filters']['field_front_page_sticky_value']['table'] = 'field_data_field_front_page_sticky';
  $handler->display->display_options['filters']['field_front_page_sticky_value']['field'] = 'field_front_page_sticky_value';
  $handler->display->display_options['filters']['field_front_page_sticky_value']['value'] = array(
    'Yes' => 'Yes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_work'] = $view;

  return $export;
}
