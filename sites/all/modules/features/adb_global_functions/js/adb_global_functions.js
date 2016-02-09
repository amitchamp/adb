(function ($) {
  Drupal.behaviors.adbGlobalFunctions = {
    attach: function(context, settings) {
      var mainMenuLinks = $('#main-menu-links').children();

      closeMenu();
      closeOtherMenus();

      // Closes menu when clicked on 'Close' inside menu.
      function closeMenu() {
        $('.menu-close').click(function() {
          $(this).parents('.menu-attach-block-wrapper').slideUp('fast');
          $(this).parents('.menu-attach-block-wrapper').prev().removeClass('dropped');
        });
      }

      // Make sure only one menu is opened at a time.
      function closeOtherMenus() {
        $('.menu-attach-block-drop-link').click(function (event) {
          var self = $(this);

          // Close all menus except itself.
          if (!self.hasClass('dropped')) {
            mainMenuLinks.each(function() {
              if (!$(this).is(self.parent())) {
                $(this).find('.menu-attach-block-wrapper').slideUp('fast');
                $(this).find('.menu-attach-block-drop-link').removeClass('dropped');
              }
            });
          }
        });
      }
    }
  };
}(jQuery));
