<!DOCTYPE html>
<!--[if lt IE 7]> <html class="ie6 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 7]>    <html class="ie7 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if IE 8]>    <html class="ie8 ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <![endif]-->
<!--[if gt IE 8]> <!--> <html class="" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"> <!--<![endif]-->
<head>
  <meta name="Description" content="My name is Sarah and this is my portfolio.">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
<!--  <script type="text/javascript" src="/sites/all/libraries/photoswipe/lib/simple-inheritance.min.js"></script>-->
<!--  <script type="text/javascript" src="/sites/all/libraries/photoswipe/code-photoswipe-1.0.11.min.js"></script>-->


  <link href='http://fonts.googleapis.com/css?family=Tinos:400italic' rel='stylesheet' type='text/css'>
    <!-- IE Fix for HTML5 Tags -->
    <!--[if lt IE 9]>
      <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
  <?php kalypso_user_css();
    $is_webkit = false;
    if ( strpos(strtolower($_SERVER['HTTP_USER_AGENT']), 'webkit') !== false ) {
        $is_webkit = true;
    }
  ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>


  <script>
  var pathname = window.location.pathname;
  if(pathname == '/artwork') {
    var container = $('.view-artwork');
    var container2 = $('.view-artwork .view-content .field-content img');
    $(container2).imagesLoaded(function() {
      $('.page-artwork .view-artwork .view-content').css('opacity','1');
      $('.page-artwork .view-artwork ').css('background-image','none');
      $('.view-artwork').isotope({
        // options
        itemSelector : '.views-row',
      });
      // getTransform();
    });

    // First approach for last row:
    // function getTransform() {
      // var results = $('.views-row.views-row-4').css('-webkit-transform').match(/matrix(?:(3d)\(\d+(?:, \d+)*(?:, (\d+))(?:, (\d+))(?:, (\d+)), \d+\)|\(\d+(?:, \d+)*(?:, (\d+))(?:, (\d+))\))/)

      // if(!results) return [0, 0, 0];
      // if(results[1] == '3d') return results.slice(2,5);

      // results.push(0);
      // alert(results.slice(5, 6));
    // }

    $('#filters a').click(function(){
      var selector = $(this).attr('data-filter');
      container.isotope({ filter: selector });
      return false;
    });

  }
  </script>

</body>
</html>
