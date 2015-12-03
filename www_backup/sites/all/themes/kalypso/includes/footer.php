<?php 
function kalypso_footer($page){
  global $root; 
?>

<!-- begin footer -->        
    <div id="footer"> 
      <div class="container">
        
        <?php if (theme_get_setting('enable_primary_footer') == '1') { ?>
        <div class="row">
        
          <div class="span3">
            <?php if(!$page['footer_1']) {?>
            <div class="footer_icons">
              <ul>
                <?php if (theme_get_setting('twitter_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('deviantart_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/icon_deviantart.png" alt="twitter"></a></li><?php endif ?>
                <?php if (theme_get_setting('facebook_icon') == '1' ): ?><li><a href="http://www.xing.com/profile/Sarah_Raaber" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/icon_xing.png" alt="xing"></a></li><?php endif ?>
		      	    <?php if (theme_get_setting('facebook_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('facebook_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/facebook-black.png" alt="facebook"></a></li><?php endif ?>
                <?php if (theme_get_setting('google_plus_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('google_plus_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/gplus-black.png" alt="gplus"></a></li><?php endif ?>
                <?php if (theme_get_setting('pinterest_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('pinterest_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/pinterest-black.png" alt="pinterest"></a></li><?php endif ?>
                <?php if (theme_get_setting('linkedin_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('linkedin_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/linkedin-black.png" alt="linkedin"></a></li><?php endif ?>
                <?php if (theme_get_setting('flickr_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('flickr_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/flickr-black.png" alt="flickr"></a></li><?php endif ?>
                <?php if (theme_get_setting('youtube_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('youtube_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/youtube-black.png" alt="youtube"></a></li><?php endif ?>
                <?php if (theme_get_setting('rss_icon') == '1' ): ?><li><a href="<?php echo theme_get_setting('rss_url'); ?>" target="_blank"><img class="social_icons" src="<?php echo $root;?>/images/social/rss-black.png" alt="rss"></a></li><?php endif ?>
            </ul>  
            </div>
          <?php } else { print render($page['footer_1']); }?>   
          </div> 
      
          <div class="span2">
            <?php if(!$page['footer_2']) {?>
            <span> <i class="icon-envelope icon-white"></i> <a style="color: #fff;" href="mailto:sarah.raaber@gmx.de">sarah.raaber@gmx.de</a></span>
            <?php } else { print render($page['footer_2']); }?>  
          </div>
          
    <!--      <div class="span2">	-->
    <!--        <?php if(!$page['footer_3']) {?>	-->
    <!--        <span> <i class="icon-briefcase icon-white"></i>&nbsp;&nbsp;1-888-888-8888</span>	-->
    <!--        <?php } else { print render($page['footer_3']); }?>  -->
    <!--      </div>	-->
          
    <!--      <div class="span5">	-->
    <!--        <?php if(!$page['footer_4']) {?>	-->
    <!--       <ul id="footer_menu">	-->
    <!--          <li> <a href="<?php print base_path();?>">Home</a></li>	-->
    <!--        </ul>  	-->
    <!--      <?php } else { print render($page['footer_4']); }?>  	-->   
    <!--      </div>	-->
          
        </div> 
        <?php } ?> 
        
        <?php if (theme_get_setting('enable_secondary_footer') == '1') { ?>
        <div class="row">
          <div class="span12"> 
            <?php if(!$page['footer_full']) {?>    
            <?php } else { print render($page['footer_full']); }?>  
          </div> 
        </div>
        <?php } ?>
      </div>
      <script>
        var pathname = window.location.pathname;
        if(pathname == '/artwork') {
          var container = $('.view-artwork');
          var container2 = $('.view-artwork .view-content .field-content img');
          $(container2).imagesLoaded(function() {
            $('.page-artwork .view-artwork .view-content').css('opacity','1');
            $('.page-artwork .view-artwork .view-content').css('pointer-events','initial');
            $('.page-artwork .view-artwork ').css('background-image','none');
            $('.view-artwork').isotope({
              // options
              itemSelector : '.views-row',
            });
          });


          $('#filters a').click(function(){
            var selector = $(this).attr('data-filter');
            container.isotope({ filter: selector });
            return false;
          });
        }
      </script>
    </div>
    <!-- end footer --> 
<?php }
?>