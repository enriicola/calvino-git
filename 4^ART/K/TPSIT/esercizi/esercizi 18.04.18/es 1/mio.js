var c=1;
	
function precedente(){
	if(c<=1){
		alert("non ci sono immagini precedenti");
		return;
	}
	c--;
	document.img.src=(c+".jpg");
}

//<button onclick="document.getElementById('myImage').src='pic_bulboff.gif'">Turn off the light</button>

function prossima(){
	if(c>=5){
		alert("non ci sono immagini successive");
		return;
	}
	c++;
	document.img.src=(c+".jpg");
}