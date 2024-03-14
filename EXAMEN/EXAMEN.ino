/**********************************************************************************
** Erik Lopez                         Examen                          12/03/2024 **
**********************************************************************************/
const byte led0 = 3;          
const byte led1 = 5;          
const byte led2 = 6;          
const byte led3 = 9;         
const byte led4 = 10;         
const byte val0 = A0;         
int valEntrada;              
float voltage;

void setup()
{
  pinMode(led0, OUTPUT);      
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);  
}

void loop()
{
  valEntrada = analogRead(val0);  
  voltage = ( (float) valEntrada * 5.0) / 1023.0; 

  if (voltage <= 0.1)
  {
    analogWrite(led0, 0);
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    analogWrite(led4, 0);
  }

  else if (voltage <= 1)
  {
    analogWrite(led0, 125);
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    analogWrite(led4, 0);
  }

  else if (voltage <= 2)
  {
    analogWrite(led1, 125);  
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    analogWrite(led4, 0);    
  }

  else if (voltage <= 3)
  {
    analogWrite(led2, 125); 
    analogWrite(led3, 0);
    analogWrite(led4, 0); 
  }

  else if (voltage <= 4)
  {
    analogWrite(led3, 125);
    analogWrite(led4, 0);   
  }

  else if (voltage <= 5)
  {
    analogWrite(led4, 125);
  }

  delay(65);   
}