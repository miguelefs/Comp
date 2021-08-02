/*E7T3
<Circuito do "Jogo, acerte o LED" com comando DO WHILE.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <07/04/21>
*/
void setup()
{
  pinMode(11, INPUT);
  int a=0;
  do{
    pinMode(a,OUTPUT);
    a++;
  } while(a<=10);
}

void loop()
{
int i=0;
  do{
    digitalWrite(i, HIGH);
    delay(50);
    while(digitalRead(11)==HIGH){
      delay(1000);
    }
    digitalWrite(i, LOW);
    i++;
} while(i<=10);
}