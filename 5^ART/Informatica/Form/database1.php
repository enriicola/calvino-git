<?php
//		localhost, utente, password, nomedb
$c=mysqli_connect("127.0.0.1", "root", "", "esame");
if(!$c)
	die();
$t=mysqli_query($c,"select * from utenti");

while($r=mysquli_fetch_assoc($t))
		echo("id".$r["id"]."nome ".$r["nome"]."<br>");
?>