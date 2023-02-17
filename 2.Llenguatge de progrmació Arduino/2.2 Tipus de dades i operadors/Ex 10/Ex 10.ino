/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
int test = 32767;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);


}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa


}

//************************ FUNCIONS ***************************** 