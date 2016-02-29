<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
  </head>
  <body>
    <header<?php print $header_attributes; ?>>

      <?php if ($site_logo || $site_name || $site_slogan): ?>
        <!-- !Branding -->
        <div class="branding pull-left">

          <?php if ($site_logo): ?>
            <div id="logo">
              <?php print $site_logo; ?>
            </div>
          <?php endif; ?>

          <?php if ($site_name || $site_slogan): ?>
            <!-- !Site name and Slogan -->
            <div<?php print $hgroup_attributes; ?>>

              <?php if ($site_name): ?>
                <h1<?php print $site_name_attributes; ?>><?php print $site_name; ?></h1>
              <?php endif; ?>

              <?php if ($site_slogan): ?>
                <h2<?php print $site_slogan_attributes; ?>><?php print $site_slogan; ?></h2>
              <?php endif; ?>

            </div>
          <?php endif; ?>

        </div>
      <?php endif; ?>

      <!-- !Header Region -->
      <?php print render(block_get_blocks_by_region('header'));?>

    </header>

    <!-- !Navigation -->
    <?php print render(block_get_blocks_by_region('menu_bar'));?>

    <?php if ($primary_navigation): print $primary_navigation; endif; ?>
    <?php if ($secondary_navigation): print $secondary_navigation; endif; ?>

    <!-- !Breadcrumbs -->
    <?php if ($breadcrumb): print $breadcrumb; endif; ?>

    <!-- !Leaderboard Region -->
    <?php print render(block_get_blocks_by_region('leaderboard'));?>

    <!-- !Messages and Help -->
    <?php print $messages; ?>
    <?php print render(block_get_blocks_by_region('help'));?>

    <!-- !Secondary Content Region -->
    <?php print render(block_get_blocks_by_region('secondary_content'));?>

    <!-- Inner pages header -->
    <?php print render(block_get_blocks_by_region('banner'));?>

    <div id="columns" class="columns clearfix <?php print $main_content_sidebar_first_class; ?>">
      <main id="content-column" class="content-column" role="main">
        <div class="content-inner">

          <!-- !Highlighted region -->
          <?php print render(block_get_blocks_by_region('highlighted'));?>

          <<?php print $tag; ?> id="main-content">

            <?php print render($title_prefix); // Does nothing by default in D7 core ?>

            <!-- !Main Content Header -->
            <?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
              <header<?php print $content_header_attributes; ?>>

                <?php if (($primary_local_tasks || $secondary_local_tasks || $action_links) && $is_admin): ?>
                  <div id="tasks">

                    <?php if ($primary_local_tasks): ?>
                      <ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
                    <?php endif; ?>

                    <?php if ($secondary_local_tasks): ?>
                      <ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
                    <?php endif; ?>

                    <?php if ($action_links = render($action_links)): ?>
                      <ul class="action-links clearfix"><?php print $action_links; ?></ul>
                    <?php endif; ?>

                  </div>
                <?php endif; ?>

              </header>
            <?php endif; ?>

            <!-- !Main Content -->
            <div class="print-content"><?php print $content; ?></div>

            <!-- !Feed Icons -->
            <?php print $feed_icons; ?>

            <?php print render($title_suffix); // Prints page level contextual links ?>

          </<?php print $tag; ?>><!-- /end #main-content -->

          <!-- !Content Aside Region-->
          <?php print render(block_get_blocks_by_region('content_aside'));?>

        </div><!-- /end .content-inner -->
      </main><!-- /end #content-column -->

      <!-- !Sidebar Regions -->
      <?php print render(block_get_blocks_by_region('sidebar_first'));?>
      <?php print render(block_get_blocks_by_region('sidebar_second'));?>

    </div><!-- /end #columns -->

    <!-- !Comment Section Region -->
    <?php print render(block_get_blocks_by_region('comments_section'));?>

    <!-- !Tertiary Content Region -->
    <?php print render(block_get_blocks_by_region('tertiary_content'));?>

    <?php if ($page['footer'] || $attribution): ?>
      <footer<?php print $footer_attributes; ?>>
        <?php print render($page['footer']); ?>
        <?php print $attribution; ?>
      </footer>
    <?php endif; ?>
    
    <?php if ($sourceurl_enabled): ?>
      <div class="print-source_url">
        <?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
      </div>
    <?php endif; ?>
    <div class="print-links"><?php print theme('print_url_list'); ?></div>
    <?php print $footer_scripts; ?>
  </body>
</html>
