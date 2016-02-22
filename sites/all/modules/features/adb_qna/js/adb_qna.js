(function ($) {
  Drupal.behaviors.adbQna = {
    attach: function(context, settings) {
      changeCardsToggle();

      /**
       * Enable cards toggling.
       */
      function changeCardsToggle() {
        $('.cards-toggler').click(function() {
          $('.cards-toggle-wrapper').slideToggle();
        });
      }
    }
  };
})(jQuery);
