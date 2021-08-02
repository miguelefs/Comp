/*E7T2
<Circuito do "Jogo, acerte o LED" com comando WHILE.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <07/04/21>
*/
void setup()
{
  pinMode(11, INPUT);
  for(int a=0;a<=10;a++){
    pinMode(a,OUTPUT);
  }
}

void loop()
{
int i=0;
  while(i<=10){
    digitalWrite(i, HIGH);
    delay(50);
    while(digitalRead(11)==HIGH){
      delay(1000);
    }
    digitalWrite(i, LOW);
    i++;
}
}