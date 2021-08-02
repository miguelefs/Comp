/*AF
<Circuito com o conjunto de servomotor, painel LCD e keypad.> 
Elaborada por: <Miguel Escorsin F.S, Fernanda Shinohara, Raissa Kamille Martins>
Data: <11/05/21>
*/
#include <Servo.h>
//inclui biblioteca servomotor
#include <Keypad.h>
//inclui teclado keypad
#include <LiquidCrystal.h>
//inclui biblioteca LCD

LiquidCrystal meu_display(12,11,5,4,3,2);//Declara meu_display como
										 //painel LCD (PINOS)
Servo meu_servomotor; //Declara variável meu_servomotor
					 	  
//Definição da quantidade de linhas e colunas
const byte LINHAS = 4; //const(GLOBAL)
const byte COLUNAS = 3;//4,3(Valores atribuídos à variável)
//matriz de caracteres 
char matriz_teclas[LINHAS][COLUNAS]= //Declarando que matriz
  									 //é composta das variáveis
  									 //Linhas e colunas
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'},
};
//Definição dos pinos das linhas
byte PinosLinhas[LINHAS]={A1,A2,A3,A4};//Guardando valores no espaço linha
									   //Recebem Pinos do arduíno
//Definição dos Pinos das colunas
byte PinosColunas[COLUNAS]={10,9,8};// 3 espaços, 3 Pinos
//Inicializa o teclado
Keypad meu_teclado = Keypad ( makeKeymap(matriz_teclas), //Keypad 
                              PinosLinhas, PinosColunas,
                              LINHAS, COLUNAS);
int ColunaLCD = 0;
int posicao = 0;

String stringdigitada = ""; //Uma "instância" Um ao lado do outro
							
void atualizaDisplay(){     //Resetar Display
  meu_display.clear();      //Limpa display
  meu_display.setCursor(0,1);//(Coluna,Linha)= Parâmetros
  meu_display.print(posicao);
  meu_display.print(" graus. ");
  ColunaLCD=0;					
  meu_display.setCursor(0,0);
}

void setup()
{
  Serial.begin(9600); //Inicialização do monitor Serial(9600bits)
  meu_servomotor.attach(6);//conctar servomotor
  meu_display.begin(16,2);//Inicializa monitor LCD(16 colunas, 2 linhas)
  meu_display.setCursor(ColunaLCD, 0);//seta primeira coluna como 0
  atualizaDisplay();
}

void loop()
{
  char tecla = meu_teclado.getKey();
  if((tecla=='0')||(tecla=='1')||(tecla=='2')||(tecla=='3')||
     (tecla=='4')||(tecla=='5')||(tecla=='6')||(tecla=='7')||
     (tecla=='8')||(tecla=='9')){
    //if (tecla!=='*')&&(tecla!=='#')&&(tecla!==NO_KEY)){
                      //NO_KEY indica nada digitado
   stringdigitada+=tecla; //Concatena 'tecla ao final de
                          //stringdigitada(Tipo String)
   meu_display.print(tecla); //"mostra"tecla no display
   meu_display.setCursor (++ColunaLCD, 0); //Incrementa Coluna
   Serial.println(stringdigitada); //debug
  }
  else
    if(tecla=='*') //*= Apagar
    {
      if(ColunaLCD>0){// Testa se não chegou ao começo da string
        meu_display.setCursor (--ColunaLCD,0); // Coluna - 1
        meu_display.print ("_");         //Escreve '_'
        stringdigitada.remove(ColunaLCD);    //Retira o ultimo
                             //caractere da string
        meu_display.setCursor(ColunaLCD, 0);   //Reposiona
      }
    }
    else
      if(tecla=='#'){                   //# = enter
      posicao = stringdigitada.toInt(); // converte string -> int
      /*for(int angulo=posicao; angulo<=180; angulo++){
        meu_servomotor.write(angulo);
        delay(100);*/
      for(int angulo=0; angulo<=posicao; angulo++){//Angulo inicial
        meu_servomotor.write(angulo);			   //escreve angulo
      	delay(50);								   //espera 
      }
      for(int angulo=posicao; angulo>=0;angulo--){ //angulo inicial
      meu_servomotor.write(angulo);				   //escreve
      delay(50);
      }
      if(posicao>180) posicao = 180;       // Limite Superior
      stringdigitada="";                // Zera stringdigitada
      Serial.print ("Saida Servo (0~180): ");//Escreve texto
      Serial.println (posicao); //o valor da posicao
      
      atualizaDisplay();
    }
    //meu_servomotor.write(posicao);
    delay(250);
  }// Fim