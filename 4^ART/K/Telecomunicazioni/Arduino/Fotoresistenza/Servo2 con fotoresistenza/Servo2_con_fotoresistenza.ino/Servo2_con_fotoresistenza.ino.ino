#include <Servo.h>
 
Servo smotore1;
Servo smotore2;
int pos;
int luminosita;
//int ledPin = 10;  //Il pin del led

                                                                         
void setup()
{
  smotore1.attach(9);
  smotore2.attach(6);
  Serial.begin(9600);
}
void loop(){

  luminosita = analogRead(A0);  //Lettura della luminosità
  
  luminosita = luminosita/4;  //Adeguiamo il valore della luminosità
    
  //analogWrite(ledPin,luminosita);  //Mettiamo il valore letto per il led
  
  Serial.println(luminosita);
  
  delay(1000);

    if(luminosita<145){
    
      for(pos = 0; pos < 100; pos++)
      {
        smotore1.write(pos);
        smotore2.write(pos+10);
        delay(20);
      }
      for(pos = 0; pos>=185; pos--)
      {
        smotore1.write(pos);
        smotore2.write(pos+10);
        delay(5);
      }
  }//while
}
