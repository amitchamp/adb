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
  <div class="case-study-label"><?php print $type_name; ?></div>
  <div class="term-name-cards-wrapper">
    <h1 class="detail-pages-heading"><?php print $current_term_name; ?></h1>
    <div class="cards-wrapper">
      <div class="cards-toggler"><?php print t('Change cards <i class="fa fa-angle-down"></i>'); ?></div>
      <div class="cards-toggle-wrapper" style="display: none;">
        <?php foreach ($siblings as $term): ?>
          <div class="card card-<?php print $term->tid; ?>"><?php print l($term->name, 'taxonomy/term/' . $term->tid); ?></div>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
  <div class="type-description"><?php print $current_term_description; ?></div>
</div>
