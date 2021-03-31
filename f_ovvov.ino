#define kirmizi 13 
#define sari 12
#define yesil 11 


void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);

}

void loop()
{
  digitalWrite(kirmizi, HIGH);
  delay(10000); 
  digitalWrite(sari, HIGH);
  delay(2000);
  digitalWrite(sari, LOW);
  digitalWrite(kirmizi, LOW);
  digitalWrite(yesil, HIGH);
  delay(5000);
  digitalWrite(yesil, LOW); 
}
