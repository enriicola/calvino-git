	function controlli()
	{
		controllaEmail();
		controllaPassword();
		controllaNome();
		controllaCognome();
	}
	function controllaEmail()
	{
		var email = document.form.email.value;
		var filtro = /^([a-zA-Z0-9_.-])+@(([a-zA-Z0-9-])+.)+([a-zA-Z0-9]{2,4})+$/;
		if(email=="" || email==undefined)
			alert("L'inserimento dell'email è obbligatorio!");
		else{
			if (!filtro.test(email.value))
				alert("Corpo di mille balene! Inserisci una mail valida, marinaio!");
			}
	}
	function controllaNome()
	{
		var nome = document.form.fname.value;
		if(nome=="" || nome==undefined)
			alert("L'inserimento del nome è obbligatorio!");
		else{
			if(nome!="mario" && nome!="enrico" && nome!="matteo")
				alert("Inserisci un nome valido!");
			}
	}
	function controllaCognome()
	{
		var cognome = document.form.lname.value;
		if(cognome=="" || cognome==undefined)
			alert("L'inserimento del cognome è obbligatorio!");
		else{
			if(cognome!="rossi" && cognome!="pezzano" && cognome!="caneva")
				alert("Inserisci un cognome valido!");
			}
	}
	function controllaPassword()
	{
		var psw = document.form.password.value;
		if(psw=="" || psw==undefined)
			alert("L'inserimento della password è obbligatorio!");
		else{
			if(psw!="prova00")
				alert("Password errata!");
			}
			
	}