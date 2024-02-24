

function check(){
	var i,j=0;
	var string;
	var lettera;
	lettera=document.getElementById("lettera").value;
	string=document.getElementById("parola").value;
	for(i=0;i<string.length;i++){
	if(string[i]==lettera)
		j++;
	}
	document.getElementById("ris").innerHTML = j;
}