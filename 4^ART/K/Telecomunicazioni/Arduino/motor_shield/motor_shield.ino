#define TIMEFASE 20
#define DEBUG
 
#define PWMA 3
#define PWMB 11
#define DIRA 12
#define DIRB 13
 
int nFase     = 0;
 
void setup() {
 
  #ifdef DEBUG
    Serial.begin( 9600 );
    Serial.println("Avvio");
  #endif

  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
 
}
void loop() {
 
  eseguiStep( 50,true );
  stop();
  delay( 1000 );
  eseguiStep( 100,true );
  stop();
  delay( 1000 );
  eseguiStep( 200,true );
  stop();
  delay( 3000 );
   
}

int fase( int nFase ) {
 
  switch( nFase ) {
  case 1:
    digitalWrite(DIRA, HIGH);
    digitalWrite(DIRB, LOW);
    digitalWrite(PWMA, HIGH);
    digitalWrite(PWMB, LOW);
    break;
 
  case 2:
    digitalWrite(DIRA, LOW);
    digitalWrite(DIRB, HIGH);
    digitalWrite(PWMA, LOW);
    digitalWrite(PWMB, HIGH);
    break;
 
  case 3:
    digitalWrite(DIRA, LOW);
    digitalWrite(DIRB, LOW);
    digitalWrite(PWMA, HIGH);
    digitalWrite(PWMB, LOW);
    break;
 
  case 4:
    digitalWrite(DIRA, LOW);
    digitalWrite(DIRB, LOW);
    digitalWrite(PWMA, LOW);
    digitalWrite(PWMB, HIGH);
    break;
  }
  delay(TIMEFASE);
 
  return nFase;
}
 
int stop() {
  delay( 500 );
   
  digitalWrite(DIRA, LOW);
  digitalWrite(DIRB, LOW);
  digitalWrite(PWMA, LOW);
  digitalWrite(PWMB, LOW);
}

void eseguiStep( int passi, boolean dir ) {
  if ( passi <= 0 ) { return; }
  if ( dir ) { for ( int p=1; p<=passi; p++) { gira(); } }
  else       { for ( int p=passi; p>=1; p--) { gira(); } }
}

void gira() {
  nFase = (nFase+1);
  if ( nFase > 4 ) { nFase=1; }
  fase( nFase );
}
