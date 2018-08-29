<?php
$myfile = fopen("newfile.txt", "w") or die("Unable to open file!");
$txt = "Sudhanva \n";
fwrite($myfile, $txt);
$txt = "Vijay\n";
fwrite($myfile, $txt);
fclose($myfile);
?>
