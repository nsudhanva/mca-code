<?php 
$x = 75; 
$y = 25;
 
function addition() { 
    $x = 20;
    $GLOBALS['z'] = $GLOBALS['x'] + $GLOBALS['y']; 
    echo "This is the local variable: " . $x . "<br>";
}
 
addition(); 
echo $z; 
?>