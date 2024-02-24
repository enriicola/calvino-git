<!DOCTYPE html>
<html>
<head>
  <title>GolfClub</title>
  <link rel="shortcut icon" type="image/x-icon" href="img/icon.png" />
  <link href="style.css" rel="stylesheet" type="text/css" media="all"/>
  <meta charset="utf-8">
  <script type="text/javascript" src="script.js"></script>
  <meta name="viewport" content="width=device-width, initial-scale=1">
</head>
<body class="golfclub">
<div id="boxsfondo">
<div style="margin:15px">
<p align="center" size="10">Golf Club</p>
<?php 
session_start();
if (isset($_SESSION['email'], $_SESSION['password'])){
	echo "<p align='center'> <font face='magneto' size='5'>Bentornato " . $_SESSION['email'] . "!<br><br></font></p><br>";
	$email=$_SESSION['email'];
	//$_SESSION['nome'];
	//$recensioni=$_SESSION['recensioniScritte'];
	
//$c=mysqli_connect("localhost","root","5ciiGr0","Gr3_Login");
$c=mysqli_connect("localhost","root","","gr3");
if(!$c)
	echo "Connessione persa...";
}
else{
	echo "Credenziali errate! Riprova...";
	header("Refresh:2; accesso.html");
}
?>
<section id="home">
	<?php /*	non riesco a stampare il testo dal database...
	$golf=mysqli_query($c,"select testo from commenti where utente='$home' and stelle='6'");
	echo $golf;*/
	?>
	<table>
	<tr>
		<th><label><h4>Golf 1</h4></label></th>
		<th><label><h4>Golf 2</h4></label></th>
		<th><label><h4>Golf 3</h4></label></th>
	</tr>
	<tr>
	    <th><img src="img/mark1.jpg" height="300"></th>
		<th><img src="img/mark2.jpg" height="300"></th>		 
		<th><img src="img/mark3.jpg" height="300"></th>
	</tr>
	<tr>
		<th><label><h4>Golf 4</h4></label></th>
		<th><label><h4>Golf 5</h4></label></th>
		<th><label><h4>Golf 6</h4></label></th>
	</tr>
	<tr>
		<th><img src="img/mark4.jpg" height="300"></th>		 
		<th><img src="img/mark5.jpg" height="300"></th>
		<th><img src="img/mark6.jpg" height="300"></th>
	</tr>
	</table>
	<table style="margin-left:30px">
	<tr>
		<th>
		<label><h4>Golf 7</h4></label>
		<img src="img/mark7.jpg" height="400">
		</th>
		<th>
		<p style="margin:15px" align="left" font="georgia"><b>
		La Volkswagen Golf è un'autovettura che appartiene al segmento C 
		(compatte - kompaktklasse) presentata dalla casa tedesca Volkswagen nella
		primavera del 1974, e da allora divenuta in breve tempo suo simbolo. 
		Nel mercato nordamericano la I e la V serie sono state commercializzate 
		con il nome di Volkswagen Rabbit, le restanti (II-III-IV-VI e VII) con la
		denominazione Golf. La versione sportiva, la Golf GTI, in tale mercato, 
		si chiama tuttora semplicemente GTI. Nel corso degli anni si sono 
		succedute sette generazioni.</b></p>
		</th>
	</tr>
	</table>
</section>
<section id="galleria">
<table>
	<tr>
	    <th><input type="button" value="⮜" id="np" onclick="previous()">
		<th>
	    <a onclick="foto()" href="#">
			<img height="400" id="scorrimento" src="img/g1.jpg">
	    </a>
		</th>		 
		<th><input type="button" value="⮞" id="np" onclick="next()"></th>
	</tr>
</table>
</section>
<section id="generazioni">
	<h1>work in progress...</h1>
	<img src="img/work.gif" alt="work in progress...">
</section>
<section id="eventi">
	<h1>work in progress...</h1>
	<img src="img/work.gif" alt="work in progress...">
</section>
<section id="tuning">
<img src="img/utente1.jpg" width="500" onclick="tuning()">
<img src="img/utente2.jpg" width="500" onclick="tuning()">
<img src="img/utente3.jpg" width="500" onclick="tuning()">
<img src="img/utente4.jpg" width="500" onclick="tuning()">
<img src="img/utente5.jpg" width="500" onclick="tuning()">
<img src="img/utente6.jpg" width="500" onclick="tuning()">
</section>
<section id="forum">
	
		<p><a href="serie1.php">
		<h1><font face='magneto'>Prima Serie (mark1)</font></h1>
		</a></p>
		
		<p><a href="serie2.php">
		<h1><font face='magneto'>Seconda Serie (mark2)</font></h1>
		</a></p>
		
		<p><a href="tiramisu.php">
		<h1><font face='magneto'>Ricetta del Tiramisù</font></h1>
		</a></p>
	
</section>
<section id="fortuna">
	<h1>work in progress...</h1>
	<img src="img/work.gif" alt="work in progress...">
</section>
<section id="faq">
	<h1>work in progress...</h1>
	<img src="img/work.gif" alt="work in progress...">
</section>
<section id="areautente">
<?php //<b>Totale Commenti:</b> '".$recensioni."'<br><b>Nickname:</b> ".$_SESSION['nome']."
echo "
	<div>
	<h1>Ecco le tue informazioni, golfista!</h1>
	<p style='margin:15px'> 
		<b>Nickname:</b> lo sai già! :P<br>
		<b>Email:</b> ".$_SESSION['email']."<br>
		<br><b>Leggi qualche articolo sul forum e lascia un commento!</b>
		
	</p>
	</div>";
?>
<br><br><br><br><br><br><br><br><br><br>
<div style="text-align:center;">
	<a class="active" href="accesso.html">
		<button id="logout">Logout</button>
	</a>
</div>
</section>

</div>
</div>


<div id="navbar">
  <!--<a href="#" onclick="generazioni()">Generazioni(1974-2019)</a>
  <a href="#" onclick="eventi()">Eventi</a>
  <a href="#" onclick="tuning()">Tuning</a>
  <a href="#" onclick="fortuna()">Mi Sento Fortunato</a>
  <a href="#" onclick="faq()">FAQ</a>-->
  <a href="#" onclick="home()">Home</a>
  <a href="#" onclick="galleria()">Galleria</a>
  <a href="#" onclick="forum()">Forum</a>
  <a href="#" onclick="areautente()">Area Utente</a>
</div>
<script> //script che tiene fermo il menù
	window.onscroll = function() {myFunction()};

	var navbar = document.getElementById("navbar");
	var sticky = navbar.offsetTop;

	function myFunction() {
  		if (window.pageYOffset >= sticky) {
    		navbar.classList.add("sticky")
  		}
    	else
    	navbar.classList.remove("sticky");
	}
</script>
</body>
<?php
mysqli_close($c);
?>
</html>