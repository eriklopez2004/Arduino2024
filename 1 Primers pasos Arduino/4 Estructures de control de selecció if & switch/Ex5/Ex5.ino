/**********************************************************************************
**                                                                               **
**                   Programa de Qualificació Energètica                         **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

float kgCO2_per_m2 = 20.0;  // Exemple de valor, pots canviar-ho amb la teva mesura

//********** Setup ****************************************************************

void setup() {
  Serial.begin(9600);  // Inicia la comunicació sèrie a 9600 bps
}

//********** Loop *****************************************************************

void loop() {
  // Determina la qualificació energètica basada en els intervals especificats
  if (kgCO2_per_m2 < 3.5) {
    Serial.println("Qualificació Energètica: A");
  } else if (kgCO2_per_m2 < 6.5) {
    Serial.println("Qualificació Energètica: B");
  } else if (kgCO2_per_m2 < 11.1) {
    Serial.println("Qualificació Energètica: C");
  } else if (kgCO2_per_m2 < 17.7) {
    Serial.println("Qualificació Energètica: D");
  } else if (kgCO2_per_m2 < 38.2) {
    Serial.println("Qualificació Energètica: E");
  } else if (kgCO2_per_m2 < 43.2) {
    Serial.println("Qualificació Energètica: F");
  } else {
    Serial.println("Qualificació Energètica: G");
  }

  // No fem res més en el loop ja que només volem mostrar la qualificació una vegada
  while (1);
}