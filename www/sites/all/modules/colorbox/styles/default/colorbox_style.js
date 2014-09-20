(function ($) {

Drupal.behaviors.initColorboxDefaultStyle = {
  attach: function (context, settings) {

	if ($('#cboxLoadedContent > img').attr('src')) {
      var fullHref = $('#cboxLoadedContent > img').attr('src').replace(/styles\/large\/public\//,'');
      var fullLink = $('<a/>');
      fullLink.attr('href', fullHref);
      fullLink.attr('target', '_blank');
      fullLink.text('Download');
      $('#cboxCurrent').append(fullLink);
    }
	

  }
};

	
})(jQuery);