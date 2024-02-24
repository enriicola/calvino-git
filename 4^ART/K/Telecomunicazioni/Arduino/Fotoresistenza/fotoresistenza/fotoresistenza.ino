int luminosita;
//int ledPin = 10;  //Il pin del led


void setup() {
  Serial.begin(9600);
}


void loop() {



luminosita = analogRead(A0);  //Lettura della luminosità
  
luminosita = luminosita/4;  //Adeguiamo il valore della luminosità
  
//analogWrite(ledPin,luminosita);  //Mettiamo il valore letto per il led

Serial.println(luminosita);

delay(1000);


}
