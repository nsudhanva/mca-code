<?php
  $students = ["Sudhanva" => "Bangalore", "Shreedhar" => "Bhatkala", "Kalyan" => "Gulbarga", "Vijay" => "Dubai", "Prateek" => "Delhi"];
  $groceries = ["Egg" => 100, "Milk" => 50, "Bread" => 20, "Bakery" => 200, "Seafood" => 40];

  echo current($students) . "<br>";
  echo next($students) . "<br>";
  echo each($students) . "<br>";
  echo prev($students) . "<br>";
  echo end($students) . "<br>";


  $veggies = ["Carrot", "Beans", "Tomato", "Raddish", "Cucumber", "Onion", "Garlic"];

  foreach($veggies as $veg){
    // echo $veg . "<br>";
    echo implode($veggies) . "<br>";
    array_pop($veggies);
  }

  echo "<b>Sorting arrays by keys: </b><br>";
  ksort($groceries);
  print_r($groceries);
  echo "<br>";
  echo "<b>Sorting arrays by values: </b><br>";
  asort($groceries);
  print_r($groceries);
  echo "<br>";
  echo "<b>Sorting arrays by reverse keys: </b><br>";
  arsort($groceries);
  print_r($groceries);
  echo "<br>";
 ?>
