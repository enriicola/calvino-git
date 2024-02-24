var database=["QUADERNO","COMPUTER","OSSESSO","INNI","EREGGERE","AVEVA","TELEFONO","TELEVISIONE","BARCA","MONTAGNA","ELEFANTE","FARFALLA","PALESTRA","INVOLUCRO","RADAR","ANNA","OTTETTO","TNT","OTTO","INGEGNI","OSSO"];
var x = Math.floor((Math.random() * database.length) );
var pcasuale=database[x];
var pos;
var conteggio;
var lung2;


function controllo(){
	conteggio = pcasuale.length;
    lung2 = pcasuale.length-1;

	for(pos=0; pos<pcasuale.length; pos++){
		if(pcasuale[pos] != pcasuale[lung2])
			conteggio--;
		lung2--;
	}
	
	
	document.getElementById("parola").innerHTML = pcasuale;
	

	if(conteggio == pcasuale.length)
		document.getElementById("answer").innerHTML = "----- PALINDROMA -----";
	else
		document.getElementById("answer").innerHTML = "----- NON PALINDROMA -----";
	
}