int comptar = 11;
int i = 0;
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}
void loop()   // we need this to be here even though its empty
{
}
