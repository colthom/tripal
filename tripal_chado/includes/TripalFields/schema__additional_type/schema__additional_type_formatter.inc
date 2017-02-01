<?php

class schema__additional_type_formatter extends ChadoFieldFormatter {
  // The default lable for this field.
  public static $default_label = 'Type';

  // The list of field types for which this formatter is appropriate.
  public static $field_types = array('schema__additional_type');

  /**
   *
   * @see TripalFieldFormatter::settingsForm()
   */
  public function settingsForm($view_mode, $form, &$form_state) {

  }

  /**
   *
   * @see TripalFieldFormatter::view()
   */
  public function view(&$element, $entity_type, $entity, $langcode, $items, $display) {
    foreach ($items as $delta => $item) {
      $element[$delta] = array(
        '#type' => 'markup',
        '#markup' => $item['value'],
      );
    }
  }
}