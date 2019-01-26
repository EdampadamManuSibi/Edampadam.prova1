void setup() {
  // put your setup code here, to run once:
int rosso1 = 6;
int giallo1 = 7;
int verde1 = 8;
int rosso = 9;
int giallo = 10;
int verde = 11;

}
void loop() {
         
  digitalWrite(rosso1, LOW);
  digitalWrite(giallo, LOW);    
  digitalWrite(giallo1, LOW);
  digitalWrite(rosso, HIGH);        
  digitalWrite(verde1, HIGH);
  delay(1000);   
  
  Lampeggia(verde1, 400, 4);
             
  digitalWrite(verde1, LOW);
  digitalWrite(giallo1, HIGH);      
  digitalWrite(giallo, HIGH);    
  delay(2000);  
        
  digitalWrite(Rosso, LOW);
  digitalWrite(giallo, LOW);    
  digitalWrite(giallo1, LOW);
  digitalWrite(rosso1, HIGH);
  digitalWrite(verde, HIGH);
  delay(1000);
  
  Lampeggia(verde, 400, 4);
  
  digitalWrite(verde, LOW);     //GIALLO
  digitalWrite(giallo, HIGH);
  digitalWrite(giallo1, HIGH);
  delay(2000);
}


void Lampeggia( int led, int ritardo, int n){
    for (int i = 0; i <= n; i++){
    delay(ritardo);
    digitalWrite(led, LOW);
    delay(ritardo);
    digitalWrite(led, HIGH);
  }
}
