var i=0;

var scorr=1;
function next(){
	if(scorr==5)
		scorr=0;
	scorr++;
	document.getElementById("scorrimento").setAttribute("src","img/golf" + scorr + ".jpg");
}
function previous(){
	if(scorr==1)
		scorr=6;
	scorr--;
	document.getElementById("scorrimento").setAttribute("src","img/golf" + scorr + ".jpg");
}
function index(){
	setTimeout(function() {
  window.location.href = "accesso.html";
}, 5000);
}
function invito(){
	alert("Unisciti a noi ed accedi al portale!");
}
function accedi(){
	document.getElementById("accesso").style.display="block";
	document.getElementById("registrazione").style.display="none";
}
function registrati(){
	document.getElementById("accesso").style.display="none";
	document.getElementById("registrazione").style.display="block";
}
function home(){
	document.getElementById("home").style.display="block";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function galleria(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="block";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function foto(){
	alert("Bella vero? Scorri per guardare le altre!");
}
function generazioni(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="block";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function eventi(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="block";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function tuning(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="block";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function forum(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="block";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function fortuna(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="block";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="none";
}
function faq(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="block";
	document.getElementById("areautente").style.display="none";
}
function areautente(){
	document.getElementById("home").style.display="none";
	document.getElementById("galleria").style.display="none";
	document.getElementById("generazioni").style.display="none";
	document.getElementById("eventi").style.display="none";
	document.getElementById("tuning").style.display="none";
	document.getElementById("forum").style.display="none";
	document.getElementById("fortuna").style.display="none";
	document.getElementById("faq").style.display="none";
	document.getElementById("areautente").style.display="block";
}
function commenta(){
	if(i==0){
		document.getElementById("commenta").style.display="block";
		i=1;
		return;
	}
	if(i==1){
		document.getElementById("commenta").style.display="none";
		i=0;
		return;
	}
	
}
/*function controlli(){
	controllaEmail();
	controllaPassword();
}
function controllaEmail(){
	var email = document.form.email.value;
	var filtro = /^([a-zA-Z0-9_.-])+@(([a-zA-Z0-9-])+.)+([a-zA-Z0-9]{2,4})+$/;
	if(email=="" || email==undefined)
		alert("L'inserimento dell'email è obbligatorio!");
	else{
		if (!filtro.test(email.value))
			alert("Corpo di mille balene! Inserisci una mail valida, marinaio!");
		}
}
function controllaPassword(){
	var psw = document.form.password.value;
	if(psw=="" || psw==undefined)
		alert("L'inserimento della password è obbligatorio!");
	else{
		if(psw!="prova00")
			alert("Password errata!");
		}
}*/