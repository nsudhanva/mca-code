<?php
    $servername = "localhost";
    $username = "root";
    $password = "student";
    $dbname = "MCA";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    } 

    $sql = "SELECT * FROM STUDENT WHERE pu_marks = 50";
    $result = $conn->query($sql);
    
    // echo str($result);

    if ($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            echo "id: " . $row["sid"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "<br>";
        }
    } else {
        echo "no results";
    }
    $conn->close();
?>
