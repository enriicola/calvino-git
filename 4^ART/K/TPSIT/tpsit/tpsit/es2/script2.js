function controllo(){
	var pos, contatore;
	var stringa, lettera;
	
	contatore = 0;
	stringa = document.getElementById("parola").value;
	lettera = document.getElementById("lettera").value;
	
	for(pos=0; pos<stringa.length; pos++)
		if(stringa[pos] == lettera)
			contatore++;
	
	document.getElementById("answer").innerHTML = contatore;
}