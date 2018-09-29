<?php
  $num = NULL;
  $num = "Something";

  if(is_null($num))
  {
    echo "Null" . "<br>";
  }
  else if(is_string($num)){
    unset($num);
    echo $num . "<br>";
  }

?>
