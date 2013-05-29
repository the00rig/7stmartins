// BUILD RESPONSIVE MENUS
(function ($) {
  Drupal.behaviors.responsiveMenu = {
    attach: function (context, settings) {

      $('#navigation').once('nav-wide', function() {
        // grab main (touch) nav and clone it (wide)
        $nav_wide = $(this).clone().attr('id', 'navigation-wide');
        // hide main (touch) nav
        $(this).hide();
        // place wide nav under logo and hide it
        $('#branding-container').after($nav_wide).siblings('#navigation-wide').hide();
        // add touch button to toggle menus
        $touch_menu_btn = $("<div id='touch-menu-btn'>MENU</div>");
        $(this).before($touch_menu_btn);
        $touch_menu_btn.toggle(
          function () {
            $(this)
              .addClass("close")
              .html("CLOSE");
          },
          function () {
            $(this)
              .removeClass("close")
              .html("MENU");
          }
        );
        
      });
    }
  };

}(jQuery));