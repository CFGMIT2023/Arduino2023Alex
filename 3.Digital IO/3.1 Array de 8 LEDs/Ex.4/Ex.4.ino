/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button

//************************* SETUP *******************************

void setup()                // run once, when the sketch starts
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}
void loop()     // we need this to be here even though its empty
{
 buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0)  //polsador premut, muntat amb Pull-up
  {
   digitalWrite(led0, HIGH);
  }
  else   //polsador no premut, muntat amb Pull-up
  {
   digitalWrite(led0, LOW);
  }
   delay(200);  //per no estar llegint button molt ràpid  
}