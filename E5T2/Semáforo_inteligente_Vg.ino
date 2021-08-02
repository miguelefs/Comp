/*E5T2
<circuito semáforo inteligente com variáveis globais.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <23/03/21>
*/
int BOTAO=7;
int VERDE=8;
int AMARELO=9;
int VERMELHO=10;
int Bpress=0;

void setup()
{
  pinMode(BOTAO, INPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
}

void loop()
{
  if (digitalRead(BOTAO)){
    Bpress=1;
  }
  digitalWrite(VERMELHO, HIGH); // ACENDE VERMELHO
  digitalWrite(VERDE, LOW); //APAGA VERDE
  delay(1000); // Wait for 1000 millisecond(s)
  if (digitalRead(BOTAO)){
    Bpress=1;
  }
  if (digitalRead(BOTAO)){
    Bpress=1;
  }
  digitalWrite(AMARELO, HIGH); // ACENDE AMARELO
  digitalWrite(VERMELHO, LOW); // APAGA VERMELHO
  delay(500); // Wait for 1000 millisecond(s)
  if (digitalRead(BOTAO)){
    Bpress=1;
  }
  digitalWrite(VERDE, HIGH); // ACENDE VERDE
  digitalWrite(AMARELO, LOW); // APAGA AMARELO
  delay(1000); // Wait for 1000 millisecond(s)
  if (Bpress==1){
    delay(2000);
}
}