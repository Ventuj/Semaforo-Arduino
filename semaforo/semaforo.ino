int r = 7;
int g = 6;
int v = 5;
int r1 = 4;
int g1 = 3;
int v1 = 2;
int drosso = 500;
int dverde = 100;
int dgiallo = 300;
void setup() {
  pinMode(r, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(v1, OUTPUT);
}

void loop() {
  esecuzione(r, v1);
  esecuzione(r1, v);
}

void lampeggio(int v){
  for(int i = 0; i < 4; i++){
    digitalWrite(v, HIGH);
    delay(dverde);
    digitalWrite(v,LOW);
    delay(dverde); 
  }
}
void gestgiallo(){
  digitalWrite(g, HIGH);
  digitalWrite(g1, HIGH);
  delay(dgiallo);  
  digitalWrite(g, LOW);
  digitalWrite(g1, LOW);
}

void esecuzione(int rosso, int verde){
  digitalWrite(rosso, HIGH);
  digitalWrite(verde, HIGH);
  delay(drosso);
  lampeggio(verde);
  gestgiallo();
  digitalWrite(rosso,LOW);
}
