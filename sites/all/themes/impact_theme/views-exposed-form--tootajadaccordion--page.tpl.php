<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)) : ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
  print $q;
  ?>
<?php endif; ?>
<div class="views-exposed-form" >


<input type="checkbox" id="checkBox0"  onclick="myFunction(0,'checkBox0','labelForCheckBox0')" style="display: none"/>
<label class="checklabel" id="labelForCheckBox0" for="checkBox0">Õpetaja</label>
<input type="checkbox" id="checkBox1"  onclick="myFunction(1,'checkBox1','labelForCheckBox1')" style="display: none"/>
<label class="checklabel" id="labelForCheckBox1" for="checkBox1">Spetsialist</label>
<input type="checkbox" id="checkBox2"  onclick="myFunction(2,'checkBox2','labelForCheckBox2')" style="display: none"/>
<label class="checklabel" id="labelForCheckBox2" for="checkBox2">Tester</label>

<script>
function myFunction(i,checkbox,label) {
  var checkBox = document.getElementById(checkbox);
  var text = document.getElementById("edit-field-eriala-value");
  var choice = i;
  var lbl = label;
  var selected = document.getElementById('edit-field-eriala-value').options[choice].selected;
  if (checkBox.checked == true){
    document.getElementById('edit-field-eriala-value').options[choice].selected = true;
    document.getElementById(checkbox).checked = true;
    document.getElementById(lbl).style.background  = "#b1cadb";
  } else {
    document.getElementById('edit-field-eriala-value').options[choice].selected = false;
    document.getElementById(checkbox).checked = false;
    document.getElementById(lbl).style.background  = "#f9f9f9";
  }
 
}
</script>
      <?php 

      ?>
   

  <div class="views-exposed-widgets clearfix">
    <?php foreach ($widgets as $id => $widget) : ?>
      <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>" style="display: none;">
        <?php if (!empty($widget->label)) : ?>
          <label for="<?php print $widget->id; ?>">
            <?php print $widget->label; ?>
          </label>
        <?php endif; ?>
        <?php if (!empty($widget->operator)) : ?>
          <div class="views-operator">
            <?php print $widget->operator; ?>
          </div>
        <?php endif; ?>
        <div class="views-widget">
          <?php print $widget->widget;
          dpm($widget);
          ?>
          
        </div>
        <?php if (!empty($widget->description)) : ?>
          <div class="description">
            <?php print $widget->description; ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endforeach; ?>
    <?php if (!empty($sort_by)) : ?>
      <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
      </div>
      <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($items_per_page)) : ?>
      <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($offset)) : ?>
      <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
      </div>
    <?php endif; ?>
    <div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>
    <?php if (!empty($reset_button)) : ?>
      <div class="views-exposed-widget views-reset-button">
        <?php print $reset_button; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
<script>
(function() {
  var select1 = document.getElementById("edit-field-eriala-value");
    for (var i = 0; i < select1.length; i++) {
        if (select1.options[0].selected){
          document.getElementById("checkBox0").checked = true;
          document.getElementById("labelForCheckBox0").style.background  = "#b1cadb";
        };
        if (select1.options[1].selected){
          document.getElementById("checkBox1").checked = true;
          document.getElementById("labelForCheckBox1").style.background  = "#b1cadb";
        };
        if (select1.options[2].selected){
          document.getElementById("checkBox2").checked = true;
          document.getElementById("labelForCheckBox2").style.background  = "#b1cadb";
         
        };
    }

})();

</script>