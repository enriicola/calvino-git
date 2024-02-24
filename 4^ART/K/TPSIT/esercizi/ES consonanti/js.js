	function controlli(){
		controllaEmail();
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
	
	