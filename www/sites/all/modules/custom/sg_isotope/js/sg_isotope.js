(function ($, window, undefined) {

  // Initial masonry
  Drupal.behaviors.initialMasonry = {
    attach: function (context, settings) {
      $('body').once(function() {
        var pathname = window.location.pathname;
        if(pathname == '/artwork') {

          // Disable page scrolling to prevent layout bugs.
          //$('html, body').css({
          //  'overflow': 'hidden',
          //  'height': '100%'
          //});

          var $container = $('.view-artwork').isotope({
            itemSelector : '.views-row'
          });

          // layout Isotope after each image loads
          $container.imagesLoaded().progress( function() {
            $container.isotope('layout');
              $('.page-artwork .view-artwork .view-content').css('opacity','1').css('pointer-events','initial');
              $('.page-artwork .view-artwork ').css('background-image','none');
          });

          //var imgLoad = imagesLoaded($container);
          //imgLoad.on( 'always', function( instance ) {
          //  $('.page-artwork .view-artwork .view-content').css('opacity','1').css('pointer-events','initial');
          //  $('.page-artwork .view-artwork ').css('background-image','none');
          //  $container.isotope({
          //    // options
          //    itemSelector : '.views-row'
          //  });
          //});



          $('#filters a').click(function(){
            var selector = $(this).attr('data-filter');
            $container.isotope({ filter: selector });
            return false;
          });
        }
      })
    }
  };

})(jQuery, window);
