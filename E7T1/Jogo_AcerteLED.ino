/*Tarefa de Computação 5: E7T1
<Circuito do "Jogo, acerte o LED" com comando for.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <07/04/21>
*/
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
}
void loop()
{
  for(int i=0; i<=10; i++){
    digitalWrite(i,HIGH);
    delay(50);
    if(digitalRead(11)==HIGH){
      delay(2000);
    }
    digitalWrite(i,LOW);
}
}