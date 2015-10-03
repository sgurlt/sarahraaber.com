(function ($, window, undefined) {

  // Initial masonry
  Drupal.behaviors.initialMasonry = {
    attach: function (context, settings) {
      $('body').once(function() {
        var pathname = window.location.pathname;
        if(pathname == '/artwork') {

          var $container = $('.view-artwork');

          var imgLoad = imagesLoaded($container);
          imgLoad.on( 'always', function( instance ) {
            setTimeout(function() {
              $('.page-artwork .view-artwork .view-content').css('opacity','1').css('pointer-events','initial');
              $('.page-artwork .view-artwork ').css('background-image','none');
              $container.isotope({
                // options
                itemSelector : '.views-row'
              });
              // We have to set a timeout to avoid layout issues.
            }, 1000);
          });

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
