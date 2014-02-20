<?php
/**
 * @file
 * imagex_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function imagex_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_fw_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f23f6d8f-be2c-4509-9869-c451fa6f83ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d72c8698-f5a8-4587-bf09-9bf1926df39a';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd72c8698-f5a8-4587-bf09-9bf1926df39a';
    $display->content['new-d72c8698-f5a8-4587-bf09-9bf1926df39a'] = $pane;
    $display->panels['one_fw_main'][0] = 'new-d72c8698-f5a8-4587-bf09-9bf1926df39a';
    $pane = new stdClass();
    $pane->pid = 'new-a4c2df14-f963-48d9-9118-5ce7e0417d07';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4c2df14-f963-48d9-9118-5ce7e0417d07';
    $display->content['new-a4c2df14-f963-48d9-9118-5ce7e0417d07'] = $pane;
    $display->panels['one_fw_main'][1] = 'new-a4c2df14-f963-48d9-9118-5ce7e0417d07';
    $pane = new stdClass();
    $pane->pid = 'new-c42a4f64-4a04-44a2-9c01-4161549b9060';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c42a4f64-4a04-44a2-9c01-4161549b9060';
    $display->content['new-c42a4f64-4a04-44a2-9c01-4161549b9060'] = $pane;
    $display->panels['one_fw_main'][2] = 'new-c42a4f64-4a04-44a2-9c01-4161549b9060';
    $pane = new stdClass();
    $pane->pid = 'new-b78dc293-f827-4af2-8d89-ce220e9746a9';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b78dc293-f827-4af2-8d89-ce220e9746a9';
    $display->content['new-b78dc293-f827-4af2-8d89-ce220e9746a9'] = $pane;
    $display->panels['one_fw_main'][3] = 'new-b78dc293-f827-4af2-8d89-ce220e9746a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  features_alter_code('panelizer_defaults', $export);

  return $export;
}
