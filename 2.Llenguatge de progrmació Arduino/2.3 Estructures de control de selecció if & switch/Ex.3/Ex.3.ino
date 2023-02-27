/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
int tempAigua = 99;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
 
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua bullint!");
  } 
  else
  {
    Serial.print("Aigua encara no bull");
  }

}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa


}

//************************ FUNCIONS ***************************** 