<?php if (!empty($user_voted) && $user_voted): ?>
  <?php print $user_voted_message; ?>
<?php else: ?>
  <?php print theme('item_list', array('items' => $buttons)); ?>
<?php endif; ?>
<?php if ($display_options['description']): ?>
  <?php print '<div class="rate-description">' . $display_options['description'] . '</div>'; ?>
<?php endif; ?>
