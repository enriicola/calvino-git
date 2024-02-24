#include <Servo.h>

const int pingPin = 7;
Servo smotore;
int pos;
                                                                         
void setup()
{
  smotore.attach(9);
  Serial.begin(9600);
}

void loop() {
  long duration, inches, cm;

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
    for(pos = 0; pos < 185; pos++)
    {
      smotore.write(pos);
      delay(35);
    }
    for(pos = 0; pos>=185; pos--)
    {
      smotore.write(pos);
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
