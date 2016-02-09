<?php

/**
 * @file
 * ADB global functions block callbacks.
 */

/**
 * Return markup for profile access block.
 *
 * @return string
 */
function adb_global_functions_profile_access_markup() {
  global $user;
  $output = '';

  if (user_is_logged_in()) {
    $output .= '<div class="profile-access-wrapper">';
    $output .= '<div class="expand-profile-wrapper">';
    $output .= theme('user_picture', array(
      'account' => $user,
    ));
    $output .= theme('username', array(
      'account' => $user,
    ));
    $output .= '<span class="profile-access-toggle">' . t('Toggle') . '</span>';
    $output .= '</div>';
    $output .= '<div class="profile-access-toggle-wrapper">';
    $output .= '<div class="profile-access-logout">' . l(t('Logout'), 'user/logout') . '</div>';
    $output .= '<div class="profile-access-edit">' . l(t('Update profile'), 'user/' . $user->uid . '/edit') . '</div>';
    $output .= '</div>';
    $output .= '</div>';
  }
  else {
    $output .= '<div class="profile-access-wrapper">';
    $output .= l(t('Login'), 'user/login', array(
      'attributes' => array(
        'class' => array(
          'profile-access-login',
        ),
      ),
    ));
    $output .= l(t('Register'), 'user/register', array(
      'attributes' => array(
        'class' => array(
          'profile-access-register',
        ),
      ),
    ));
    $output .= '</div>';

  }

  return $output;
}
