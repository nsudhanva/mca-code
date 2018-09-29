<?php
    $servername = "localhost";
    $username = "root";
    $password = "student";
    $dbname = "MCA";

    $conn = new mysqli($servername, $username, $password, $dbname);

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    } 

    $sql = "INSERT INTO STUDENT (sem, firstname, lastname, dOB, pu_marks, deg_marks, yoj, email, mob)
    VALUES ('2', 'Pavan', 'N', '1995/08/25' , 50, 60, '2017/01/01', 'john@example.com', '9632350260' )";

    $stmt = $conn->prepare("INSERT INTO STUDENT (sem, firstname, lastname, dOB, pu_marks, deg_marks, yoj, email, mob) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    $stmt->bind_param("ssssiisss", $sem, $firstname, $lastname, $dOB, $pu_marks, $deg_marks, $yoj, $email, $mob);

    $sem = '1';
    $firstname = "John";
    $lastname = "Doe";
    $dOB = "1995/08/25";
    $pu_marks = 70;
    $deg_marks = 50;
    $yoj = "1995/08/20";
    $email = "john@example.com";
    $mob = '2343534534';
    $stmt->execute();

    $sem = '1';
    $firstname = "Sudhanva";
    $lastname = "Doe";
    $dOB = "1995/08/25";
    $pu_marks = 60;
    $deg_marks = 20;
    $yoj = "1995/08/20";
    $email = "john@example.com";
    $mob = '324243234';
    $stmt->execute();

    $sem = '1';
    $firstname = "John";
    $lastname = "Shreedhar";
    $dOB = "1995/08/25";
    $pu_marks = 70;
    $deg_marks = 50;
    $yoj = "1995/08/20";
    $email = "john@example.com";
    $mob = '678567567';
    $stmt->execute();

    echo "New records created successfully";

    $stmt->close();
    $conn->close();

    // if ($conn->query($sql) === TRUE) {
    //     $last_id = $conn->insert_id;
    //     echo "New record created successfully. Last inserted ID is: " . $last_id;
    // } else {
    //     echo "Error: " . $sql . "<br>" . $conn->error;
    // }

    // $conn->close();
?>