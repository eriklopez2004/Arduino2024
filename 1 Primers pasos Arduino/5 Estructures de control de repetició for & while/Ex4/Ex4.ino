/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** Erik Lopez                                                         06/02/2024 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

int taula = 2;

//********** Setup ****************************************************************

void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
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
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
