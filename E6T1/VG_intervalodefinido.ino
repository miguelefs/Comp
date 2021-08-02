/*E6T1
<circuito com variáveis globais e intervalo definido.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <29/03/21>
*/
int ledPin=9;
int intervalo=2000;
void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(intervalo); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(intervalo); // Wait for 1000 millisecond(s)
}