/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

int tempAigua = 95;

//********** Setup ****************************************************************

void setup() {
  Serial.begin(9600);  // Inicia la comunicació sèrie a 9600 bps

  // Estructura if/else if/else per determinar l'estat de l'aigua
  if (tempAigua < 90) {
    Serial.println("Aigua encara no bull");
  } else if (tempAigua >= 90 && tempAigua < 100) {
    Serial.println("Aigua apunt de bullir");
  } else if (tempAigua == 100) {
    Serial.println("Aigua a 100ºC");
  } else {
    Serial.println("Aigua bullint");
  }
}

//********** Loop *****************************************************************

void loop() {
  // No fem res més en el loop ja que només volem mostrar el resultat un cop
  while (1);
}
