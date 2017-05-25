jQuery(document).ready(function() {
jQuery('.view-dokumendiregister .view-content .views-row').each(function(index) {
	jQuery(this).children('.views-field').children('.field-content').children('#docreg-title').click(function(e){
	 e.preventDefault();
	 jQuery(this).children('.docreg-arrow-down').toggle();
	  jQuery(this).children('.docreg-arrow-up').toggle();
	 var row = jQuery(this).parent('span').parent('div').parent('div');
	  row.children('div.views-field-field-docregister-file').children('div').children('div').children('ul').toggle();
	 });
 });
});