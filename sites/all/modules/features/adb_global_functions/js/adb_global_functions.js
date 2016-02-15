(function ($) {
  Drupal.behaviors.adbGlobalFunctions = {
    attach: function(context, settings) {
      var mainMenuLinks = $('.primary-menu').children();

      closeMenu();
      closeOtherMenus();
      toggleProfileAccess();
      showFeedbackMessageAfterRate();
      footerEnableSlider();
      toggleMoreCommentDisplay();

      // Closes menu when clicked on 'Close' inside menu.
      function closeMenu() {
        $('.menu-close').click(function() {
          $(this).parents('.menu-attach-block-wrapper').slideUp('fast');
          $(this).parents('.menu-attach-block-wrapper').prev().removeClass('dropped');
        });
      }

      // Make sure only one menu is opened at a time.
      function closeOtherMenus() {
        $('.menu-attach-block-drop-link').click(function() {
          var self = $(this);

          // Close all menus except itself.
          if (self.hasClass('dropped')) {
            mainMenuLinks.each(function() {
              if (!$(this).is(self.parent())) {
                $(this).find('.menu-attach-block-wrapper').slideUp('fast');
                $(this).find('.menu-attach-block-drop-link').removeClass('dropped');
              }
            });
          }
        });
      }

      /**
       * Toggle profile access options.
       */
      function toggleProfileAccess() {
        $('.profile-access-toggle').click(function() {
          $('.profile-access-toggle-wrapper').slideToggle('fast');
        });
      }

      /**
       * Show feedback message after user has rated.
       */
      function showFeedbackMessageAfterRate() {
        var widget = $('.rate-widget', context);

        widget.on('eventAfterRate', function() {
          var widgetWrapper = $(this).parents('.form-item');

          // We hide the main widget and add a new node just after the widget
          // in DOM.
          widgetWrapper.hide();
          widgetWrapper.after('<div class="rate-feedback-wrapper">' + Drupal.t('Thank you for your feedback.') + '</div>');
        });
      }

      /**
       * Enable slider for footer.
       */
      function footerEnableSlider() {
        $('.item-list-slider-wrapper').flexslider({
          animation: 'slide',
          slideshow: true,
          slideshowSpeed: 5000,
          controlNav: false
        });
      }

      /**
       * Enable display more comment toggle.
       */
      function toggleMoreCommentDisplay() {
        $('.comment-more-toggle').click(function() {
          $('.comment-more-toggle-wrapper').slideToggle();
        });
      }
    }
  };
}(jQuery));
