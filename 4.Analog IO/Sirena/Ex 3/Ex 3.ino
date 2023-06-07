/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{

  tone(xiulet, 800, 3000);    // El xiulet sona durant 3s a 800 Hz.

  delay(5000);                 // Pausa de 3s.

  tone(xiulet, 1000, 3000);    // El xiulet sona durant 3s a 1000 Hz.
  
  delay(5000);                 // Pausa de 3s.

  tone(xiulet, 1050, 3000);    // El xiulet sona durant 3s a 1050 Hz.

  delay(5000);                 // Pausa de 3s.
  
  tone(xiulet, 700, 3000);    // El xiulet sona durant 3s a 700 Hz.

  delay(5000);                //Pausa de 3s i torna a començar.

}

//********** Funcions *************************************************************