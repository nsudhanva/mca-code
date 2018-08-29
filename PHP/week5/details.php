<?php

echo "File name: " . $_SERVER['PHP_SELF'] . "<br>";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    echo "This is the post request";
    
    $name = $_POST['name'];
    $age = $_POST['age'];
    if (empty($name) || empty($age)) {
        echo "Form incomplete";
    } else {
        echo "Name of the student: " .  $name . "<br>";
        echo "Age of the student: " . $age . "<br>";
    }
}

if ($_SERVER["REQUEST_METHOD"] == "GET") {
    echo "This is the get request";
    
    $name = $_GET['name'];
    $age = $_GET['age'];
    if (empty($name) || empty($age)) {
        echo "Form incomplete";
    } else {
        echo "Name of the student: " .  $name . "<br>";
        echo "Age of the student: " . $age . "<br>";
    }
}
?>
