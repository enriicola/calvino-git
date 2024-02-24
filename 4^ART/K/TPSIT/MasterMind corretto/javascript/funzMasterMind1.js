var n=0;
var segreto = new Array();
var contr = false;
var nTentativi = 15;
var nCaselle = 4;


function verifica (segreto, tent){
	document.getElementById("pos").appendChild(document.createElement("br"));
	var pe=0, pc=0;
	var cseg = new Array();
	var ctent = new Array();
	for (var i=0; i<nCaselle; i++){  //copia i vettori
		cseg[i] = segreto[i];
		ctent[i] = tent[i];
	}
    for (i=0; i<nCaselle; i++){  //valori corretti e in posizione corretta
   		if (cseg[i] == ctent[i]){
			pc++;
			if (pc == 1)
				document.getElementById("pos").innerHTML += "POS GIUSTA: ";
			var v = document.createElement("img");
			v.src = "../immagini/vVerde.png";
			v.height = "18";
			v.width = "35";
			document.getElementById("pos").appendChild(v);
		 	cseg[i] = "-1";
			ctent[i] = "-1";
			if (pc == nCaselle){
				document.getElementById("pagina").innerHTML = " ";
				document.getElementById("pagina").appendChild(document.createElement("br"));
				var im = document.createElement("img");
				document.getElementById("pagina").appendChild(im);
				im.src = "../immagini/coppa.png";
				im.height = "400";
				im.width = "292";
				document.getElementById("pagina").appendChild(document.createElement("br"));
				var im2 = document.createElement("img");
				document.getElementById("pagina").appendChild(im2);
				im2.src = "../immagini/congratulazioni.png";
			}
		}
	}
	document.getElementById("pos").appendChild(document.createElement("br"));
	for (i=0; i<nCaselle; i++){  //valori corretti, ma in posizione errata
		if (ctent != "-1"){
			for (var j=0; j<nCaselle; j++){
				if (ctent[i]==cseg[j] && cseg[j]!="-1"){
					pe++;
					if (pe == 1)
						document.getElementById("pos").innerHTML += "POS SBAGLIATA: ";
					var x = document.createElement("img");
					x.src = "../immagini/croceRossa.png";
					x.height = "18";
					x.width = "18";
					document.getElementById("pos").appendChild(x);
					cseg[j] = "-1";
					ctent[i] = "-1";
				}
			}
		}
	}
	document.getElementById("pos").appendChild(document.createElement("br"));
	document.getElementById("pos").appendChild(document.createElement("br"));
	document.getElementById("pos").appendChild(document.createElement("br"));
}
 

function generaSegreto (segreto){
	var box = new Array();
	var n = new Array();
	var i;
	box[0] = "../immagini/cerchio_arancione.png";
	box[1] = "../immagini/cerchio_azzurro.png";
	box[2] = "../immagini/cerchio_blu.png";
	box[3] = "../immagini/cerchio_giallo.png";
	box[4] = "../immagini/cerchio_rosso.png";
	box[5] = "../immagini/cerchio_verde.png";
	box[6] = "../immagini/cerchio_viola.png";
	for (i=0; i<nCaselle; i++)
		n[i] = -1;
	noDuplicati (n);
	for (i=0; i<nCaselle; i++){
		segreto[i] = box[n[i]];
		window.alert (segreto[i]);
	}
}


function noDuplicati (n) {
	var a, duplicato;
	for (var i=0; i<nCaselle; i++){
		a = Math.floor(Math.random()*7);
		duplicato= false;
		for (var j=0; j<nCaselle; j++){
			if (a == n[j])
				duplicato = true;
		}
		if (!duplicato)
			n[i] = a;
		else
			i--;
	}
}


function controlloTentativo (){
	var a = "../immagini/cerchio_vuoto.png";
	if (document.getElementById("c1").getAttribute("src")==a ||
	document.getElementById("c2").getAttribute("src")==a ||
	document.getElementById("c3").getAttribute("src")==a ||
	document.getElementById("c4").getAttribute("src")==a){
		window.alert ('TENTATIVO ERRATO!!! ALMENO UNA CASELLA VUOTA PRESENTE NEL TENTATIVO!!!');
		document.getElementById("c1").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c2").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c3").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c4").src = "../immagini/cerchio_vuoto.png";
		contr = true;
	}
}


function tentativo (){
	controlloTentativo ();
	if (contr == true){
		contr = false;
		return 0;
	}
	n++;
	if (n == 1)
		generaSegreto (segreto);
	if (n < nTentativi){
		var tent = new Array();
		var im1 = document.createElement("img");
		im1.src = document.getElementById("c1").getAttribute("src");
		im1.width = "100";
		im1.height = "100";
		document.getElementById("tent").appendChild(im1);
		tent[0] = im1.getAttribute("src");
		document.getElementById("c1").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c1").width = "100";
		document.getElementById("c1").height = "100";
		
		var im2 = document.createElement("img");
		im2.src = document.getElementById("c2").getAttribute("src");
		im2.width = "100";
		im2.height = "100";
		document.getElementById("tent").appendChild(im2);
		tent[1] = im2.getAttribute("src");
		document.getElementById("c2").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c2").width = "100";
		document.getElementById("c2").height = "100";
		
		var im3 = document.createElement("img");
		im3.src = document.getElementById("c3").getAttribute("src");
		im3.width = "100";
		im3.height = "100";
		document.getElementById("tent").appendChild(im3);
		tent[2] = im3.getAttribute("src");
		document.getElementById("c3").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c3").width = "100";
		document.getElementById("c3").height = "100";
		
		var im4 = document.createElement("img");
		im4.src = document.getElementById("c4").getAttribute("src");
		im4.width = "100";
		im4.height = "100";
		document.getElementById("tent").appendChild(im4);
		tent[3] = im4.getAttribute("src");
		document.getElementById("c4").src = "../immagini/cerchio_vuoto.png";
		document.getElementById("c4").width = "100";
		document.getElementById("c4").height = "100";
		
		document.getElementById("tent").appendChild(document.createElement("br"));
		inizializzaVar();
		verifica (segreto, tent);
	} else {
		document.getElementById("pagina").innerHTML = "HAI TERMINATO IL NUMERO DI TENTATIVI DISPONIBILI!!! RICARICA LA PAGINA DEL BROWSER PER RIGIOCARE...";
		document.getElementById("pagina").appendChild(document.createElement("br"));
		document.getElementById("pagina").appendChild(document.createElement("br"));
		var nim = new Array ();
		var i;
		for (i=0; i<nCaselle; i++){
			nim[i] = document.createElement("img");
			nim[i].src = segreto[i];
			nim[i].width = "100";
			nim[i].height = "100";
		}
		document.getElementById("pagina").innerHTML += "LA SEQUENZA SEGRETA ERA: ";
		document.getElementById("pagina").appendChild(document.createElement("br"));
		for (i=0; i<nCaselle; i++)
			document.getElementById("pagina").appendChild(nim[i]);
		document.getElementById("pagina").appendChild(document.createElement("br"));
		var im6 = document.createElement("img");
		document.getElementById("pagina").appendChild(im6);
		im6.src = "../immagini/game_over.png";
		im6.width = "1032";
		im6.height = "423";
	}
}