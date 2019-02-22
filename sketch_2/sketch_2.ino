int Rosso = 12;
int Giallo = 10;
int Verde = 8;
int Rosso2 = 6;
int Giallo2 = 4;
int Verde2 = 2;
int TempoVerde = 0;
int TempoGiallo = 0;
int TempoRosso = 0;
int tempolampeggio = 0;
int numerolampeggio = 0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(Rosso, OUTPUT);
 pinMode(Giallo, OUTPUT);
 pinMode(Verde, OUTPUT);
 pinMode(Rosso2, OUTPUT);
 pinMode(Giallo2, OUTPUT);
 pinMode(Verde2, OUTPUT);
 TempoRosso = inputValori("Quanto tempo vuoi far durare il rosso? ");
 TempoGiallo = inputValori("Quanto tempo vuoi far durare il giallo? ");
 TempoVerde = inputValori("Quanto tempo vuoi far durare il verde?");
 numerolampeggio = inputValori("Quanti lampeggi vuoi che faccia il verde?");

}
void loop() {
  ROSSO();//primo incrocio
  VERDE2();//secondo incrocio
  ROSSOGIALLO();//primo incrocio
  lampeggia(Verde2, tempolampeggio, numerolampeggio);
  delay(1000); //secondo incrocio
  VERDE();//primo incrocio
  ROSSO2();//secondo incrocio
  lampeggia(Verde, tempolampeggio, numerolampeggio);
  delay(1000); //primo incrocio incrocio
  ROSSO2GIALLO2();
  
  

}
int inputValori(String richiesta)
{
  Serial.print(richiesta);
  while (Serial.available() == 0) {};
  return (Serial.readString().toInt());
}
void lampeggia(int led, int tempo, int ripetizioni) {
  for (int i = 0;i <= ripetizioni;i++)
  {
  digitalWrite (led,LOW);
  delay(tempo);
  digitalWrite (led,HIGH);
  delay(tempo);
  digitalWrite (led,LOW);
  //ripetizione lampeggio verde
  }
}
void ROSSO(){
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, LOW);    
  digitalWrite(Verde, LOW);
  //rosso primo incrocio
}
void ROSSOGIALLO(){
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, HIGH);    
  digitalWrite(Verde, LOW);
 //rossogiallo primo incrocio 
}
void VERDE(){
  digitalWrite(Rosso, LOW);
  digitalWrite(Giallo, LOW);    
  digitalWrite(Verde, HIGH);
 //verde primo incrocio
}
void ROSSO2(){
  digitalWrite(Rosso2, HIGH);
  digitalWrite(Giallo2, LOW);    
  digitalWrite(Verde2, LOW);
 //rosso secondo incrocio 
}
void ROSSO2GIALLO2(){
  digitalWrite(Rosso2, HIGH);
  digitalWrite(Giallo2, HIGH);    
  digitalWrite(Verde2, LOW);
 //rossogiallo secondo incrocio
}
void VERDE2(){
  digitalWrite(Rosso2, LOW);
  digitalWrite(Giallo2, LOW);    
  digitalWrite(Verde2, HIGH);
 //verde secondo incrocio
}
