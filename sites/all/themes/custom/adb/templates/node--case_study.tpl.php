<?php
/**
 * @file
 * Adaptivetheme implementation to display a node.
 *
 * Adaptivetheme variables:
 * AT Core sets special time and date variables for use in templates:
 * - $submitted: Submission information created from $name and $date during
 *   adaptivetheme_preprocess_node(), uses the $publication_date variable.
 * - $datetime: datetime stamp formatted correctly to ISO8601.
 * - $publication_date: publication date, formatted with time element and
 *   pubdate attribute.
 * - $datetime_updated: datetime stamp formatted correctly to ISO8601.
 * - $last_update: last updated date/time, formatted with time element and
 *   pubdate attribute.
 * - $custom_date_and_time: date time string used in $last_update.
 * - $header_attributes: attributes such as classes to apply to the header element.
 * - $footer_attributes: attributes such as classes to apply to the footer element.
 * - $links_attributes: attributes such as classes to apply to the nav element.
 * - $is_mobile: Mixed, requires the Mobile Detect or Browscap module to return
 *   TRUE for mobile.  Note that tablets are also considered mobile devices.
 *   Returns NULL if the feature could not be detected.
 * - $is_tablet: Mixed, requires the Mobile Detect to return TRUE for tablets.
 *   Returns NULL if the feature could not be detected.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */
/**
 * Hide Content and Print it Separately
 *
 * Use the hide() function to hide fields and other content, you can render it
 * later using the render() function. Install the Devel module and use
 * <?php dsm($content); ?> to find variable names to hide() or render().
 */
hide($content['comments']);
hide($content['links']);
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ($title && !$page): ?>
    <header<?php print $header_attributes; ?>>
      <?php if ($title): ?>
        <a href="<?php print $node_url; ?>" rel="bookmark"></a>
        </h1>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <!--Banner Section-->
  <div class='banner-node'><div class="inner-banner-node-info"><div class="banner-image"><?php print $banner_image; ?><div class="content-type-name"><span class="case-study-label">Case study</span><div class="node-title case-study-title"><?php print $title ?></div><div class="project-date"><?php print $node_field_date; ?></div><div class="tagging case-study-tags"><?php print $node_field_tagging; ?></div><small class="arrow-icon"><i class="fa fa-angle-down"></i></small></div><span class="black-border"></span></div></div>
    <!--Social Share Area-->
    <div class="social-share-download">
      <div class="social-share">
        <?php print $social_share; ?>
      </div>
      <!--Download and Print section-->
      <div class="download-print">
        <div class="print"><?php print $print_node; ?></div>
        <?php if ($download_link): ?>
          <div class="download"><?php print $download_link; ?></div>
        <?php endif; ?>
      </div>
    </div>
  </div>
  <div class="main-content">

    <!--Overview-->
    <?php if ($body): ?>
      <div class="heading"><h2 class="section-heading">Overview</h2>
        <div class="overview-content">
          <?php if ($summary): ?>
            <div class="summary"><?php print $summary; ?></div>
          <?php endif; ?>
          <?php print $body; ?></div>
      </div>
    <?php endif; ?>

    <!--Project snapshot-->
    <?php if ($project_snapshot): ?>
      <div class="heading"><h2 class="section-heading">Project snapshot</h2>
        <div class="project-snapshot-content"><?php print $project_snapshot; ?></div>
      </div>
    <?php endif; ?>

    <!--Cost content-->
    <?php if ($project_cost): ?>
      <div class="heading"><h2 class="section-heading">Cost</h2>
        <div class="project-cost-content"><?php print $project_cost; ?></div>
      </div>
    <?php endif; ?>

    <!--Institution and stakeholders-->
    <?php if ($institution_stakeholder): ?>
      <div class="heading"><h2 class="section-heading">Institution and stakeholders</h2>
        <div class="institution-stakeholder"><?php print $institution_stakeholder; ?></div>
      </div>
    <?php endif; ?>

    <!--Continue reading...-->
    <?php if ($continue_reading): ?>
      <div class="heading"><h2 class="section-heading">Continue reading...</h2>
        <div class="continue-reading"><?php print $continue_reading; ?></div>
      </div>
    <?php endif; ?>

    <!--Meet our knowledge contributor...-->
    <?php if ($have_contributor): ?>
      <div class="heading"><h2 class="section-heading">Meet our knowledge contributor</h2>
        <div class="knowledge-contributor"><?php print $contributor; ?></div>
      </div>
    <?php endif; ?>
  </div>
  <!--End Of Main Content -->

  <?php if ($links = render($content['links'])): ?>
    <nav<?php print $links_attributes; ?>><?php print $links; ?></nav>
  <?php endif; ?>
  <?php print render($content['rate_rate_useful_content']); ?>
  <?php print render($content['comments']); ?>

  <?php print render($title_suffix); ?>
</article>
