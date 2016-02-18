<?php
/**
 * @file
 * Template file for question answer header.
 *
 * Available variables:
 * - $type_name: Content type name.
 * - $current_term_name: Taxonomy term name whose landing page you are viewing.
 * - $current_term_description: Taxonomy term description whose landing page
 *   you are viewing.
 * - $siblings: Sibling taxonomy term object of $current_term.
 */
?>
<div class="qna-header-wrapper">
  <div class="type-name"><?php print $type_name; ?></div>
  <div class="term-name-cards-wrapper">
    <div class="term-name"><?php print $current_term_name; ?></div>
    <div class="cards-wrapper">
      <div class="cards-toggler"><?php print t('Change cards'); ?></div>
      <div class="cards-toggle-wrapper" style="display: none;">
        <?php foreach ($siblings as $term): ?>
          <div class="card card-<?php print $term->tid; ?>"><?php print l($term->name, 'taxonomy/term/' . $term->tid); ?></div>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
  <div class="type-description"><?php print $current_term_description; ?></div>
</div>
