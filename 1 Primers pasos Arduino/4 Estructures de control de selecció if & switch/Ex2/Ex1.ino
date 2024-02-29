/**********************************************************************************
**                                                                               **
**                      Estructures de Control                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Incloure **************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Configuració ********************************************************
void setup()              // s'executa una sola vegada, quan comença el programa
{
  Serial.begin(9600);     // Configura la biblioteca Serial a 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100°C, està bullint!");
  } 
}

//********** Bucle *****************************************************************
void loop()   // necessitem això encara que estigui buit
{
}