<?php
class Hello
{
    const CONSTANT = 'World';

    function showConstant() {
        echo  self::CONSTANT . "<br>";
    }
}

echo Hello::CONSTANT . "<br>";

$classname = "Hello";
echo $classname::CONSTANT . "<br>";

$class = new Hello();
$class->showConstant();

echo $class::CONSTANT . "<br>";
?>
