<?php
session_start();
?>
<!DOCTYPE HTML>  
<html>
<body>
<?php
error_reporting( E_ALL );
$email = $_POST['email'];
$password = $_POST['psw'];

$c=mysqli_connect("localhost","root","5ciiGr0","Gr3_Login");
//$c=mysqli_connect("localhost","root","","accesso");

if(!$c)
	echo "Connessione persa...";
else
{
	$cpsw=md5($password);
	$t=mysqli_query($c,"select * from golfisti where email='$email' and password='$cpsw'");
	if(mysqli_num_rows($t) > 0){
		$_SESSION['email'] = $email;
		$_SESSION['password'] = $cpsw;
		header("location: golfclub.php");
	}
	else{
		echo $cpsw;
		echo "Credenziali errate! Riprova...";
		header("Refresh:5; accesso.html");
	}
mysqli_close($c);
}
?>
</body>
</html>