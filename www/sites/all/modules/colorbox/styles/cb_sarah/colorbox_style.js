(function ($) {

Drupal.behaviors.initColorboxDefaultStyle = {
  attach: function (context, settings) {
    $(document).bind('cbox_complete', function () {
      // Only run if there is a title.
      if ($('#cboxTitle:empty', context).length == false) {
        setTimeout(function () { $('#cboxTitle', context).slideUp() }, 1500);
        $('#cboxLoadedContent img', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideDown();
        });
        $('#cboxOverlay', context).bind('mouseover', function () {
          $('#cboxTitle', context).slideUp();
        });
      }
      else {
        $('#cboxTitle', context).hide();
      }
    });
	if ($('#cboxLoadedContent > img').attr('src')) {
      var fullHref = $('#cboxLoadedContent > img').attr('src').replace(/styles\/large\/public\//,'');
      var fullLink = $('<a/>');
      fullLink.attr('href', fullHref);
      fullLink.attr('target', 'new');
      fullLink.attr('title', 'Right click to download');
      fullLink.text('Download');
      $('#cboxCurrent').append(" | ");
      $('#cboxCurrent').append(fullLink);
    }
  }
};



})(jQuery);