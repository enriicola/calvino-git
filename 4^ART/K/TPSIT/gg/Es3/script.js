var stringa=["QUADERNO","COMPUTER","TELEFONO","TELEVISIONE","BARCA","MONTAGNA","ELEFANTE","FARFALLA","PALESTRA","INVOLUCRO","RADAR","ANNA","OTTETTO","TNT","OTTO","INGEGNI","OSSO"];
var x = Math.floor((Math.random() * stringa.length) );
var stringa2=stringa[x];


function check(){
	var i=0,count=stringa2.length;
	
	
	var lung2;
	
	lung2 = stringa2.length-1;

	for(i=0;i<stringa2.length;i++){
		if(stringa2[i]!=stringa2[lung2])
			count--;
		lung2--;
	}
	
	

	
	
	document.getElementById("parola").innerHTML = stringa2;
	

	if(count==stringa2.length)
	document.getElementById("ris").innerHTML = "PALINDROMA";
	else
	document.getElementById("ris").innerHTML = "NON PALINDROMA";
	
}