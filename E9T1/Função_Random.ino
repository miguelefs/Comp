/*E9T1
<Circuito utilizando a função random.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <21/04/21>
*/
int Par1 = 2;
int Par2 = 4;
int Impar = 7;
int Random;

void setup(){
  pinMode(Impar, OUTPUT);
  pinMode(Par1, OUTPUT);
  pinMode(Par2, OUTPUT);
  
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop(){
  Random = random(255);
  Serial.print("Numero ");
  Serial.println(Random);
    if(Random % 2 ){
     digitalWrite(Impar, HIGH);
     delay(1000);
     digitalWrite(Impar, LOW);
    }
    else{
      digitalWrite(Par1, HIGH);
      digitalWrite(Par2, HIGH);
      delay(2000);
      digitalWrite(Par1, LOW);
      digitalWrite(Par2, LOW);
    }
  delay(1000);
}