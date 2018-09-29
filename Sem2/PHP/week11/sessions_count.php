<?php
  session_start();

  if (!isset($_SESSION['views'])) {
      $_SESSION['views'] = 0;
  }

  $_SESSION['views'] = $_SESSION['views'] + 1;

  if ($_SESSION['views'] == 1) {
      header("location:sessions_count.php");
  }

  echo "Page Count: ";
  print_r($_SESSION['views']);
?>
