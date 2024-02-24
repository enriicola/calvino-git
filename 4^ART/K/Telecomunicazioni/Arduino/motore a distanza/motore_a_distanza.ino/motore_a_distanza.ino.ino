#include <Servo.h>

Servo smotore1;
Servo smotore2;

void setup() {
  Serial.begin(9600);
  smotore1.attach(10);
  smotore2.attach(6);
} 

void loop() {
  long duration, inches, cm;
  int pos;
  const int pingPin = 7;
  
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);

  while(cm<50){
    for(pos = 0; pos < 100; pos++)
    {
      smotore1.write(pos);
      smotore2.write(pos+100);
      delay(35);
    }
    for(pos = 0; pos>=185; pos--)
    {
      smotore1.write(pos);
      smotore2.write(pos+100);
      delay(20);
    }
  }
  
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
