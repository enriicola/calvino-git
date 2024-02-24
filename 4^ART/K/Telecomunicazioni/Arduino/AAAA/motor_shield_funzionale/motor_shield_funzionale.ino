 int pinDirA=1;
 int pinDirB=8;
 int pinPwmA=12;
 int pinPwmB=11;
 
 void setup() {
 
  #ifdef DEBUG
    Serial.begin( 9600 );
  #endif
  
   pinMode( pinDirA,OUTPUT );
   pinMode( pinDirB,OUTPUT );
   pinMode( pinPwmA,OUTPUT );
   pinMode( pinPwmB,OUTPUT );
 }
 
 void loop()
 {
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,HIGH );
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(50);
 
   digitalWrite( pinDirA,LOW );
   digitalWrite( pinDirB,LOW );
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(5000);
 
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,LOW );
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(5000);
 
   digitalWrite( pinDirA,LOW );
   digitalWrite( pinDirB,HIGH );
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(5000);
 
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,HIGH );
   analogWrite( pinPwmA,0 );
   analogWrite( pinPwmB,0 );
 
   delay(5000);
 }
