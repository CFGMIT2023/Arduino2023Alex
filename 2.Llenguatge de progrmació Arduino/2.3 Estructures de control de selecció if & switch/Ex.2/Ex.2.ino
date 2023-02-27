/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
int tempAigua = 101;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
 
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 


}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa


}

//************************ FUNCIONS ***************************** 