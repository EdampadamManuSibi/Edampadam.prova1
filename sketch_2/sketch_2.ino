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

 
}
void loop() {
  ROSSO();//primo incrocio
  VERDE2();//secondo incrocio
  ROSSOGIALLO();//primo incrocio
  lampeggia(Verde, tempo, ripetizioni);
  delay(1000); //secondo incrocio
  VERDE();//primo incrocio
  ROSSO2();//secondo incrocio
}
void tempoRosso() {
  Serial.println("Quanto tempo vuoi far durare il rosso? ");
  while (Serial.available() == 0) {};
  durataRosso = Serial.readString().toInt();
  Serial.print ("Il rosso durerà ");
  Serial.print (durataRosso);
  Serial.print(" millisecondi.");
  // input per tempo e lampeggi
}

void tempoGiallo() {
  Serial.println("\n\rQuanto tempo vuoi far durare il giallo?");
  while (Serial.available() == 0) {};
  durataGiallo = Serial.readString().toInt();
  Serial.print ("Il giallo durerà ");
  Serial.print (durataGiallo);
  Serial.print(" millisecondi.\n\r");
  // input tempo e lampeggi
}
void tempoVerde() {
  Serial.println("Quanto tempo vuoi far durare i lampeggi del verde? ");
  while (Serial.available() == 0) {};
  lampeggiVerde = Serial.readString().toInt();
  Serial.print ("Il lampeggio del verde durerà ");
  Serial.print (lampeggiVerde);
  Serial.print(" millisecondi.\n\r");
  // devo darli in input il tempo e i lampeggi
}
void numeroLampeggiVerde() {
  Serial.println("Quanti lampeggi vuoi che faccia il verde? ");
  while (Serial.available() == 0) {};
  numeroLampeggiVerde = Serial.readString().toInt();
  Serial.print ("Il verde farà ");
  Serial.print (numeroLampeggiVerde);
  Serial.print(" lampeggi.\n\r");
  // devo darli in input il tempo e i lampeggi
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
  digitalWrite(Rosso2, LOW);
  digitalWrite(Giallo2, LOW);    
  digitalWrite(Verde2, HIGH);
 //verde primo incrocio
}
void ROSSO2(){
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, LOW);    
  digitalWrite(Verde, LOW);
 //rosso secondo incrocio 
}
void ROSSO2GIALLO2(){
  digitalWrite(Rosso, HIGH);
  digitalWrite(Giallo, HIGH);    
  digitalWrite(Verde, LOW);
 //rossogiallo secondo incrocio
}
void VERDE2(){
  digitalWrite(Rosso2, LOW);
  digitalWrite(Giallo2, LOW);    
  digitalWrite(Verde2, HIGH);
 //verde secondo incrocio
}
