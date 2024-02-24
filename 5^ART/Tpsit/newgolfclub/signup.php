<?php
session_start();
?>
<!DOCTYPE HTML>  
<html>
<body>
<?php
error_reporting( E_ALL );
$nome = $_POST['nomeutente'];
$email = $_POST['email'];
$password = $_POST['psw'];
$password1 = $_POST['psw1'];
$recensioni=0;

//$c=mysqli_connect("localhost","root","5ciiGr0","Gr3_Login");
$c=mysqli_connect("localhost","root","","gr3");

if(!$c)
	echo "Connessione persa...";
else{
	if($password!=$password1){
		echo("Le password devono essere uguali! Fai un altro tentativo...");
		header("Refresh: 2; accesso.html");
	}
	else{
		$cpsw=md5($password);
		$sql="INSERT INTO golfisti (email, password, nome, recensioniScritte) VALUES ('$email', '$cpsw', '$nome', '$recensioni')";
		if ($c->query($sql) === TRUE) {
			$_SESSION['email'] = $email;
			//$_SESSION['password'] = $cpsw;
			echo "Registrazione avvenuta con successo!";
			header("Refresh: 2; golfclub.php");
		}
		else{
			echo "Qualcosa è andato storto...";
			header("Refresh: 2; accesso.html");
		}
	}
	mysqli_close($c);
}
?>
</body>
</html>