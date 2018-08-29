<!DOCTYPE html>
<html>
<head> <title> word_table.php </title>
</head>
<body>

<?php

print "apples are good for you, or don't you like apples?
          or maybe you like oranges better than apples<br />";

function splitter($str) {
  $freq = array();
  $words = preg_split("/[ .,;:!?]\s*/", $str);

  foreach ($words as $word) {
    $keys = array_keys($freq);

    if(in_array($word, $keys))
      $freq[$word]++;
    else
      $freq[$word] = 1;
  }

  return $freq;
}

$str = "apples are good for you, or don't you like apples?
      or maybe you like oranges better than apples";

$tbl = splitter($str);

print "<br /> <b>Word Frequency </b><br />";
$sorted_keys = array_keys($tbl);
sort($sorted_keys);

foreach ($sorted_keys as $word)
  print "$word $tbl[$word] <br />";
?>
</body>
</html>
