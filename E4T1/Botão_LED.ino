/*E4T1
<circuito botão e LED.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <12/03/21>
*/

void setup()
{
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if (digitalRead(7)){
    digitalWrite(10, HIGH);
  }
  if (digitalRead(6)){
  digitalWrite(10, LOW);
}
}