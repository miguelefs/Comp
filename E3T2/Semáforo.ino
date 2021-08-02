/*Tarefa de Computação 1: E3T2
<circuito semáforos funcionando simultâneamente.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <05/03/21>
*/

const int res_timer=1000;
int conta_timer=0;
int espera=0;
int ciclo=0;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  switch(ciclo){
    case 0: //s1 vermelho, s2vermelho
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
     espera=2;
	 break;
    case 1:    // s1 amarelo, s2 amarelo
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
     espera=2;
     break;
    case 2:    // s1 verde, s2 verde
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
     espera=2;
     break;
  }    
  conta_timer++; // timer=0+1=1 
  if (conta_timer>=espera) { //1>=espera=0 é true
    conta_timer=0; //timer=0 
    ciclo++; // ciclo++ + 3 = 4ciclos
    if (ciclo>2) { // 4>2
      ciclo=0; //reseta
    }  
  }  
  delay(res_timer);
}    
