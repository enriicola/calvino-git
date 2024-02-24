var i=1;

function successivo(){
	if(i==5){
		return;
	}
	i++;
	
	document.getElementById("immagine").setAttribute("src",+ i + ".jpg");
	
}

function precedente(){
	if(i==1){
		return;
	}
	i--;
	
	document.getElementById("immagine").setAttribute("src",+ i + ".jpg");
	
	
}