<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <header>
    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <span class="submitted">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </span>
    <?php endif; ?>
  </header>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
?>

    <php dpm($content); ?>
<?php
  //foreach( as $label => $field_key):
?>
<div class="loan-field-row">
      <div class="loan-field-label">Shareholder:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_shareholder']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Representative:</div>
      <div class="loan-field-value"><?php print render($content['field_bib_rel_subject']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Item Title:</div>
      <div class="loan-field-value"><?php print render($content['field_bib_rel_object']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Item Type:</div>
      <div class="loan-field-value"><?php print 'type'; ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Volumes:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_volumes_loaned']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Issues:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_issues_loaned']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Checkout Date:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_duration'][0]['value']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Return Date:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_duration'][0]['value2']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Notes:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_notes']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Fine:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_fine']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Other Notes:</div>
      <div class="loan-field-value"><?php print render($content['field_loan_other_notes']); ?></div>
</div><!--/.loan-field-row -->
<div class="loan-field-row">
      <div class="loan-field-label">Tags:</div>
      <div class="loan-field-value"><?php print render($content['field_bib_rel_type']); ?></div>
</div><!--/.loan-field-row -->
<php
  //endforeach;
?>

<?php
    print render($content);
?>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article> <!-- /.node -->
