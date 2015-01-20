<?php 
function kalypso_header($page){
  global $root; 
?>

    <div class="container">
      <div id="mainrow" class="row">
			<!-- begin Mobile menu -->
				<div id="menu-mobile" class="row">
					<div id="main-menu-mobile" class="navigation">
						<div id="menu_wrap_mobile">
							<button class="burger_button"></button>
							<?php print theme('links__system_main_menu', array(
								'attributes' => array(
									'id' => 'main-menu-links',
									'class' => array('links', 'clearfix'),
								),
								'heading' => array(
									'text' => t('Main menu'),
									'level' => 'h2',
									'class' => array('element-invisible'),
								),
							));
							?>
						</div>
					</div>

				</div>
				<!-- end Mobile menu -->
	<div class="span2">
          <div id="vert_nav">
          <header>
          <?php if (theme_get_setting('branding_type') == 'logo'): ?>
          <div id="main_title">
            <a href="<?php print base_path();?>"><img src="<?php print file_create_url(theme_get_setting('bg_path')); ?>" /></a>
          </div>
          <?php endif; ?>
          
          <?php if (theme_get_setting('branding_type') == 'text'): ?>

            <div id="main_title">
							<a href="<?php print base_path();?>">
								<img class="signatur" src="/sites/default/files/signature_website.png" />
								<!-- <h1 id="main_title_text"><?php print variable_get('site_name'); ?></h1> -->
							</a>
						</div>

          <?php endif; ?>
            <!-- begin menu -->
            <div id="menu" class="row">
	          	<div id="main-menu" class="navigation">
		          	<div id="menu_wrap">
				          <?php print theme('links__system_main_menu', array(
				            'attributes' => array(
				              'id' => 'main-menu-links',
				              'class' => array('links', 'clearfix'),
				            ),
				            'heading' => array(
				              'text' => t('Main menu'),
				              'level' => 'h2',
				              'class' => array('element-invisible'),
				            ),
				          )); 
				          ?>
				        </div>
				      </div> 
      
				    </div> 
            <!-- end menu -->   
                
            </header> 
          </div> 
        </div>
        <!-- end main span2 -->  
          
<script type="text/javascript">
  jQuery(document).ready(function ($) {
	
	  $().UItoTop({ easingType: 'easeOutQuart' });
	 
      $('input[type="submit"]').addClass('btn');
      
   	  $('ul.menu').superfish();
	
	  $('ul#quotes').quote_rotator();
	
//	  $('#menu').mobileMenu();
	  
	  $("#google_map").fitMaps( {w: '100%', h:'370px'} ); 
	 
	  jQuery("ul.accordion li").each(function(){
	    if(jQuery(this).index() > 0){
	    jQuery(this).children(".accordion-content").css('display','none');
	    }
	    else{
	    jQuery(this).find(".accordion-head-image").addClass('active');
	    }
	
	    jQuery(this).children(".accordion-head").bind("click", function(){
	    jQuery(this).children().addClass(function(){
	    if(jQuery(this).hasClass("active")) return "";
	      return "active";
	    });
	    jQuery(this).siblings(".accordion-content").slideDown();
	    jQuery(this).parent().siblings("li").children(".accordion-content").slideUp();
	    jQuery(this).parent().siblings("li").find(".active").removeClass("active");
	    });
	  });
	});
    
</script>
<?php }
?>