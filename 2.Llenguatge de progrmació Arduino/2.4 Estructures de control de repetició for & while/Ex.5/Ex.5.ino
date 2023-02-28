/****************************************************************
**                                                             **
**                         TÍTOL:                              **
**          Posar un nom representatiu del programa            **
**                                                             **
**  NOM: Alex P                      DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
int taula = 2;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
  
  Serial.begin(9600);     // set up Serial library at 9600 bps

  for (int taula=2; taula <= 10; taula++)
  {
    Serial.print("Taula de multipilcar del ");
    Serial.println(taula);
    for (int i=0; i <= 10; i++)
    {
      delay(100);
      Serial.print(taula);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print( " = ");
      Serial.println(taula*i);    
    }
    Serial.println();
  } 
  
}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa


}

//************************ FUNCIONS ***************************** 