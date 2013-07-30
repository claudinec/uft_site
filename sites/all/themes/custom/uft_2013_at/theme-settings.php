<?php

/**
 * @file
 * Implimentation of hook_form_system_theme_settings_alter()
 *
 * To use replace "adaptivetheme_subtheme" with your themeName and uncomment by
 * deleting the comment line to enable.
 *
 * @param $form: Nested array of form elements that comprise the form.
 * @param $form_state: A keyed array containing the current state of the form.
 */
function adaptivetheme_subtheme_form_system_theme_settings_alter(&$form, &$form_state)  {
  // Your knarly custom theme settings go here...
    $logo = file_create_url(drupal_get_path('theme', 'uft_2013_at') . '/logo.jpg');
}
