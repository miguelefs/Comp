/*Tarefa de Computação 3: E5T1
<circuito LED e Botão com variáveis globais.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <23/03/21>
*/
int LED=8; 
int BOTAO=7;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);
}

void loop()
{
  if(digitalRead(BOTAO)){
    digitalWrite(LED, HIGH);
  }
  else{ 
  digitalWrite(LED, LOW);
  }
}