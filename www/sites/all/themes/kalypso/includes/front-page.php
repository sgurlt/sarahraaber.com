<?php 

function kalypso_bootstrap_slider($page){
  global $root; 
  $slide_number = theme_get_setting('slides_number');
?>
					<div class="row">
            <div class="span10">
              <div id="myCarousel" class="carousel slide">
              
						   	<div class="carousel-inner">
							    <?php $i = '1'; while ($i <= $slide_number) { ?>
							    <div class="<?php if ($i == '1') {echo "active ";} ?>item">
							      <a href="<?php echo theme_get_setting('slide_url_'.$i.''); ?>">
							      	<img src="<?php print file_create_url(theme_get_setting('slide_path_'.$i.'')); ?>">
							      </a>
							      <?php if (theme_get_setting('slide_caption_'.$i.'') != '') : ?>
							    	<div class="carousel-caption">
								    	<p><?php echo theme_get_setting('slide_caption_'.$i.''); ?></p>
								    </div><!-- end caption -->
								    <?php endif; ?>
							    </div><!-- end item -->
							    <?php $i++; } ?>
							  </div>
							  <!-- end carousel-inner -->
							
							  <!-- Carousel nav -->
							  <a class="carousel-control left" href="#myCarousel" data-slide="prev">&lsaquo;</a>
							  <a class="carousel-control right" href="#myCarousel" data-slide="next">&rsaquo;</a>
						  
						  </div>
						  <!-- end myCarousel -->            
						</div>
				  </div>
				  
				  <script type="text/javascript">
						jQuery(document).ready(function ($) {
						  $('.carousel').carousel({
						    interval: 5000
						  })
						})
				  </script>
          
<?php }


function kalypso_nivo_slider($page){
  global $root; 
  $slide_number = theme_get_setting('slides_number');
?>
					<div class="row">
            <div class="span10">
              <div class="slider-wrapper theme-default">
                
                <div id="slider" class="nivoSlider">
	                <?php $i = '1'; while ($i <= $slide_number) { ?>  
	                	<a href="<?php echo theme_get_setting('slide_url_'.$i.''); ?>">
	                  	<img src="<?php print file_create_url(theme_get_setting('slide_path_'.$i.'')); ?>" alt="slider" title="#htmlcaption<?php echo $i;?>">
	                  </a>
	                <?php $i++; } ?>              
                </div>
                
                <?php $i = '1'; while ($i <= $slide_number) { ?> 
		            <div id="htmlcaption<?php echo $i;?>" class="nivo-html-caption">
                 <?php echo theme_get_setting('slide_caption_'.$i.''); ?>
                </div>
			          <?php $i++; } ?> 
			          
	            </div>
            </div>
          </div>
          
          <script type="text/javascript">
	          jQuery(document).ready(function ($) {
	          	$('#slider').nivoSlider();
	          });
	        </script>
<?php }

function kalypso_elastic_image_slider($page){
  global $root; 
  $slide_number = theme_get_setting('slides_number');
?>
					<div class="row">
            <div class="span10">
              <div id="ei-slider" class="ei-slider">
              
                <ul class="ei-slider-large">
	                <?php $i = '1'; while ($i <= $slide_number) { ?>
	                <li>
	                	<a href="<?php echo theme_get_setting('slide_url_'.$i.''); ?>">
	                  	<img src="<?php print file_create_url(theme_get_setting('slide_path_'.$i.'')); ?>" alt="slider">
	                  </a>
	                  <?php if (theme_get_setting('slide_caption_'.$i.'') != '') : ?>
	                  <div class="ei-title">
	                  	<?php echo theme_get_setting('slide_caption_'.$i.''); ?>
	                  </div>
	                  <?php endif; ?>
	                </li>
	                <?php $i++; } ?>        
                </ul>
                <!-- ei-slider-large -->
                
		            <ul class="ei-slider-thumbs">
		            	<li class="ei-slider-element">Current</li>
		              <?php $i = '1'; while ($i <= $slide_number) { ?>
				          <li><a href="#">Slide <?php echo $i; ?></a><img src="<?php print file_create_url(theme_get_setting('slide_path_'.$i.'')); ?>" alt="thumb" height="60" width="150" /></li>
				          <?php $i++; } ?>
			          </ul>
			          <!-- ei-slider-thumbs -->
	            </div>
	            <!-- ei-slider -->
            </div>
          </div>
          
          <script type="text/javascript">
	          jQuery(document).ready(function ($) {
	          	$('#ei-slider').eislideshow({
								animation			: 'center',
								autoplay			: true,
								slideshow_interval	: 3000,
								titlesFactor		: 0
						  });
	          });
	        </script>
<?php }

function kalypso_front_page($page){
  global $root; 
?>

<!-- main span10 -->
        <div class="span10">
          
          <?php if (theme_get_setting('enable_highlight') == '1') { ?>
          <div class="row">
            <div class="span10">
              <div id="page_heading">
              <h2 class="page_heading_text"><?php echo theme_get_setting('highlight_text'); ?></h2>
              </div>
            </div>
          </div> 
          <?php } ?>
 
          <?php 
            
            if (theme_get_setting('enable_slider') == '1' && theme_get_setting('slider_type') == 'default' ) {
          	  kalypso_elastic_image_slider($page); 
          	} 
          	
          	if (theme_get_setting('enable_slider') == '1' && theme_get_setting('slider_type') == 'nivo' ) {
          	  kalypso_nivo_slider($page); 
          	} 
          	
          	elseif (theme_get_setting('enable_slider') == '1' && theme_get_setting('slider_type') == 'bootstrap' ) {
          	  kalypso_bootstrap_slider($page); 
          	} 
          	
          ?>
          
          <?php print render($page['slider']); ?> 
          
          <?php if (theme_get_setting('enable_panels') == '1') { ?>
          <div class="row">
            <div class="span10">
              <div class="section_title"><span class="section_title_text"><?php echo theme_get_setting('panels_title'); ?></span></div>
            </div> 
          </div>
        
          <div class="row">
            <div id="panels"> 
              
              <div class="span3">
	            	<div class="panel_wrap">
	              	<?php if(!$page['panel_1']) {?>
	              	<a href="#"><div class="panel_icon"><img src="<?php echo $root;?>/images/monitor.png" alt="color"></div></a>
	              	<h3 class="panel_title">Design & Branding</h3>
	              	<div class="panel_text">
	               	  <p>Engage your audience. Define your identity.</p>
	               	</div> 
	               	<?php } else { print render($page['panel_1']); }?> 
	              </div>
	            </div>
	      
	          <div class="span3">
		          <div class="panel_wrap">
		          	<?php if(!$page['panel_2']) {?>
		          	<a href="#"><div class="panel_icon"><img src="<?php echo $root;?>/images/phone.png" alt="color"></div></a>
		          	<h3 class="panel_title">Global Solutions</h3>
		          	<div class="panel_text">
		            	<p>Know no boundires. Expand your horizons.</p>	             
		            </div>  
		            <?php } else { print render($page['panel_2']); }?> 
		          </div>
		        </div>
        
	          <div class="span3">
		        	<div class="panel_wrap">
		        	  <?php if(!$page['panel_3']) {?>
		          	<a href="#"><div class="panel_icon"><img src="<?php echo $root;?>/images/file3.png" alt="color"></div></a>
		          	<h3 class="panel_title">Customer Service</h3>
		          	<div class="panel_text">
		            	<p>Phone, email, live-chat. We've got you covered.</p>           
		            </div> 
		            <?php } else { print render($page['panel_3']); }?>  
		          </div>
		        </div>
		        
          </div>
        </div>
        <!-- end panels --> 
        
        <?php if($page['panel_full']) {?>
        <div class="row">
            <div id="panels"> 
              <?php print render($page['panel_full']); ?>
            </div>
        </div>
        <?php } } ?>
        
		<div class="welcome_text">
			<span>Hey! My name is Sarah and this is my portfolio.</span>
		</div>
		
         <?php if (theme_get_setting('enable_portfolio') == '1') { ?>
         <div class="row">
            <div class="span10">
              <div class="section_title"><span class="section_title_text"><?php echo theme_get_setting('portfolio_title'); ?></span></div>
            </div> 
          </div>   
		  
		  <?php
			$view = views_get_view('recent_work');
			print $view->preview('default');
			?>
         
          <div id="portfolio">
            <div class="row">
	            <?php print render($page['portfolio']); ?>  
            </div>
          </div>
          <!-- end portfolio --> 
          <?php } ?>

          <?php if (theme_get_setting('enable_contact') == '1') { ?>
          <div class="row">
            <div class="span10">
              <div class="section_title"><span class="section_title_text"><?php echo theme_get_setting('contact_title'); ?></span></div>
            </div>
          </div>
          
          <?php if (theme_get_setting('enable_map') == '1') { ?>
          <div class="row">
            <div class="span10">
              <div id="google_map">
                <iframe width="1170" height="370" src="<?php echo theme_get_setting('map_address'); ?>"></iframe><br />      
              </div>
            </div>
          </div>
          <?php } ?>
        
          <div class="row">   
            <div class="span4">
              <?php if(!$page['contact_1']) {?>
              <h3>Company Creed </h3>
	          <ul class="accordion">
	            <li class="divider"><h2 class="accordion-head title-color gdl-title"><span class="accordion-head-image active"></span>Sed ut perspiciatis unde</h2>
	              <div class="accordion-content">
	                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
	              </div>
	            </li>
	            <li class="divider"><h2 class="accordion-head title-color gdl-title"><span class="accordion-head-image"></span>Temporibus autem quibusdam</h2>
	              <div class="accordion-content">
	                MLorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. 
	              </div>
	            </li>
	            <li class="divider"><h2 class="accordion-head title-color gdl-title"><span class="accordion-head-image"></span>Nam libero tempore</h2>
	              <div class="accordion-content">
	                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
	              </div>
	            </li>
	          </ul>
	          <?php } else { print render($page['contact_1']); }?> 
            </div> 
          
            <div class="span2">
              <?php if(!$page['contact_2']) {?>
              <h3 class="our_details">Our Details</h3>
              <address>
              <strong>Lorem Ipsum, Inc.</strong><br>900 Bagby St<br>Houston, TX, 77002<br><abbr title="Phone">P:</abbr> (123) 456-7890
              </address>
              <p><a href="mailto:info@lorem.inc">info@lorem-inc.com</a><br /></p>
              <input type="text" class="subscribe_input" name="subject" value="Name" size="60" maxlength="64"><br>
		          <input type="text" class="subscribe_input" name="subject" value="Email" size="60" maxlength="64"><br>
		          <button class="btn btn-small" type="button">Subscribe</button>
	          <?php } else { print render($page['contact_2']); }?> 
            </div>
       
            <div class="span4">
            <?php if(!$page['contact_3']) {?>
	          <h3>Customer Testimonials</h3> 
	            <ul id="quotes">
                <li>
                  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
                  - John Doe
                </li>
                <li>
                  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
                  - Adam Smith
                </li>
                <li>
                  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
                  - George Washington
                </li>
                <li>
                  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
                 - Shirley Temple
                </li>
              </ul>
            <?php } else { print render($page['contact_3']); }?>  
            </div>
          </div>
          
          <?php if($page['contact_full']) {?>
          <div class="row">
            <div id="panels"> 
              <?php print render($page['contact_full']); ?>
            </div>
          </div>
          <?php } } ?>     
        
          <?php if (theme_get_setting('enable_clients') == '1') { ?>
          <div class="row">
            <div class="span10">
              <div class="section_title"><span class="section_title_text"><?php echo theme_get_setting('clients_title'); ?></span></div>
            </div>
           </div>
        
          <div id="clients" class="row" >
            <?php if(!$page['clients']) {?>
            <div class="span2">
              <a href="#"><img src="<?php echo $root;?>/images/forest.png" alt="clients"></a>
            </div>  
            <div class="span2">
              <a href="#"><img src="<?php echo $root;?>/images/den.png" alt="clients"></a>
            </div>
            <div class="span2">
              <a href="#"><img src="<?php echo $root;?>/images/forest.png" alt="clients"></a>
            </div>
            <div class="span2">
              <a href="#"><img src="<?php echo $root;?>/images/canyon.png" alt="clients"></a>
            </div>
            <div class="span2">
              <a href="#"><img src="<?php echo $root;?>/images/jungle.png" alt="clients"></a>
            </div>
            <?php } else { print render($page['clients']); }?> 
          </div>
          
          <?php } ?>
          
        </div>
      </div>       
    </div>
    <!-- end main body container -->  
<?php }