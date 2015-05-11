<?php

  /**
   * @file
   * Theming for forms
   *
   */

function bootstrap_dss_elc_form_islandora_dss_solr_advanced_search_form_alter(&$form, $form_state, $form_id) {

  foreach($form['terms'] as $key => &$term) {

    if(is_numeric($key)) {

      $term['field-wrapper']['search']['#size'] = 40;
    }
  }
  }

/**
 * Implements hook_form_FORM_ID_alter().
 * @param array $form the form being altered
 * @param array $form_state the state of the form
 * @param string $form_id the form ID
 *
 */
function bootstrap_dss_elc_form_loan_node_form_alter(&$form, $form_state, $form_id) {

  dpm($form);

  $form['actions']['publish_and_save'] = array(
					       '#type' => 'submit',
					       '#value' => t('Save & Add Another'),
					       '#weight' => '40',
					       '#submit' => array('publish_add_button_publish_node'));
  
  $form['actions']['submit']['#submit']['0'] = 'hold_button_publish_node';

  if(isset($form['path']['source']['#value'])){
  	
	$form['actions']['delete']['#value'] = t('Save Updates');
	$form['actions']['delete']['#submit']['0'] = '_publish_button_publish_node';
	  
	$form['actions']['publish_and_save']['#value'] = t('Delete');
	$form['actions']['publish_and_save']['#submit']['0'] = 'node_form_delete_submit';
	
	$form['actions']['publish']['#value'] = t('Discard Updates');
	$form['actions']['publish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['unpublish']['#value'] = t('Discard Updates');
	$form['actions']['unpublish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['submit']['#submit']['0'] = 'edit_node_hold_for_review';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 * @param array $form the form being altered
 * @param array $form_state the state of the form
 * @param string $form_id the form ID
 *
 */
function bootstrap_dss_elc_form_human_node_form_alter(&$form, $form_state, $form_id) {

  $form['actions']['publish_and_save'] = array('#type' => 'submit',
					       '#value' => t('Save & Add Another'),
					       '#weight' => '40',
					       '#submit' => array('publish_add_button_publish_node'));
						   
  $form['actions']['submit']['#submit']['0'] = 'hold_button_publish_node';

  if(isset($form['path']['source']['#value'])){
  	
	$form['actions']['delete']['#value'] = t('Save Updates');
	$form['actions']['delete']['#submit']['0'] = '_publish_button_publish_node';
	  
	$form['actions']['publish_and_save']['#value'] = t('Delete');
	$form['actions']['publish_and_save']['#submit']['0'] = 'node_form_delete_submit';
	
	$form['actions']['publish']['#value'] = t('Discard Updates');
	$form['actions']['publish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['unpublish']['#value'] = t('Discard Updates');
	$form['actions']['unpublish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['submit']['#submit']['0'] = 'edit_node_hold_for_review';
	
  }
  
}

/**
 * Implements hook_form_FORM_ID_alter().
 * @param array $form the form being altered
 * @param array $form_state the state of the form
 * @param string $form_id the form ID
 *
 */
function bootstrap_dss_elc_form_item_node_form_alter(&$form, $form_state, $form_id) {

  /**
   * @author stathisw@lafayette.edu
   *
   */
  $form['actions']['publish_and_save'] = array('#type' => 'submit',
					       '#value' => t('Save & Add Another'),
					       '#weight' => '40',
					       '#submit' => array('publish_add_button_publish_node'));
						   
  $form['actions']['submit']['#submit']['0'] = 'hold_button_publish_node';
  
  if(isset($form['path']['source']['#value'])){
  	
	$form['actions']['delete']['#value'] = t('Save Updates');
	$form['actions']['delete']['#submit']['0'] = '_publish_button_publish_node';
	  
	$form['actions']['publish_and_save']['#value'] = t('Delete');
	$form['actions']['publish_and_save']['#submit']['0'] = 'node_form_delete_submit';
	
	$form['actions']['publish']['#value'] = t('Discard Updates');
	$form['actions']['publish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['unpublish']['#value'] = t('Discard Updates');
	$form['actions']['unpublish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['submit']['#submit']['0'] = 'edit_node_hold_for_review';
  }
  
}

/**
 * Implements hook_form_FORM_ID_alter().
 * @param array $form the form being altered
 * @param array $form_state the state of the form
 * @param string $form_id the form ID
 *
 */
function bootstrap_dss_elc_form_personal_relationship_node_form_alter(&$form, $form_state, $form_id) {

  /*
  $form['actions']['publish_and_save'] = array('#type' => 'submit',
					       '#value' => t('Save & Add Another'),
					       '#weight' => '40',
					       '#submit' => array('publish_add_button_publish_node'));
  */
						   
  $form['actions']['submit']['#submit']['0'] = 'hold_button_publish_node';
  
  if(isset($form['path']['source']['#value'])){
  	
	$form['actions']['delete']['#value'] = t('Save Updates');
	$form['actions']['delete']['#submit']['0'] = '_publish_button_publish_node';
	  
	$form['actions']['publish_and_save']['#value'] = t('Delete');
	$form['actions']['publish_and_save']['#submit']['0'] = 'node_form_delete_submit';
	
	$form['actions']['publish']['#value'] = t('Discard Updates');
	$form['actions']['publish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['unpublish']['#value'] = t('Discard Updates');
	$form['actions']['unpublish']['#submit']['0'] = 'edit_node_discard_updates';
	
	$form['actions']['submit']['#submit']['0'] = 'edit_node_hold_for_review';
  }
}

/**
 * griffinj
 * Implements hook_form_alter()
 *
 * Theming for the advanced search form must be implemented using a hook which does not conflict with the actual form implementation within the global context
 *http://api.drupalize.me/api/drupal/function/node_page_edit/7
 */
function bootstrap_dss_elc_form_alter(&$form, $form_state, $form_id) {

  /**
   * Implements form-specific alterations to the structure of the HTML
   * @todo Refactor by implementing within hook_form_FORM_ID_alter() for each specified form
   */
  switch($form_id) {

  case 'islandora_solr_simple_search_form':

    $form['simple']['#attributes']['id'] = 'islandora-simple-search-wrapper';

    // Increase the size of the text box
    $form['simple']['islandora_simple_search_query']['#size'] = 21;
    $form['simple']['islandora_simple_search_query']['#value'] = 'Search...';
    $form['simple']['islandora_simple_search_query']['#default_value'] = 'Search...';

    // Insert the glyphicon for searching
    //$form['simple']['submit']['#value'] = '<span class="icon-large"></span>';

    // Default to site-scoped search
    $form['simple']['submit']['#value'] = 'Search this site';

    // Append a button for repository-scoped search
    $form['simple']['submit-1'] = array(
					'#value' => 'Search the collections',
					);

    // Providing a div wrapper for styling
    $form['simple']['submit']['#prefix'] = '<div class="islandora-simple-search-button-container">';
    $form['simple']['submit']['#suffix'] = '</div>';

    $form['simple']['submit-1']['#prefix'] = '<div class="islandora-simple-search-button-1-container">';
    $form['simple']['submit-1']['#suffix'] = '</div>';

    break;
	
    //Adding an extra button for "save and add another" on add loan form
  case 'loan_node_form':
    $form['actions']['publish_and_save'] = array('#type' => 'submit',
						 '#value' => t('Save & Add Another'),
						 '#weight' => '40',
						 '#submit' => array('publish_add_button_publish_node'),
						 );
    break;
	
    //Adding it for add person
  case 'human_node_form': 
    $form['actions']['publish_and_save'] = array('#type' => 'submit',
						 '#value' => t('Save & Add Another'),
						 '#weight' => '40',
						 '#submit' => array('publish_add_button_publish_node'),
						 );
    break;

    // @author stathisw@lafayette.edu
    //Adding it for add item
  case 'item_node_form':
    $form['actions']['publish_and_save'] = array('#type' => 'submit',
						 '#value' => t('Save & Add Another'),
						 '#weight' => '40',
						 '#submit' => array('publish_add_button_publish_node'),
						 );
											     
    break;
  }

  $form['actions']['publish']['#value'] = t('Save & View Record'); 
  
  /**
   * Rectifying this issue (undefined 'actions' key)
   * @author griffinj@lafayette.edu
   * (Probably also the fault of griffinj@lafayette.edu)
   *
   */
  if(isset($form) and array_key_exists('actions', $form)) {

    if(!array_key_exists('#type', $form['actions'])) {

      $form['actions']['#type'] = 'actions';
    }
  }
 
 
  //code for chaging the edit node page
  if(array_key_exists('#node_edit_form', $form) and $form['#node_edit_form']) {
  	/*
	$form['actions']['delete']['#value'] = t('Save Updates');
	$form['actions']['delete']['#submit'] = t('edit_node_update');
	  
	$form['actions']['publish_and_save']['#value'] = t('Delete');
	$form['actions']['publish_and_save']['#submit'] = t('node_form_delete_submit');
	
	$form['actions']['publish']['#value'] = t('Discard Updates');
	$form['actions']['publish']['#submit']['0'] = '_publish_button_publish_node';
	
	*/
  }
 
  
  
}


/**
 * Preprocess variables for 
 *
 * @see islandora-solr-advanced-search-form.tpl.php
 */

/*
function bootstrap_dss_elc_preprocess_islandora_dss_solr_advanced_search_form(&$variables) {

}
*/
