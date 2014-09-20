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
var container = $('.view-artwork');
var container2 = $('.view-artwork .view-content .field-content img');
$(container2).imagesLoaded(function() {
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
	
</script>

</body>
</html>