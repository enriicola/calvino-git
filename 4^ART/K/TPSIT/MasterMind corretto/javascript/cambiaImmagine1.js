var a=0, b=0, c=0, d=0;

function cambiaImmagine1() {
	var image = document.getElementById ('c1');
	if (image.src.match('cerchio_vuoto')){
		image.src = "../immagini/cerchio_rosso.png";
		a = 1;
		if (b==1 || c==1 || d==1)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_rosso')){
		image.src = "../immagini/cerchio_arancione.png";
		a = 2;
		if (b==2 || c==2 || d==2)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_arancione')){
		image.src = "../immagini/cerchio_giallo.png";
		a = 3;
		if (b==3 || c==3 || d==3)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_giallo')){
		image.src = "../immagini/cerchio_verde.png";
		a = 4;
		if (b==4 || c==4 || d==4)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_verde')){
		image.src = "../immagini/cerchio_azzurro.png";
		a = 5;
		if (b==5 || c==5 || d==5)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_azzurro')){
		image.src = "../immagini/cerchio_blu.png";
		a = 6;
		if (b==6 || c==6 || d==6)
			cambiaImmagine1();
	} else if (image.src.match('cerchio_blu')){
		image.src = "../immagini/cerchio_viola.png";
		a = 7;
		if (b==7 || c==7 || d==7)
			cambiaImmagine1();
	} else {
		image.src = "../immagini/cerchio_rosso.png";
		a = 1;
		if (b==1 || c==1 || d==1)
			cambiaImmagine1();
	}
}

function cambiaImmagine2() {
	var image = document.getElementById ('c2');
	if (image.src.match('cerchio_vuoto')){
		image.src = "../immagini/cerchio_rosso.png";
		b = 1;
		if (a==1 || c==1 || d==1)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_rosso')){
		image.src = "../immagini/cerchio_arancione.png";
		b = 2;
		if (a==2 || c==2 || d==2)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_arancione')){
		image.src = "../immagini/cerchio_giallo.png";
		b = 3;
		if (a==3 || c==3 || d==3)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_giallo')){
		image.src = "../immagini/cerchio_verde.png";
		b = 4;
		if (a==4 || c==4 || d==4)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_verde')){
		image.src = "../immagini/cerchio_azzurro.png";
		b = 5;
		if (a==5 || c==5 || d==5)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_azzurro')){
		image.src = "../immagini/cerchio_blu.png";
		b = 6;
		if (a==6 || c==6 || d==6)
			cambiaImmagine2();
	} else if (image.src.match('cerchio_blu')){
		image.src = "../immagini/cerchio_viola.png";
		b = 7;
		if (a==7 || c==7 || d==7)
			cambiaImmagine2();
	} else {
		image.src = "immagini/cerchio_rosso.png";
		b = 1;
		if (a==1 || c==1 || d==1)
			cambiaImmagine2();
	}
}

function cambiaImmagine3() {
	var image = document.getElementById ('c3');
	if (image.src.match('cerchio_vuoto')){
		image.src = "../immagini/cerchio_rosso.png";
		c = 1;
		if (a==1 || b==1 || d==1)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_rosso')){
		image.src = "../immagini/cerchio_arancione.png";
		c = 2;
		if (a==2 || b==2 || d==2)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_arancione')){
		image.src = "../immagini/cerchio_giallo.png";
		c = 3;
		if (a==3 || b==3 || d==3)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_giallo')){
		image.src = "../immagini/cerchio_verde.png";
		c = 4;
		if (a==4 || b==4 || d==4)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_verde')){
		image.src = "../immagini/cerchio_azzurro.png";
		c = 5;
		if (a==5 || b==5 || d==5)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_azzurro')){
		image.src = "../immagini/cerchio_blu.png";
		c = 6;
		if (a==6 || b==6 || d==6)
			cambiaImmagine3();
	} else if (image.src.match('cerchio_blu')){
		image.src = "../immagini/cerchio_viola.png";
		c = 7;
		if (a==7 || b==7 || d==7)
			cambiaImmagine3();
	} else {
		image.src = "../immagini/cerchio_rosso.png";
		c = 1;
		if (a==1 || b==1 || d==1)
			cambiaImmagine3();
	}
}

function cambiaImmagine4() {
	var image = document.getElementById ('c4');
	if (image.src.match('cerchio_vuoto')){
		image.src = "../immagini/cerchio_rosso.png";
		d = 1;
		if (a==1 || b==1 || c==1)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_rosso')){
		image.src = "../immagini/cerchio_arancione.png";
		d = 2;
		if (a==2 || b==2 || c==2)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_arancione')){
		image.src = "../immagini/cerchio_giallo.png";
		d = 3;
		if (a==3 || b==3 || c==3)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_giallo')){
		image.src = "../immagini/cerchio_verde.png";
		d = 4;
		if (a==4 || b==4 || c==4)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_verde')){
		image.src = "../immagini/cerchio_azzurro.png";
		d = 5;
		if (a==5 || b==5 || c==5)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_azzurro')){
		image.src = "../immagini/cerchio_blu.png";
		d = 6;
		if (a==6 || b==6 || c==6)
			cambiaImmagine4();
	} else if (image.src.match('cerchio_blu')){
		image.src = "../immagini/cerchio_viola.png";
		d = 7;
		if (a==7 || b==7 || c==7)
			cambiaImmagine4();
	} else {
		image.src = "../immagini/cerchio_rosso.png";
		d = 1;
		if (a==1 || b==1 || c==1)
			cambiaImmagine4();
	}
}

function inizializzaVar() {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}