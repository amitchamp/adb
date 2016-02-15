<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <div class="comments-wrapper">
    <?php foreach ($rows as $id => $row): ?>
      <?php if ($id == 0): ?>
        <div class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></div><?php print $comment_more_toggle_markup; ?>
      <?php elseif ($id == 1): ?>
        <?php print $comment_more_toggle_wrapper_prefix; ?><div class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></div>
      <?php elseif ($id == ($rows_count - 1)): ?>
        <div class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></div><?php print $comment_more_toggle_wrapper_suffix; ?>
      <?php else: ?>
        <div class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></div>
      <?php endif; ?>
    <?php endforeach; ?>
  </div>
<?php print $wrapper_suffix; ?>
