<?php /** @noinspection PhpUnused */
/**
 * @file
 * webspark_wysiwyg.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function webspark_wysiwyg_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['explore_programs_box'] = array(
    'title' => 'Explore Our Programs Box',
    'description' => 'Replace the button links and text with your own.',
    'weight' => -10,
    'fid' => 0,
    'format' => 'wysiwyg',
    'body' => '<div class="panel explore-programs"><div class="panel-body"><h3>Explore Our Programs</h3><p><a href="https://webapp4.asu.edu/programs/t5/undergrad" class="btn btn-blue btn-block">Undergraduate programs</a> <a href="https://webapp4.asu.edu/programs/t5/graduate/false" class="btn btn-blue btn-block">Graduate programs</a></p></div></div>',
    'name' => 'explore_programs_box',
    'content_types' => array(),
  );
  $templates['alert_success'] = array(
    'title' => 'Alert type:Success',
    'description' => 'Inserts a success-styled alert element (without the "Close" X)',
    'weight' => -3,
    'fid' => 0,
    'body' => '<div class="alert alert-block alert-success">
        <h2>Success alert title</h2>
        <p>Inserts a line break after this element as well. Delete it if you don\'t plan on adding any content after this.</p>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <br>&nbsp;',
    'name' => 'alert_success',
    'content_types' => array(),
  );
  $templates['alert_warning'] = array(
    'title' => 'Alert type:Warning',
    'description' => 'Inserts a warning-styled alert element (without the "Close" X)',
    'weight' => -2,
    'fid' => 0,
    'body' => '<div class="alert alert-block alert-warning">
        <h2>Warning alert title</h2>
        <p>Inserts a line break after this element so the WYSIWYG can easily insert content after it. Delete it if you don\'t plan on adding any content after this.</p>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <br>&nbsp;',
    'name' => 'alert_warning',
    'content_types' => array(),
  );
  $templates['alert_danger'] = array(
    'title' => 'Alert type:Danger',
    'description' => 'Inserts a danger/error alert styled element (without the "Close" X).',
    'weight' => -1,
    'fid' => 0,
    'body' => '<div class="alert alert-block alert-danger">
        <h2>Danger alert title</h2>
        <p>Inserts a line break after this element as well. Delete it if you don\'t plan on adding any content after this.</p>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <br>&nbsp;',
    'name' => 'alert_danger',
    'content_types' => array(),
  );
  $templates['alert_info'] = array(
    'title' => 'Alert type:Info',
    'description' => 'Inserts a info/notice-styled alert element (without the "Close" X).',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div class="alert alert-block alert-info">
        <h2>Info alert title</h2>
        <p>Inserts a line break after this element as well. Delete it if you don\'t plan on adding any content after this.</p>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <br>&nbsp;',
    'name' => 'alert_info',
    'content_types' => array(),
  );
  $templates['inline_columns_2'] = array(
    'title' => 'Two inline columns fluid',
    'description' => 'Inserts a single row of TWO (2) self-contained Bootstrap columns. Columns disappear under 931px wide. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 1,
    'fid' => 0,
    'body' => '<div class="row row-full wysiwyg-cols wysiwyg-cols-2 wysiwyg-cols-2-base">
      <div class="column col-xs-12 col-sm-6 wysiwyg-cols-first">
        <h2 class="wysiwyg-widen-me">Two columns fluid</h2>
        <p>Delete this sample text and create your own content for this column.</p>
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <div class="column col-xs-12 col-sm-6 wysiwyg-cols-last">
        <h3>Col 2 RECOMMENDED - Use the WYSIWYG editor.</h3>
        <p>Use the WYSIWYG to replace this content with whatever is available in the WYSIWYG UI.</p>
        <p>Manual HTML editing is possible as well, but not recommended.</p>
      </div>
    </div>
      <br>&nbsp;',
    'name' => 'inline_columns_2',
    'content_types' => array(),
  );
  $templates['inline_columns_2_rigid'] = array(
    'title' => 'Two inline columns fixed',
    'description' => 'Inserts a single row of TWO (2) self-contained columns at ALL widths.',
    'weight' => 2,
    'fid' => 0,
    'body' => '<div class="row row-full wysiwyg-cols wysiwyg-cols-2 wysiwyg-cols-2-rigid">
      <div class="column col-xs-6 wysiwyg-cols-first">
        <h3>Two fixed columns at ALL widths</h3>
        <p><strong>Mobile and desktop keeps all columns.</strong></p>
        <p>Delete this sample text and create your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <div class="column col-xs-6 wysiwyg-cols-last">
        <h3>RECOMMENDED - Use the WYSIWYG editor!</h3>
        <p>Use the WYSIWYG to replace this content with whatever is available in the WYSIWYG UI.</p>
        <p>Manual HTML editing is possible as well, but not recommended.</p>
      </div>
    </div>
      <br>&nbsp;',
    'name' => 'inline_columns_2_rigid',
    'content_types' => array(),
  );
  $templates['inline_columns_3'] = array(
    'title' => 'Three inline columns fluid',
    'description' => 'Inserts a single row of THREE (3) self-contained Bootstrap columns. Columns disappear under 931px. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 3,
    'fid' => 0,
    'body' => '<div class="row row-full wysiwyg-cols wysiwyg-cols-3 wysiwyg-cols-3-base">
      <div class="column col-xs-12 col-sm-4 wysiwyg-cols-first">
        <h2 class="wysiwyg-widen-me">Three columns fluid</h2>
        <p>Inserts a single row of THREE (3) self-contained Bootstrap columns. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <div class="column col-xs-12 col-sm-4">
        <h4>Col 2 This uses Bootstrap + HTML DIV tags.</h4>
        <p>Columns disappear under 931px. Take care to not delete any of the HTML CONTAINER tags generated by this template while editing your content. This probably will not be an issue for WYSIWYG editing, but it is easy to break the HTML in non-WYSIWYG modes like "Full HTML".</p>
      </div>
      <div class="column col-xs-12 col-sm-4 wysiwyg-cols-last">
        <h4>RECOMMENDED - Use the WYSIWYG in these columns.</h4>
        <p>Use the WYSIWYG to replace this content with whatever is available in the WYSIWYG UI. Manual HTML editing is possible as well, but not recommended.</p>
      </div>
    </div>
      <br>&nbsp;',
    'name' => 'inline_columns_3',
    'content_types' => array(),
  );
  $templates['inline_columns_3_rigid'] = array(
    'title' => 'Three inline columns fixed',
    'description' => 'Inserts a single row of THREE (3) self-contained columns at ALL browser widths. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 4,
    'fid' => 0,
    'body' => '<div class="row row-full wysiwyg-cols wysiwyg-cols-3 wysiwyg-cols-3-rigid">
      <div class="column col-xs-4 wysiwyg-cols-first">
        <h4>Three columns fixed - Sample title</h4>
        <p>A single row of THREE (3) self-contained columns at ALL browser widths. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
      </div>
      <div class="column col-xs-4">
        <h4>Col 2 This uses Bootstrap + HTML DIV tags.</h4>
        <p>Take care to not delete any of the HTML CONTAINER tags generated by this template while editing your content. This probably will not be an issue for WYSIWYG editing, but it is easy to break the HTML in non-WYSIWYG modes like "Full HTML".</p>
      </div>
      <div class="column col-xs-4 wysiwyg-cols-last">
        <h4>Col 3 RECOMMENDED - Use the WYSIWYG in these columns.</h4>
        <p>Use the WYSIWYG to replace this content with whatever is available in the WYSIWYG UI. Manual HTML editing is possible as well, but not recommended.</p>
      </div>
    </div>
      <br>&nbsp;',
    'name' => 'inline_columns_3_rigid',
    'content_types' => array(),
  );
  $templates['inline_columns_4'] = array(
    'title' => 'Four inline columns fluid',
    'description' => 'Inserts a single row of FOUR (4) Bootstrap columns. Columns disappear under 931px wide. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance.',
    'weight' => 5,
    'fid' => 0,
    'body' => '
      <div class="row row-full wysiwyg-cols wysiwyg-cols-4 wysiwyg-cols-4-base">
        <div class="column col-xs-12 col-sm-3 wysiwyg-cols-first">
          <h2 class="wysiwyg-widen-me">Four columns fluid</h2>
          <p>Inserts a single row of FOUR (4) Bootstrap columns. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
        </div>
        <div class="column col-xs-12 col-sm-3">
          <h4>Col 2 These cols use Bootstrap + HTML DIV tags.</h4>
          <p>Columns disappear under 931px wide. Take care to not delete any of the HTML tags while editing. Only edit the content. Phasellus ac lorem est. Ut enim orci, vehicula et enim nec, mollis porta tellus.</p>
        </div>
        <div class="column col-xs-12 col-sm-3">
          <h4>Col 3 Use the WYSIWYG if you want.</h4>
          <p>You should be able to use the WYSIWYG to replace this content with whatever is available in the WYSIWYG.</p>
        </div>
        <div class="column col-xs-12 col-sm-3 wysiwyg-cols-last">
          <h4>Col 4 Delete me or use me</h4>
          <p><strong>IMPORTANT: </strong>Feel free to delete any of the content you put here, but take care to not delete any of the column HTML tags while editing. This is difficult to do within the Wysiwyg editor UI, but very easy to break when editing the HTML manually.</p>
        </div>
      </div>
      <br>&nbsp;',
    'name' => 'inline_columns_4',
    'content_types' => array(),
  );
  $templates['inline_columns_4_half'] = array(
    'title' => 'Four inline columns fluid (hybrid)',
    'description' => 'Inserts a single row of FOUR (4) Bootstrap columns. Floats to 2 cols x 2 rows under 931px. NOTE: The dashed column and row guides only appear in the TinyMCE WYSIWYG interface.',
    'weight' => 6,
    'fid' => 0,
    'body' => '
      <div class="row row-full wysiwyg-cols wysiwyg-cols-4 wysiwyg-cols-4-half">
        <div class="column col-xs-6 col-sm-3 wysiwyg-cols-first">
          <h2 class="wysiwyg-widen-me">Four columns fluid (hybrid)</h2>
          <p>Inserts a single row of FOUR (4) Bootstrap columns. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
        </div>
        <div class="column col-xs-6 col-sm-3">
          <h4>Col 2 These cols use Bootstrap + HTML DIV tags.</h4>
          <p>Floats to 2 cols x 2 rows under 931px. Take care to not delete any of the HTML tags while editing. Only edit the content. Phasellus ac lorem est. Ut enim orci, vehicula et enim nec, mollis porta tellus.</p>
        </div>
        <div class="column col-xs-6 col-sm-3">
          <h4>Col 3 Use the WYSIWYG if you want.</h4>
          <p>Inserts a single row of FOUR (4) Bootstrap columns. You should be able to use the WYSIWYG to replace this content with whatever is available in the WYSIWYG.</p>
        </div>
        <div class="column col-xs-6 col-sm-3 wysiwyg-cols-last">
          <p>Floats to 2 cols x 2 rows under 931px.</p><p><strong>Col 4 -- IMPORTANT: </strong>Feel free to delete any of the content you put here, but take care to not delete any of the column HTML tags while editing. This is difficult to do within the Wysiwyg editor UI, but very easy to break when editing the HTML manually.</p>
        </div>
      </div>
      <br>&nbsp;',
    'name' => 'inline_columns_4_half',
    'content_types' => array(),
  );
  $templates['inline_columns_4_rigid'] = array(
    'title' => 'Four inline columns fixed',
    'description' => 'Inserts a single row of FOUR (4) Bootstrap columns at ALL browser widths. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 6,
    'fid' => 0,
    'body' => '
      <div class="row row-full wysiwyg-cols wysiwyg-cols-4 wysiwyg-cols-4-rigid">
        <div class="column col-xs-3 col-sm-3 wysiwyg-cols-first">
          <h4>Four Columns fixed - Sample title</h4>
          <p>A single row of FOUR (4) Bootstrap columns at ALL browser widths. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
        </div>
        <div class="column col-xs-3">
          <h4>Col 2 These cols use Bootstrap + HTML DIV tags.</h4>
          <p>Take care to not delete any of the HTML tags while editing. Phasellus ac lorem est. Ut enim orci, vehicula et enim nec, mollis porta tellus.</p>
        </div>
        <div class="column col-xs-3">
          <h4>Col 3 Use the WYSIWYG if you want.</h4>
          <p>You should be able to use the WYSIWYG to replace this content with whatever is available in the WYSIWYG.</p>
        </div>
        <div class="column col-xs-3 wysiwyg-cols-last">
          <p><strong>Col 4 -- IMPORTANT: </strong>Feel free to delete any of the content you put here, but take care to not delete any of the column HTML tags while editing. This is difficult to do within the Wysiwyg editor UI, but very easy to break when editing the HTML manually.</p>
        </div>
      </div>
      <br>&nbsp;',
    'name' => 'inline_columns_4_rigid',
    'content_types' => array(),
  );
  $templates['inline_columns_6'] = array(
    'title' => 'Six inline columns fluid',
    'description' => 'Inserts a single row of SIX (6) Bootstrap columns. Converts to 3 cols x 2 rows under 931px wide. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 7,
    'fid' => 0,
    'body' => '
      <div class="row row-full wysiwyg-cols wysiwyg-cols-6">
        <div class="column col-xs-4 col-sm-2 wysiwyg-cols-first">
          <h3 class="wysiwyg-widen-me">Six columns fluid (hybrid)</h3>
          <p>A single row of SIX (6) Bootstrap columns. Sample text to replace with your own content for this column. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent vel odio purus. Aenean ut leo bibendum, cursus ligula bibendum, lobortis erat. </p>
        </div>
        <div class="column col-xs-4 col-sm-2">
          <h4>Col 2 These cols use Bootstrap + HTML DIV tags.</h4>
          <p>Converts to 3 cols x 2 rows under 931px wide. Take care to not delete any of the HTML tags while editing. Phasellus ac lorem est. Ut enim orci, vehicula et enim nec, mollis porta tellus.</p>
        </div>
        <div class="column col-xs-4 col-sm-2">
          <h4>Col 3 Use the WYSIWYG.</h4>
          <p>A single row of SIX (6) Bootstrap columns. You should be able to use the WYSIWYG to replace this content with whatever is available in the WYSIWYG.</p>
        </div>
        <div class="column col-xs-4 col-sm-2">
          <p>Converts to 3 cols x 2 rows under 931px wide. <strong>Col 4</strong> Take care to not delete any of the HTML tags while editing. Only edit the content. Phasellus ac lorem est. Ut enim orci, vehicula et enim nec, mollis porta tellus.</p>
        </div>
        <div class="column col-xs-4 col-sm-2">
          <h4>Col 5 <strong>OPTIONAL:</strong> Manually editing the HTML.</h4>
          <p>Not recommended. Only do this if you know what you are doing with HTML. If you screw up the markup, you will have to know how to manually fix it or you will be starting over with your edits.</p>
        </div>
        <div class="column col-xs-4 col-sm-2 wysiwyg-cols-last">
          <h4>Col 6</h4>
          <p>Converts to 3 cols x 2 rows under 931px wide. Delete this same text and create your own content. Quisque tempus viverra neque in auctor. Aliquam feugiat venenatis ullamcorper. Sed ac rhoncus enim, ac luctus justo. Etiam elementum, neque id commodo tristique, quam est mattis tellus, non semper.</p>
        </div>
      </div>
      <br>&nbsp;',
    'name' => 'inline_columns_6',
    'content_types' => array(),
  );
  $templates['inline_columns_12'] = array(
    'title' => 'Twelve inline columns fluid',
    'description' => 'Inserts a single row of TWELVE (12) self-contained Bootstrap columns. Converts to 6 cols x 2 rows under 931px widths. NOTE: Dashed column and row guides only appear in the TinyMCE WYSIWYG interface for editing guidance',
    'weight' => 8,
    'fid' => 0,
    'body' => '
      <div class="row row-full wysiwyg-cols wysiwyg-cols-12">
        <div class="column col-xs-2 col-sm-1 wysiwyg-cols-first">
          <h4 class="wysiwyg-widen-me"></h4>
          <p>Converts to 6 cols x 2 rows.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 2</h4>
          <p>Under 931px wide.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 3</h4>
          <p>Limited use cases.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 4</h4>
          <p>Use for grids of many icons.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 5</h4>
          <p>Single words</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 6</h4>
          <p>Single words. Single words. Single words. </p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 7</h4>
          <p>Small icons, etc.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 8</h4>
          <p>Single words</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 9</h4>
          <p>Small icons, etc.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 10</h4>
          <p>Small images</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 11</h4>
          <p>Small icons, etc.</p>
        </div>
        <div class="column col-xs-2 col-sm-1">
          <h4>Col 12</h4>
          <p>Small icons, small words, etc.</p>
        </div>
      </div>
      <br>&nbsp;',
    'name' => 'inline_columns_12',
    'content_types' => array(),
  );
  return $templates;
}
