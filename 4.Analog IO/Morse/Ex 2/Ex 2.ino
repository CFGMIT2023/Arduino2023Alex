/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//****** Includes *************************************************************



//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //H   ** Exemple: Hola electronics **
  punt();
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //A
  punt();
  ratlla();

  //Espai entre paraules
  espaiP();


  //E
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre lletres
  espaiL();
  //C
  ratlla();
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //T
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //N
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //I
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //C
  ratlla();
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //S
  punt();
  punt();
  punt();

}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}