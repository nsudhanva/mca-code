<?php

    $radius = 30;
    $height = 10;
    $base = 20; 
    define("pi", 3.14);
    // echo pi;

    echo calc(20) . "<br>";
    echo calc2(20) . "<br>";
    echo area($height, $base) . "<br>";

    function calc($radius){
        return ($radius * $radius * pi);
    }

    function calc2($radius){
        global $radius;
        return ($radius * $radius * pi);
    }

    function area($height, $base){
        return (0.5 * $height * $base);
    }
?>