var database=["QUADERNO","TELEFONO","TELEVISIONE","BARCA","MONTAGNA","ELEFANTE","FARFALLA","PALESTRA","POLLO", "PRECIPITEVOLISSIMEVOLMENTE", "BANDIERA"];
var rand = Math.floor((Math.random() * database.length) );
var parola=database[rand];
var trattini=database[rand].split("");	//divido l'array in singoli caratteri
var i=0;
var errori=0;
var trovata=false;

function start(){
	document.getElementById("sezione1").style.display="none";
	document.getElementById("sezione2").style.display="block";
	console.log(parola);	//scrive sul browser
	
	for(i = 1; i < trattini.length-1; i++)
		trattini[i]="-";
	
	document.getElementById("demo").innerHTML = trattini.join("");
	return;
}

function impiccato(l){
	if(l.style.backgroundColor=="red")
		return;//se la lettera è rossa, è già stata cliccata: non faccio niente e return
	
	for(i=1; i < parola.length-1; i++){
		if(parola[i] == l.value){
			
			l.style.backgroundColor="green";
			trovata = true;  //abbiamo trovato la lettera
			trattini[i] = l.value;
			document.getElementById("demo").innerHTML = trattini.join("");
		}
		if(trattini.join("") == parola){
			document.getElementById("oscuramento").style.display="block";
			document.getElementById("window").style.display="block";
			document.getElementById("window").innerHTML="HAI VINTO! La parola era: " + parola;
			setTimeout(function(){window.location="Impiccato.html";},2000);
			/*document.getElementById("sezione1").style.display="none";
			document.getElementById("sezione2").style.display="block";
			document.getElementById("sezione3").style.display="block";*/
			return;
		}
    }
	if(!trovata){
		errori++;  //ho sbagliato, aumentano gli errori
		l.style.backgroundColor="red";
		document.getElementById("img").setAttribute("src", "errore" + errori + ".png");
	
		if(errori>=6){
			document.getElementById("oscuramento").style.display="block";
			document.getElementById("window").style.display="block";
			document.getElementById("window").innerHTML="HAI PERSO! La parola era: " + parola;
			setTimeout(function(){window.location="Impiccato.html";},2000);
		}
	}
	trovata = false;
	return;
}