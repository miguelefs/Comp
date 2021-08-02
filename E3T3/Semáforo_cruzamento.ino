/*Tarefa de Computação 1: E3T3
<circuito com semáforos de cruzamento.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <05/03/21>
*/

const int res_timer=1000;
int conta_timer=0;
int espera=0;
int ciclo=0;

void setup() { 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  switch(ciclo) {
    case 0:    // s1 verde, s2 vermelho
      digitalWrite(8, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      espera=2;
      break;
    case 1:    // s1 amarelo, s2 continua vermelho
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      espera=2;
      break;
    case 2:    // s1 vermelho, s2 verde
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(7, LOW);
      espera=2;
      break;
    case 3:    // s1 continua vermelho, s2 amarelo
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
      espera=2;
      break;
  }    
  conta_timer++;
  if (conta_timer>=espera) {
    conta_timer=0;
    ciclo++;
    if (ciclo>4) {
      ciclo=0;
    }  
  }  
  delay(res_timer/2);
}