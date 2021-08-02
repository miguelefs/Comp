/*Tarefa de Computação 4: E6T2
<circuito de alternar LEDs com IF .> 
Elaborada por: <Miguel Escorsin F.S>
Data: <29/03/21>
*/
int ledPin1=9;
int ledPin2=8;
int intervalo= 2000;

void setup()
{
  pinMode(ledPin1, OUTPUT);//vermelho
  pinMode(ledPin2, OUTPUT);//verde
}

void loop(){
  
  if(intervalo==0){
    intervalo=2000;
  }
  if(digitalRead(ledPin1)==LOW && digitalRead(ledPin2)==LOW){
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  delay(intervalo); // Wait for 2000 millisecond(s)
  }
  
  if(digitalRead(ledPin1)==HIGH && digitalRead(ledPin2)==HIGH){
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  delay(intervalo); // Wait for 2000 millisecond(s)
  }
  intervalo=intervalo - 200;
}