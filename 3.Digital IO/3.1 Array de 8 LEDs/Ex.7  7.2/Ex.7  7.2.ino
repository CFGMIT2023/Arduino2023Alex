/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
const byte led5 = 12;          
int temps = 400;
int i=0;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
 
pinMode(led5, OUTPUT);
  while(i<=30)
  {
   
    digitalWrite(led5, HIGH);    // posar a 5V el pin 12
    delay(temps);                  // es queden leds 500ms encesos
    digitalWrite(led5, LOW);     // posar a 0V el pin 12
    delay(temps);                  // es queden leds 500ms apagats
   i++;
  }

}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa


}

//************************ FUNCIONS ***************************** 