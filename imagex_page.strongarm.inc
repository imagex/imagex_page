<?php
/**
 * @file
 * imagex_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '1';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  if (module_exists('imagex_workflow')) {
    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'diff_enable_revisions_page_node_page';
    $strongarm->value = 1;
    $export['diff_enable_revisions_page_node_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'diff_show_preview_changes_node_page';
    $strongarm->value = 1;
    $export['diff_show_preview_changes_node_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'diff_view_mode_preview_node_page';
    $strongarm->value = 'full';
    $export['diff_view_mode_preview_node_page'] = $strongarm;
  }

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:page";s:23:"allowed_layout_settings";a:27:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:25:"mothership-html5page-page";b:0;s:9:"two_brick";b:1;s:9:"two_66_33";b:1;s:6:"two_50";b:1;s:9:"two_33_66";b:1;s:17:"three_inset_right";b:1;s:16:"three_inset_left";b:1;s:14:"three_25_50_25";b:1;s:3:"one";b:1;s:8:"three_33";b:1;s:6:"one_fw";b:1;s:7:"four_25";b:1;s:12:"two_50_mp_fw";b:1;s:14:"three_33_mp_fw";b:1;s:9:"one_mp_fw";b:1;s:9:"two_50_mp";b:1;s:11:"three_33_mp";b:1;s:6:"one_mp";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types';
  $strongarm->value = array(
    'bean_panels-bean_panels' => 'bean_panels-bean_panels',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_form-search_form' => 'search_form-search_form',
    'search_result-search_result' => 'search_result-search_result',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_help-page_help' => 'page_help-page_help',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_title-page_title' => 'page_title-page_title',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'node_form_language-node_form_language' => 'node_form_language-node_form_language',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node-node' => 'node-node',
    'form-form' => 'form-form',
    'comment_reply_form-comment_reply_form' => 'comment_reply_form-comment_reply_form',
    'file_content-file_content' => 'file_content-file_content',
    'file_display-file_display' => 'file_display-file_display',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:diff' => 'token-node:diff',
    'token-node:diff-markdown' => 'token-node:diff-markdown',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:scheduler-publish' => 'token-node:scheduler-publish',
    'token-node:scheduler-unpublish' => 'token-node:scheduler-unpublish',
    'token-node:uuid' => 'token-node:uuid',
    'token-node:vuuid' => 'token-node:vuuid',
    'token-node:workbench-access-sections' => 'token-node:workbench-access-sections',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:original' => 'token-node:original',
    'token-node:is-new' => 'token-node:is-new',
    'token-node:status' => 'token-node:status',
    'token-node:promote' => 'token-node:promote',
    'token-node:sticky' => 'token-node:sticky',
    'token-node:revision' => 'token-node:revision',
    'token-node:comment' => 'token-node:comment',
    'token-node:field-image' => 'token-node:field-image',
    'token-node:field-tags' => 'token-node:field-tags',
    'token-node:field-radioactivity' => 'token-node:field-radioactivity',
    'token-node:field_addthis' => 'token-node:field_addthis',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_radioactivity' => 'token-node:field_radioactivity',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:uuid' => 'token-term:uuid',
    'token-term:original' => 'token-term:original',
    'token-term:weight' => 'token-term:weight',
    'token-term:parents-all' => 'token-term:parents-all',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:type' => 'token-file:type',
    'token-file:download-url' => 'token-file:download-url',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:uuid' => 'token-file:uuid',
    'token-file:original' => 'token-file:original',
    'token-file:field-file-image-alt-text' => 'token-file:field-file-image-alt-text',
    'token-file:field-file-image-title-text' => 'token-file:field-file-image-title-text',
    'token-file:field-folder' => 'token-file:field-folder',
    'token-file:field_file_image_alt_text' => 'token-file:field_file_image_alt_text',
    'token-file:field_file_image_title_text' => 'token-file:field_file_image_title_text',
    'token-file:field_folder' => 'token-file:field_folder',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:uuid' => 'token-user:uuid',
    'token-user:workbench-access-sections' => 'token-user:workbench-access-sections',
    'token-user:original' => 'token-user:original',
    'token-user:last-access' => 'token-user:last-access',
    'token-user:status' => 'token-user:status',
    'token-user:theme' => 'token-user:theme',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-comment:uuid' => 'token-comment:uuid',
    'token-comment:original' => 'token-comment:original',
    'token-comment:subject' => 'token-comment:subject',
    'token-comment:status' => 'token-comment:status',
    'token-comment:comment-body' => 'token-comment:comment-body',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-file-type:name' => 'token-file-type:name',
    'token-file-type:machine-name' => 'token-file-type:machine-name',
    'token-file-type:count' => 'token-file-type:count',
    'token-file-type:edit-url' => 'token-file-type:edit-url',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-site:workbench-access-scheme' => 'token-site:workbench-access-scheme',
    'token-site:current-user' => 'token-site:current-user',
    'token-site:current-date' => 'token-site:current-date',
    'token-site:current-page' => 'token-site:current-page',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-bean:uuid' => 'token-bean:uuid',
    'token-bean:bid' => 'token-bean:bid',
    'token-bean:vid' => 'token-bean:vid',
    'token-bean:delta' => 'token-bean:delta',
    'token-bean:label' => 'token-bean:label',
    'token-bean:title' => 'token-bean:title',
    'token-bean:view-mode' => 'token-bean:view-mode',
    'token-bean:data' => 'token-bean:data',
    'token-bean:uid' => 'token-bean:uid',
    'token-bean:created' => 'token-bean:created',
    'token-bean:changed' => 'token-bean:changed',
    'token-bean:url' => 'token-bean:url',
    'token-field_collection_item:uuid' => 'token-field_collection_item:uuid',
    'token-field_collection_item:item-id' => 'token-field_collection_item:item-id',
    'token-field_collection_item:revision-id' => 'token-field_collection_item:revision-id',
    'token-field_collection_item:archived' => 'token-field_collection_item:archived',
    'token-field_collection_item:url' => 'token-field_collection_item:url',
    'token-workbench-access-scheme:name' => 'token-workbench-access-scheme:name',
    'token-workbench-access-scheme:machine-name' => 'token-workbench-access-scheme:machine-name',
    'token-workbench-access-scheme:description' => 'token-workbench-access-scheme:description',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'token-rules_text:value' => 'token-rules_text:value',
    'token-rules_integer:value' => 'token-rules_integer:value',
    'token-rules_uri:value' => 'token-rules_uri:value',
    'token-rules_token:value' => 'token-rules_token:value',
    'token-rules_decimal:value' => 'token-rules_decimal:value',
    'token-rules_date:value' => 'token-rules_date:value',
    'token-rules_duration:value' => 'token-rules_duration:value',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-rules_config:id' => 'token-rules_config:id',
    'token-rules_config:label' => 'token-rules_config:label',
    'token-rules_config:plugin' => 'token-rules_config:plugin',
    'token-rules_config:active' => 'token-rules_config:active',
    'token-rules_config:weight' => 'token-rules_config:weight',
    'token-rules_config:status' => 'token-rules_config:status',
    'token-rules_config:dirty' => 'token-rules_config:dirty',
    'token-rules_config:module' => 'token-rules_config:module',
    'token-rules_config:access-exposed' => 'token-rules_config:access-exposed',
    'token-list<bean>:0' => 'token-list<bean>:0',
    'token-list<bean>:1' => 'token-list<bean>:1',
    'token-list<bean>:2' => 'token-list<bean>:2',
    'token-list<bean>:3' => 'token-list<bean>:3',
    'token-list<comment>:0' => 'token-list<comment>:0',
    'token-list<comment>:1' => 'token-list<comment>:1',
    'token-list<comment>:2' => 'token-list<comment>:2',
    'token-list<comment>:3' => 'token-list<comment>:3',
    'token-list<field_collection_item>:0' => 'token-list<field_collection_item>:0',
    'token-list<field_collection_item>:1' => 'token-list<field_collection_item>:1',
    'token-list<field_collection_item>:2' => 'token-list<field_collection_item>:2',
    'token-list<field_collection_item>:3' => 'token-list<field_collection_item>:3',
    'token-list<node>:0' => 'token-list<node>:0',
    'token-list<node>:1' => 'token-list<node>:1',
    'token-list<node>:2' => 'token-list<node>:2',
    'token-list<node>:3' => 'token-list<node>:3',
    'token-list<file>:0' => 'token-list<file>:0',
    'token-list<file>:1' => 'token-list<file>:1',
    'token-list<file>:2' => 'token-list<file>:2',
    'token-list<file>:3' => 'token-list<file>:3',
    'token-list<term>:0' => 'token-list<term>:0',
    'token-list<term>:1' => 'token-list<term>:1',
    'token-list<term>:2' => 'token-list<term>:2',
    'token-list<term>:3' => 'token-list<term>:3',
    'token-list<vocabulary>:0' => 'token-list<vocabulary>:0',
    'token-list<vocabulary>:1' => 'token-list<vocabulary>:1',
    'token-list<vocabulary>:2' => 'token-list<vocabulary>:2',
    'token-list<vocabulary>:3' => 'token-list<vocabulary>:3',
    'token-list<user>:0' => 'token-list<user>:0',
    'token-list<user>:1' => 'token-list<user>:1',
    'token-list<user>:2' => 'token-list<user>:2',
    'token-list<user>:3' => 'token-list<user>:3',
    'token-list<rules_config>:0' => 'token-list<rules_config>:0',
    'token-list<rules_config>:1' => 'token-list<rules_config>:1',
    'token-list<rules_config>:2' => 'token-list<rules_config>:2',
    'token-list<rules_config>:3' => 'token-list<rules_config>:3',
    'token-list<date>:0' => 'token-list<date>:0',
    'token-list<date>:1' => 'token-list<date>:1',
    'token-list<date>:2' => 'token-list<date>:2',
    'token-list<date>:3' => 'token-list<date>:3',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_addthis' => 'entity_form_field-node:field_addthis',
    'entity_form_field-node:field_radioactivity' => 'entity_form_field-node:field_radioactivity',
    'entity_form_field-file:field_file_image_alt_text' => 'entity_form_field-file:field_file_image_alt_text',
    'entity_form_field-file:field_file_image_title_text' => 'entity_form_field-file:field_file_image_title_text',
    'entity_form_field-file:field_folder' => 'entity_form_field-file:field_folder',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_addthis' => 'entity_field-node:field_addthis',
    'entity_field-node:field_radioactivity' => 'entity_field-node:field_radioactivity',
    'entity_field-file:field_file_image_alt_text' => 'entity_field-file:field_file_image_alt_text',
    'entity_field-file:field_file_image_title_text' => 'entity_field-file:field_file_image_title_text',
    'entity_field-file:field_folder' => 'entity_field-file:field_folder',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'custom-custom' => 'custom-custom',
    'block-addthis-addthis_block' => 'block-addthis-addthis_block',
    'block-comment-recent' => 'block-comment-recent',
    'block-diff-inline' => 'block-diff-inline',
    'block-menu-devel' => 'block-menu-devel',
    'block-menu-features' => 'block-menu-features',
    'block-nice_menus-1' => 'block-nice_menus-1',
    'block-nice_menus-2' => 'block-nice_menus-2',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-workbench-block' => 'block-workbench-block',
    'block-views-workbench_current_user-block_1' => 'block-views-workbench_current_user-block_1',
    'block-views-workbench_edited-block_1' => 'block-views-workbench_edited-block_1',
    'block-views-9cf22433e0efbd8b206c8e4c2edb177c' => 'block-views-9cf22433e0efbd8b206c8e4c2edb177c',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'entity_view-bean' => 'entity_view-bean',
    'entity_view-comment' => 'entity_view-comment',
    'entity_view-field_collection_item' => 'entity_view-field_collection_item',
    'entity_view-node' => 'entity_view-node',
    'entity_view-file' => 'entity_view-file',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'entity_view-rules_config' => 'entity_view-rules_config',
    'menu_tree-_active' => 'menu_tree-_active',
    'menu_tree-devel' => 'menu_tree-devel',
    'menu_tree-features' => 'menu_tree-features',
    'menu_tree-main-menu' => 'menu_tree-main-menu',
    'menu_tree-management' => 'menu_tree-management',
    'menu_tree-navigation' => 'menu_tree-navigation',
    'menu_tree-user-menu' => 'menu_tree-user-menu',
  );
  $export['panelizer_node:page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'other' => 'other',
  );
  $export['panelizer_node:page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_page';
  $strongarm->value = 0;
  $export['print_display_comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_page';
  $strongarm->value = 1;
  $export['print_display_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_page';
  $strongarm->value = 1;
  $export['print_display_urllist_page'] = $strongarm;

  if (module_exists('imagex_workflow')) {
    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_publish_enable_page';
    $strongarm->value = 1;
    $export['scheduler_publish_enable_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_publish_required_page';
    $strongarm->value = 0;
    $export['scheduler_publish_required_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_publish_revision_page';
    $strongarm->value = 1;
    $export['scheduler_publish_revision_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_publish_touch_page';
    $strongarm->value = 1;
    $export['scheduler_publish_touch_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_unpublish_enable_page';
    $strongarm->value = 1;
    $export['scheduler_unpublish_enable_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_unpublish_required_page';
    $strongarm->value = 0;
    $export['scheduler_unpublish_required_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'scheduler_unpublish_revision_page';
    $strongarm->value = 1;
    $export['scheduler_unpublish_revision_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'workbench_access_node_type_page';
    $strongarm->value = 1;
    $export['workbench_access_node_type_page'] = $strongarm;

    $strongarm = new stdClass();
    $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
    $strongarm->api_version = 1;
    $strongarm->name = 'workbench_moderation_default_state_page';
    $strongarm->value = 'draft';
    $export['workbench_moderation_default_state_page'] = $strongarm;
  }

  features_alter_code('variable', $export);

  return $export;
}
