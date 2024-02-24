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
<body class="golfclub"  onload="forum()">
<div id="boxsfondo">
<div style="margin:15px">
<p align="center"> <font face="magneto" size="10"> Golf Club </font> </p>
<?php 
session_start();
if (isset($_SESSION['email'], $_SESSION['password'])) {
	echo "<p align='center'> <font face='magneto' size='5'>Bentornato " . $_SESSION['email'] . "!<br><br></font></p><br>";
	$email=$_SESSION['email'];
	
$c=mysqli_connect("localhost","root","5ciiGr0","Gr3_Login");
//$c=mysqli_connect("localhost","root","","accesso");
if(!$c)
	echo "Connessione persa...";

	function commenta($c){
		if(isset($_POST['Csubmit'])){
			$utente=$_POST['utente'];
			$data=$_POST['data'];
			$testo=$_POST['testo'];
			$stelle=0;
			
		if(isset($_POST['stella'])){
			$stelle=$_POST['stella'];
		}
		$sql= "INSERT INTO commenti (testo,stelle,data,utente,articolo) 
			VALUES ('$testo','$stelle','$data','$utente','serie2')";
		$r= $c->query($sql);
		}
	}
}
else{
	echo "Credenziali errate! Riprova...";
	header("Refresh:2; accesso.html");
}
?>
<section id="forum" style="display:block;">
	<p>
	<h1><font face='magneto'>Seconda Serie (mark2)</font></h1>
	La Volkswagen Golf II, ovvero la Golf seconda serie, disegnata da 
	Herbert Schafer, venne immessa sul mercato a partire dall'agosto del 1983.
	La prima versione della Golf II nasceva, come la precedente, con motore 
	anteriore trasversale a 4 cilindri in linea, trazione anteriore, cambio 
	anteriore trasversale a 4 marce, poi disponibile anche nella versione 
	Formel E, destinata al solo mercato tedesco. Le versioni Formel E erano 
	equipaggiate di cambi a 4 o 5 marce (denominati "3+E" o "4+E") aventi il 
	rapporto più alto particolarmente demoltiplicato per risparmiare 
	carburante, indicatore di consumo (funzionante con la quarta) e di cambio
	marcia (spia luminosa che indica quando cambiare marcia): tali versioni 
	richiedevano però benzina con almeno 98 ottani.La grande novità, 
	almeno per la famosa compatta di casa Volkswagen, è che con la seconda 
	serie fu reso disponibile il modello denominato Syncro, ossia la versione 
	a quattro ruote motrici (visto che proprio in quegli anni si diffuse con 
	prepotenza questo tipo di trazione). La vettura era disponibile con 3 o 5
	porte. La prima versione della Golf II era riconoscibile dai paraurti 
	"sottili", dai deflettori fissi delle portiere anteriori, dagli 
	specchietti anteriori uguali a quelli del Golf I e dalla scritta 
	Volkswagen sulla parte sinistra della coda (dettaglio presente anche 
	negli altri modelli VW contemporanei). Altra novità era che a richiesta 
	veniva fornito il climatizzatore. Nel 1984 fece il suo ritorno, con la 
	seconda serie, la Golf GTI (con motore 1800 8 valvole) disponibile anche 
	nella versione catalizzata (con meno cavalli). Nel 1985 la GTI subì un 
	lieve restyling: venne dotata della mascherina con doppio faro e con il 
	terminale di scarico a doppia canna. Nel 1986 venne introdotto il motore 
	16 valvole twin cam, con sistema d'iniezione Bosch K-Jetronic con 
	iniettore meccanico (disponibile anche nella versione catalizzata). 
	<br><br><a href="#" onclick="commenta()" style="color:blue;">Commenta</a>
	</p>
	<?php echo "
		<div align='center' id='commenta'>
		<h1>Facci sapere la tua!</h1>
		<form method='POST' action='".commenta($c)."'>
			<input <input style='display:none;' name='utente' value='". $_SESSION['email'] ."'>
			<input style='display:none;' name='data' value='".date('Y-m-d H:i:s')."'><br><br>
			<textarea rows='4' cols='100' name='testo'></textarea><br>
		<div class='stars'>
			<input value='1' class='star star-5' id='star-5' type='radio' name='stella'/>
			<input value='2' class='star star-4' id='star-4' type='radio' name='stella'/>
			<input value='3' class='star star-3' id='star-3' type='radio' name='stella'/>
			<input value='4' class='star star-2' id='star-2' type='radio' name='stella'/>
			<input value='5' class='star star-1' id='star-1' type='radio' name='stella'/>
		</div><br>
			<button type='submit' name='Csubmit' onclick='commenta()' required>Invia</button>
		</form>
		</div>";
	?>
</section>

</div>
</div>
<div id="navbar">
  <!--<a href="#" onclick="generazioni()">Generazioni(1974-2019)</a>
  <a href="#" onclick="eventi()">Eventi</a>
  <a href="#" onclick="tuning()">Tuning</a>
  <a href="#" onclick="fortuna()">Mi Sento Fortunato</a>
  <a href="#" onclick="faq()">FAQ</a>-->
  <a href="golfclub.php">Home</a>
  <a href="golfclub.php">Galleria</a>
  <a href="golfclub.php">Forum</a>
  <a href="golfclub.php">Area Utente</a>
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