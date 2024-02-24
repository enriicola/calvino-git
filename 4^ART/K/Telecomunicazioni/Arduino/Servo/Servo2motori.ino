#include <Servo.h>
 
Servo smotore1;
Servo smotore2;
int pos;
                                                                         
void setup()
{
  smotore1.attach(9);
  smotore2.attach(6);
}
void loop()
{
  for(pos = 0; pos < 100; pos++)
  {
    smotore1.write(pos);
    smotore2.write(pos+10);
    delay(35);
  }
  for(pos = 0; pos>=185; pos--)
  {
    smotore1.write(pos);
    smotore2.write(pos+10);
    delay(20);
  }
}

