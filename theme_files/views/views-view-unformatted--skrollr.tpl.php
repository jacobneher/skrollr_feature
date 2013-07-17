<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php $bg_data = $view->result[$id]->_field_data['nid']['entity']->field_skrollr_background_data['und'][0]['value']; ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } print ' ' . $bg_data; ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>