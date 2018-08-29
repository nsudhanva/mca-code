<?php
   $line = "PES Univesity is located in banashankari";

   if (preg_match("/\bPES\b/i", $line, $match))
      print "Match found! <br>";

   $ip = "Who.is.Vijay.Kumar";
   $iparr = preg_split("/\./", $ip);
   print_r($iparr);
?>
