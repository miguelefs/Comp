/*Tarefa de Computação 2: E4T3
<circuito semáforo inteligente Parte2.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <12/03/21>
*/

bool Bpress = false;

void setup()
{
  pinMode(7, INPUT);//BOTÃO
  pinMode(8, OUTPUT);//VERMELHO
  pinMode(9, OUTPUT);//AMARELO
  pinMode(10, OUTPUT);//VERDE
}

void loop()
{
  if (digitalRead(7)){
    Bpress=true;
  }
  digitalWrite(10, HIGH); // ACENDE VERDE
  digitalWrite(8, LOW); //APAGA VERMELHO
  delay(1000); // Wait for 1000 millisecond(s)
  if (digitalRead(7)){
    Bpress=true;
  }
  if (digitalRead(7)){
    Bpress=true;
  }
  digitalWrite(9, HIGH); // ACENDE AMARELO
  digitalWrite(10, LOW); // APAGA VERDE
  delay(500); // Wait for 1000 millisecond(s)
  if (digitalRead(7)){
    Bpress=true;
  }
  digitalWrite(8, HIGH); // ACENDE VERMELHO
  digitalWrite(9, LOW); // APAGA AMARELO
  delay(1000); // Wait for 1000 millisecond(s)
  if (Bpress==true){
    delay(2000);
}
}