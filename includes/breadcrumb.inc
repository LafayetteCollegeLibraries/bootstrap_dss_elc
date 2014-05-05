<?php

  /**
   * @file Functionality for generating breadcrumbs
   * @author griffinj@lafayette.edu
   *
   */

define('BOOTSTRAP_DSS_DIGITAL_BREADCRUMBS_MAX', 52);

/**
 * Override theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function bootstrap_dss_elc_breadcrumb($variables) {

  $breadcrumb = $variables['breadcrumb'];
  $breadcrumb[] = l(t('Home'), '<front>');
  $breadcrumb[] = '<a href="' . drupal_get_path_alias() . '">' . drupal_get_title() . '</a>';

  if (!empty($breadcrumb)) {
    $breadcrumbs = '<ul class="breadcrumb">';
    
    $count = count($breadcrumb) - 1;
    foreach ($breadcrumb as $key => $value) {
      if ($count != $key) {
        $breadcrumbs .= '<li>' . $value . '<span class="divider">/</span></li>';
      }
      else{
        $breadcrumbs .= '<li>' . $value . '</li>';
      }
    }
    $breadcrumbs .= '</ul>';
    
    return $breadcrumbs;
  }

}
