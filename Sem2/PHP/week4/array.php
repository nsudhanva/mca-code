<?php
  $books = ["Something", 20, "Hello", 10];
  $grocery = ["Egg", "Milk", "Bread", "Bakery", "Seafood", "Pasta", "Rice", "Oils", "Sauces", "Salad", "Soups"];
  $marks = ["English" => 50, "Maths" => 100, "Science" => 80];
  foreach ($books as $value) {
    echo $value . "<br>";
  }

  echo "Count: " . count($books) . "<br>";
  echo "IsArray: " . is_array($books) . "<br>";
  echo "InArray(Milk): " . in_array("Milk", $grocery) . "<br>";
  echo "Marks English - dict: " . $marks["English"] . "<br>";

  echo "<b>Printing all marks:</b> <br>";

  foreach($marks as $key => $value){
    echo $key . "=>" . $value . "<br>";
  }

 ?>
