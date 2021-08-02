/*Tarefa de Computação 1: E3T1
<circuito com 2 leds alternando.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <05/03/21>
*/

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

/*void loop()
{
  digitalWrite(8, HIGH);//ACENDE VERMELHO
  digitalWrite(7, LOW);//APAGA VERDE
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(8, LOW);//APAGA VERMELHO	
  digitalWrite(7, HIGH);//ACENDE VERDE
  delay(1000); // Wait for 1000 millisecond(s)
}*/
  void loop()
{
  digitalWrite(8, HIGH);//ACENDE VERMELHO
  digitalWrite(7, LOW);//APAGA VERDE
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(8, LOW);//APAGA VERMELHO	
  digitalWrite(7, HIGH);//ACENDE VERDE
  delay(500); // Wait for 500 millisecond(s)
}