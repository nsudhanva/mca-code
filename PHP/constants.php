<?php
  define("PI", 3.14);

  $radius = 20;

  echo calc($radius) . "<br>";

  function calc($r){
    return $r * $r * PI;
  }

 ?>
