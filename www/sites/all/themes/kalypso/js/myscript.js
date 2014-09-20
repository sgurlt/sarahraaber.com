$(document).ready(function() {

/* Slider Projectpage */


	$('.field-slideshow-controls .next').html('');
	$('.field-slideshow-controls .next').css('background-image','url("/sites/all/themes/kalypso/images/button_right_grey.png")');
	$('.field-slideshow-controls .prev').html('');
	$('.field-slideshow-controls .prev').css('background-image','url("/sites/all/themes/kalypso/images/button_left_grey.png")');

	
	
	
	/* scroll body to 0px on click */
		$('.views-slideshow-controls-bottom .views-slideshow-pager-field-item').click(function () {
			$('body,html').animate({
				scrollTop: 0
			}, 400);
			return false;
		});
	
/* Slider Frontpage */

	$('.ei-title').html('');


/* Filter Artwork */

	$('ul#filters li a').click(function() {
		$('ul#filters li.active').removeClass('active');
		$(this).parent('li').addClass('active');
	}); 
	
	



});