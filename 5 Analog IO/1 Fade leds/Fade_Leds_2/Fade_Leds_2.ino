/**********************************************************************************
** Erik Lopez                      Fade LEDs                          26/02/2024 **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 115;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 170);     // posar PWM del pin 11 a 0
  
  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 30
  analogWrite(led1, 0);     // posar PWM del pin 5 a 30
  analogWrite(led2, 0);     // posar PWM del pin 6 a 30
  analogWrite(led3, 0);     // posar PWM del pin 9 a 30
  analogWrite(led4, 170);     // posar PWM del pin 10 a 30
  analogWrite(led5, 80);     // posar PWM del pin 11 a 30
  
  delay(velocitat);          

  analogWrite(led0, 0);     // posar PWM del pin 3 a 100
  analogWrite(led1, 0);     // posar PWM del pin 5 a 100
  analogWrite(led2, 0);     // posar PWM del pin 6 a 100
  analogWrite(led3, 170);     // posar PWM del pin 9 a 100
  analogWrite(led4, 80);     // posar PWM del pin 10 a 100
  analogWrite(led5, 30);     // posar PWM del pin 11 a 100
  
  delay(velocitat);          
  
  analogWrite(led0, 0);    // posar PWM del pin 3 a 165
  analogWrite(led1, 0);    // posar PWM del pin 5 a 165
  analogWrite(led2, 170);    // posar PWM del pin 6 a 165
  analogWrite(led3, 80);    // posar PWM del pin 9 a 165
  analogWrite(led4, 30);    // posar PWM del pin 10 a 165
  analogWrite(led5, 0);    // posar PWM del pin 11 a 165
  
  delay(velocitat);           

  analogWrite(led0, 0);    // posar PWM del pin 3 a 170
  analogWrite(led1, 170);    // posar PWM del pin 5 a 170
  analogWrite(led2, 80);    // posar PWM del pin 6 a 170
  analogWrite(led3, 30);    // posar PWM del pin 9 a 170
  analogWrite(led4, 0);    // posar PWM del pin 10 a 170
  analogWrite(led5, 0);    // posar PWM del pin 11 a 170
   
  delay(velocitat);           
  
  analogWrite(led0, 170);    // posar PWM del pin 3 a 165
  analogWrite(led1, 80);    // posar PWM del pin 5 a 165
  analogWrite(led2, 30);    // posar PWM del pin 6 a 165
  analogWrite(led3, 0);    // posar PWM del pin 9 a 165
  analogWrite(led4, 0);    // posar PWM del pin 10 a 165
  analogWrite(led5, 0);    // posar PWM del pin 11 a 165
  
  delay(velocitat);           

  analogWrite(led0, 80);     // posar PWM del pin 3 a 100
  analogWrite(led1, 30);     // posar PWM del pin 5 a 100
  analogWrite(led2, 0);     // posar PWM del pin 6 a 100
  analogWrite(led3, 0);     // posar PWM del pin 9 a 100
  analogWrite(led4, 0);     // posar PWM del pin 10 a 100
  analogWrite(led5, 0);     // posar PWM del pin 11 a 100
  
  delay(velocitat);          

  analogWrite(led0, 30);     // posar PWM del pin 3 a 30
  analogWrite(led1, 0);     // posar PWM del pin 5 a 30
  analogWrite(led2, 0);     // posar PWM del pin 6 a 30
  analogWrite(led3, 0);     // posar PWM del pin 9 a 30
  analogWrite(led4, 0);     // posar PWM del pin 10 a 30
  analogWrite(led5, 0);     // posar PWM del pin 11 a 30
  
  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 170);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 80);     // posar PWM del pin 3 a 0
  analogWrite(led1, 170);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 30);     // posar PWM del pin 3 a 0
  analogWrite(led1, 80);     // posar PWM del pin 5 a 0
  analogWrite(led2, 170);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 30);     // posar PWM del pin 5 a 0
  analogWrite(led2, 80);     // posar PWM del pin 6 a 0
  analogWrite(led3, 170);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 30);     // posar PWM del pin 6 a 0
  analogWrite(led3, 80);     // posar PWM del pin 9 a 0
  analogWrite(led4, 170);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 30);     // posar PWM del pin 9 a 0
  analogWrite(led4, 80);     // posar PWM del pin 10 a 0
  analogWrite(led5, 170);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 30);     // posar PWM del pin 10 a 0
  analogWrite(led5, 80);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 30);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0

  delay(velocitat);

  analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // POSAR PWM del pin 11 a 0
}

//********** Funcions *************************************************************