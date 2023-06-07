/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//********** Variables ************************************************************
const byte xiulet = 9;       
const byte pot0 = A0;        
const byte pot1 = A1;
int valPot0;                
int valPot1;
//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);  
  pinMode(pot0, INPUT);
  pinMode(pot1, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    
  valPot1 = analogRead(pot1);

  tone(xiulet, 800, valPot0);    
  delay(valPot0 + valPot1);             
}

//********** Funcions *************************************************************