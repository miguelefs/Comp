/*E6T3
<circuito intensidade variando entre máximo e mínimo.> 
Elaborada por: <Miguel Escorsin F.S>
Data: <29/03/21>
*/
int ledPin=9;
int intensidade=0;
int incrementar=1;
void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
analogWrite(ledPin, intensidade);
  delay(15);
  intensidade=intensidade+incrementar;
  if(intensidade==0||intensidade==255){
    incrementar--;
}
}