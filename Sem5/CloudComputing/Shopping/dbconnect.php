<?php 
	
	$host='aaoloz9umeuhxb.cj7bbs7met8z.ap-south-1.rds.amazonaws.com';
	$username='phpadmin';
	$pass='phpadmin';
	$db='amaclone';

	$conn=mysqli_connect($host,$username,$pass,$db);

	if(!$conn) die("Connection refused").mysql_connect_error();
 ?>