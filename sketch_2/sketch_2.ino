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
 tempoRosso();
 tempoGiallo();
 tempoVerde();
 numeroLampeggiVerde();
 tempoRosso2();
 tempoGiallo2();
 tempoVerde2();
 numeroLampeggiVerde2();
 
 
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
void tempoRosso() {
  Serial.print("Quanto tempo vuoi far durare il rosso? ");
  while (Serial.available() == 0) {};
  TempoRosso = Serial.readString().toInt();
}

void tempoGiallo() {
  Serial.print("Quanto tempo vuoi far durare il giallo?");
  while (Serial.available() == 0) {};
  TempoGiallo = Serial.readString().toInt();
}
void tempoVerde() {
  Serial.print("Quanto tempo vuoi far durare i lampeggi del verde? ");
  while (Serial.available() == 0) {};
  tempolampeggio = Serial.readString().toInt();
}
void numeroLampeggiVerde() {
  Serial.print("Quanti lampeggi vuoi che faccia il verde? ");
  while (Serial.available() == 0) {};
  numerolampeggio = Serial.readString().toInt();
}
void tempoRosso2() {
  Serial.print("Quanto tempo vuoi far durare il rosso2? ");
  while (Serial.available() == 0) {};
  TempoRosso = Serial.readString().toInt();
}

void tempoGiallo2() {
  Serial.print("Quanto tempo vuoi far durare il giallo2?");
  while (Serial.available() == 0) {};
  TempoGiallo = Serial.readString().toInt();
}
void tempoVerde2() {
  Serial.print("Quanto tempo vuoi far durare i lampeggi del verde2? ");
  while (Serial.available() == 0) {};
  tempolampeggio = Serial.readString().toInt();
}
void numeroLampeggiVerde2() {
  Serial.print("Quanti lampeggi vuoi che faccia il verde2? ");
  while (Serial.available() == 0) {};
  numerolampeggio = Serial.readString().toInt();
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
