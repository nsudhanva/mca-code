<?php
  session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
  $_SESSION["user"] = "Sudhanva";
  $_SESSION["user_id"] = "123";
  echo "Session variables are set" . "<br>";
  print_r($_SESSION) . "<br>";
  session_unset();

  session_destroy();
  echo "Session destoryed" . "<br>";
?>

</body>
</html>
