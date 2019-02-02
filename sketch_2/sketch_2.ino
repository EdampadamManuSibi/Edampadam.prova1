int Rosso = 12;
int Giallo = 10;
int Verde = 8;
int tempo = 200;
int ripetizioni = 4;
void setup() {
  // put your setup code here, to run once:

}
void loop() {
 
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, LOW);    
  digitalWrite(Verde, LOW);
  delay (3000);
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, HIGH);    
  digitalWrite(Verde, LOW);
  delay (3000); 
  digitalWrite(Rosso, LOW);
  digitalWrite(Giallo, LOW);    
  digitalWrite(Verde, HIGH);
  delay (3000); 
  lampeggia(Verde, tempo, ripetizioni);
  delay(1000);  
 
 
  
}
void lampeggia(int led, int tempo, int ripetizioni) {
  for (int i = 0;i <= ripetizioni;i++)
  {
  digitalWrite (led,LOW);
  delay(tempo);
  digitalWrite (led,HIGH);
  delay(tempo);
  digitalWrite (led,LOW);
  }
}
