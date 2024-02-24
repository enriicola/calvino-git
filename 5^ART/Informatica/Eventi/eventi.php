<?php
$c=mysqli_connect("127.0.0.1","root","","esame");
if(!$c)
die();
$t=mysqli_query($c,"SELECT * FROM utente");

echo("<h1>"."utente"."</h1>");
while($n=mysqli_fetch_ass))
echo("<table border>"."<tr>"."<th>"."Nickname"."</th>"."<th>"."Nome"."</th>"."<th>"."Cognome"."</th>"."</tr>"."<tr>"."<td>".$n["NIckname"]."</td>"."<td>".$n["Nome"]."</td>"."<td>".$n["Cognome"]."</td>"."</tr>"."</table>"."<br>");
?>