<?php
  $array = [1 , 2, 3, 4, 5];

  for ($x = 0; $x <= 10; $x++) {
      echo "The number is: $x <br>";
  }

  $colors = array("red", "green", "blue", "yellow");

  foreach ($colors as $value) {
      echo "$value <br>";
  }

  $x = 1;

  while($x <= 5) {
      echo "The number is: $x <br>";
      $x++;
  }

  do {
      echo "The number is: $x <br>";
      $x++;
  } while ($x <= 5);

 ?>
