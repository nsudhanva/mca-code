<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    <form action="next.php" method="get">
        <button type="submit" formaction="next.php" name="current" value="current">Current</button>
        <button type="submit" formaction="next.php" name="next" value="next">Next</button>
        <button type="submit" formaction="next.php" name="each" value="each">Each</button>
        <button type="submit" formaction="next.php" name="prev" value="prev">Prev</button>
        <button type="submit" formaction="next.php" name="end" value="end">End</button>
    </form>

    <?php
        $students = ["Sudhanva" => "Bangalore", "Shreedhar" => "Bhatkala", "Kalyan" => "Gulbarga", "Vijay" => "Dubai", "Prateek" => "Delhi"];
        echo print_r($students) . "<br>";

        if ($_SERVER["REQUEST_METHOD"] == "GET") {   
            $name = $_GET['current'];
            if (empty($name)) {
                // echo "current is empty" . "<br>";
            } else {
                echo current($students) . "<br>";
            }

            $name = $_GET['next'];
            if (empty($name)) {
                // echo "next is empty" . "<br>";
            } else {
                echo next($students) . "<br>";
            }

            $name = $_GET['each'];
            if (empty($name)) {
                // echo "each is empty" . "<br>";
            } else {
                echo each($students) . "<br>";
            }

            $name = $_GET['prev'];
            if (empty($name)) {
                // echo "prev is empty" . "<br>";
            } else {
                echo prev($students) . "<br>";
            }

            $name = $_GET['end'];
            if (empty($name)) {
                // echo "end is empty" . "<br>";
            } else {
                echo end($students) . "<br>";
            }
        }

    ?>

</body>
</html>
