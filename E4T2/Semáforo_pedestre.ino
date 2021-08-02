/*E4T2
<circuito semáforo inteligente com semáforo de pedestre.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <12/03/21>
*/

void setup()
{
  pinMode(7, INPUT);//BOTÃO
  pinMode(8, OUTPUT);//VERMELHOC	
  pinMode(9, OUTPUT);//AMARELOC	
  pinMode(10, OUTPUT);//VERDEC
  pinMode(11, OUTPUT);//VERMELHOP
  pinMode(12, OUTPUT);//VERDEP
}

void loop()
{
  digitalWrite(10, HIGH); // ACENDE VERDEC
  digitalWrite(8, LOW); //APAGA VERMELHOC
  digitalWrite(11, HIGH);//ACENDE VERMELHOP
  digitalWrite(12, LOW);//APAGA VERDEP
  delay(1000); // Wait for 1000 millisecond(s)
    
  digitalWrite(9, HIGH); // ACENDE AMARELOC
  digitalWrite(10, LOW); // APAGA VERDEC
  delay(1000); // Wait for 1000 millisecond(s)
    
  digitalWrite(8, HIGH); // ACENDE VERMELHOC
  digitalWrite(9, LOW); // APAGA AMARELOC
  digitalWrite(11, LOW); //APAGA VERMELHOP
  digitalWrite(12, HIGH);//ACENDE VERDEP
  delay(1000); // Wait for 1000 millisecond(s)

  if (digitalRead(7)){
    delay(2000);
}
}