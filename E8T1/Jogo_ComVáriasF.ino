/*E8T1
<Circuito do "Jogo, acerte o LED" com várias funções.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <14/04/21>
*/
int pontos=0;
bool acabou=false;
int DELAY=100;

void setup(){
  pinMode(11,INPUT);
  for(int a=0;a<=10;a++){
    pinMode(a,OUTPUT);}
}
void acendeApagaLED(int num_led){
  bool flag_ponto=false;
  digitalWrite(num_led, HIGH);
  delay(DELAY);
  while(digitalRead(11)==HIGH){
    delay(DELAY);
    if(num_led==5){
      if(flag_ponto==false){
        flag_ponto=true;
        pontos++;
      }//flagponto
    }//numled
    else{
      if(flag_ponto==false)
      {
        flag_ponto=true;
      }//flagponto
    }//else
  }//while
  digitalWrite(num_led, LOW);
}
void loop(){
  if(acabou==false){
    for(int conta=1;conta<=5;conta++){
      for(int i=10;i>=0;i--){
        acendeApagaLED(i);
      }//for int i
      for(int j=0;j<=10;j++){
        acendeApagaLED(j);
      }//for int j
    }//for conta
    digitalWrite(10-pontos, HIGH);
  }//if (acabou)
  acabou=true;
}