/**********************************************************************************
**                                                                               **
**                      Estructures de Control                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Incloure **************************************************************

//********** Variables *************************************************************

int tempAigua = 99; // He canviat el valor per provar ambdues condicions

//********** Configuració **********************************************************

void setup()              // s'executa una sola vegada, quan comença el programa
{
  Serial.begin(9600);     // Configura la biblioteca Serial a 9600 bps

  if (tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  } 
  else
  {
    Serial.print("Aigua bullint");
  }
}

//********** Bucle *****************************************************************

void loop()   // necessitem això encara que estigui buit
{
}
