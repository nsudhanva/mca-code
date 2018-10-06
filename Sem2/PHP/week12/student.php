<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  $name = $_POST["name"];
  $email = $_POST["email"];
  $age = $_POST["age"];
  $ip = $_POST["ip"];
}

$name = filter_var($name, FILTER_SANITIZE_STRING);
$email = filter_var($email, FILTER_SANITIZE_EMAIL);
echo "Name: $name <br>";
echo "Email: $email <br>";


if (!filter_var($email, FILTER_VALIDATE_EMAIL) === false) {
    echo("$email is a valid IP address <br>");
} else {
    echo("$email is not a valid IP address <br>");
}

if (!filter_var($age, FILTER_VALIDATE_INT) === false) {
    echo("Age is valid <br>");
} else {
    echo("Age is not valid <br>");
}

if (!filter_var($ip, FILTER_VALIDATE_IP) === false) {
    echo("$ip is a valid IP address <br>");
} else {
    echo("$ip is not a valid IP address <br>");
}

?>
