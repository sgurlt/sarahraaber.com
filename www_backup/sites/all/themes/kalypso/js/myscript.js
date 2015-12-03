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

/* Switch Class to Photoswipe if browser width < 1200 px */
    if ($(window).width() > 1200) {
      // DO NOTHING
    }
    else {
        $('.view-artwork .views-field-field-portfolio-image a').removeClass('colorbox-load');
        $('.view-artwork .views-field-field-portfolio-image a').removeClass('init-colorbox-load-processed');
        $('.view-artwork .views-field-field-portfolio-image a').removeClass('cboxElement');
        $('.view-artwork .views-field-field-portfolio-image a').addClass('photoswipe');
    }


	/* Mobile Nav */
	function mobileNav() {
		if ($(window).width() < 1200) {
			//var nav = $('#menu').html(),
			//	btn = '<button class="burger_button">';
			//// Cut the Nav and move it to a better position
			//$('#mainrow').prepend(nav);
			//$('#vert_nav').find('#menu').remove();
			//$('#menu_wrap').prepend(btn);
			$('.burger_button').click(function () {
				$(this).parents('#main-menu-mobile').toggleClass('active');
			});

			$('#main-menu-links a.active').parent('li').css('background-color', 'whitesmoke');
		}
	}

	mobileNav();

});


// Initial Photoswipe
document.addEventListener('DOMContentLoaded', function(){
  var pathname = window.location.pathname;
  if(pathname == '/artwork') {
    Code.photoSwipe('.photoswipe', '.view-artwork');
  }
}, false);

