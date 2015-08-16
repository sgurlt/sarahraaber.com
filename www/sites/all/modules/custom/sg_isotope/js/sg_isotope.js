(function ($, window, undefined) {


  // Initial masonry
  Drupal.behaviors.initialMasonry = {
    attach: function (context, settings) {
      $('body').once(function() {
        var pathname = window.location.pathname;
        if(pathname == '/artwork') {
          var container = $('.view-artwork');
          $(container).imagesLoaded(function() {
            $('.page-artwork .view-artwork .view-content').css('opacity','1');
            $('.page-artwork .view-artwork .view-content').css('pointer-events','initial');
            $('.page-artwork .view-artwork ').css('background-image','none');
            $(container).isotope({
              // options
              itemSelector : '.views-row'
            });
          });


          $('#filters a').click(function(){
            var selector = $(this).attr('data-filter');
            container.isotope({ filter: selector });
            return false;
          });
        }
      })
    }
  };

})(jQuery, window);
