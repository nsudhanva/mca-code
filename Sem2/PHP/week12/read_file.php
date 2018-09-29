<?php
  echo readfile("hello.txt");

  $myfile = fopen("hello.txt", "r") or die("Unable to open file!");
  echo "<br>";
  echo fread($myfile,filesize("hello.txt"));
  fclose($myfile);

  $myfile = fopen("hello.txt", "r") or die("Unable to open file!");
  echo fgets($myfile);
  fclose($myfile);

  $myfile = fopen("hello.txt", "r") or die("Unable to open file!");

  while(!feof($myfile)) {
    echo fgets($myfile) . "<br>";
  }

  fclose($myfile);
?>
