<?php
  $num = 10;
  $a = 20;
  $b = 30;

  $numf = 10.0;
  $string_num = "10";
  $string = "Sudhanva";
  $var = (array)$num;

  $foo = "1";
  echo "Foo: " . $foo . "<br>";
  $foo *= 2;
  echo "Foo: " . $foo . "<br>";
  $foo = $foo * 1.3;
  echo "Foo: " . $foo . "<br>";
  $foo = 5 * "10 Little Piggies";
  echo "Foo: " . $foo . "<br>";
  $foo = 5 * "10 Small Pigs";
  echo "Foo: " . $foo . "<br>";


  echo "Implicit: \n" . (float)$num . "<br>";
  echo "Implicit String: \n" . (float)$num . "<br>";
  echo "Explicit: \n" . (int)$numf . "<br>";
  echo "Explicit Array: \n" . $var . "<br>";



 ?>
