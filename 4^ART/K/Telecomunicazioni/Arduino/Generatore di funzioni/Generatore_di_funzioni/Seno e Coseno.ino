//GENERATORE DI FUNZIONI ALESSIO BIGINI 15/02/2016
 
void setup()
{
Serial.begin(9600); //Buadrate
}
void loop()
{
float angolo = 0;
//SENO E COSENO
for (angolo = 0; angolo <= 90; angolo = angolo + 0.1)
{
float seno = sin(angolo);
float coseno = cos(angolo);
Serial.print(seno);
Serial.print(" ");
Serial.println(coseno);
delay(1);
}
//ONDA A DENTE DI SEGA
for (float i = 0; i <= 90; i = i + 1)
{
Serial.println(i);
delay(1);
}
//ONDA QUADRA
for (int a = 0; a <= 100; a++)
{
int b = 0;
Serial.println(b);
delay(1);
}
for (int a = 0; a <= 100; a++)
{
int b = 100;
Serial.println(b);
delay(1);
}
//ONDA TRIANGOLARE
for (float i = 0; i <= 100; i = i + 1)
{
Serial.println(i);
delay(1);
}
for (float i = 100; i >= 0; i = i - 1)
{
Serial.println(i);
delay(1);
}
}
//GENERATORE DI FUNZIONI ALESSIO BIGINI 15/02/2016
 
void setup()
{
Serial.begin(9600); //Buadrate
}
void loop()
{
float angolo = 0;
//SENO E COSENO
for (angolo = 0; angolo <= 90; angolo = angolo + 0.1)
{
float seno = sin(angolo);
float coseno = cos(angolo);
Serial.print(seno);
Serial.print(" ");
Serial.println(coseno);
delay(1);
}
//ONDA A DENTE DI SEGA
for (float i = 0; i <= 90; i = i + 1)
{
Serial.println(i);
delay(1);
}
//ONDA QUADRA
for (int a = 0; a <= 100; a++)
{
int b = 0;
Serial.println(b);
delay(1);
}
for (int a = 0; a <= 100; a++)
{
int b = 100;
Serial.println(b);
delay(1);
}
//ONDA TRIANGOLARE
for (float i = 0; i <= 100; i = i + 1)
{
Serial.println(i);
delay(1);
}
for (float i = 100; i >= 0; i = i - 1)
{
Serial.println(i);
delay(1);
}
}

