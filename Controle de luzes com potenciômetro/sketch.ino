int potenciometro = 15;
int leitura_pot = 0;
float tensao = 0.0;
int led1 = 34;
int led2 = 35;
int led3 = 33;

void setup(){
  pinMode(potenciometro, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
void loop(){
  leitura_pot = analogRead(potenciometro);
  tensao = (leitura_pot*3.3)/4095;
  if(tensao <= 0.5){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  if(tensao > 0.5 && tensao <= 1.5){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  if(tensao > 1.5 && tensao <= 2.0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  if(tensao > 2.0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  delay(50);
}