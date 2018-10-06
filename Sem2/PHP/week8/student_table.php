<?php
    $servername = "localhost";
    $username = "root";
    $password = "student";
    $dbname = "MCA";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    } 

    $sql = "SELECT firstname, lastname FROM STUDENT";
    $result = $conn->query($sql);
    
    // echo str($result);

    if ($result->num_rows > 0) {
        echo "<table border='1'>";
        // echo "<tr>";
        while($row = $result->fetch_assoc()) {
            echo "<tr><td>" . $row["sid"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "</td><tr>";
        }
        // echo "</tr>";        
        echo "</table>";
    } else {
        echo "no results";
    }
    $conn->close();
?>
