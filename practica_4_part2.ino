#define sw1 2
#define sw2 3
#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 9
#define led7 10
#define velocidad1 delay(500);
#define velocidad2 delay(250);

void setup(){
  Serial.begin(9600);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  Serial.println("Boton 1: Velocidad 1");
  Serial.println("Boton 2: Velocidad 2");
}
void loop(){
  if(digitalRead(sw1) == HIGH){
    Serial.println("Secuencia Velocidad 1");
      digitalWrite(led1, HIGH);
    velocidad1
      digitalWrite(led2, HIGH);
    velocidad1
      digitalWrite(led1, LOW);
    velocidad1
      digitalWrite(led3, HIGH);
    velocidad1
      digitalWrite(led2, LOW);
    velocidad1
      digitalWrite(led4, HIGH);
    velocidad1
      digitalWrite(led3, LOW);
    velocidad1
      digitalWrite(led5, HIGH);
    velocidad1
      digitalWrite(led4, LOW);
    velocidad1
      digitalWrite(led6, HIGH);
    velocidad1
      digitalWrite(led5, LOW);
    velocidad1
      digitalWrite(led7, HIGH);
    velocidad1
      digitalWrite(led6, LOW);
    velocidad1
      digitalWrite(led7, LOW);
      digitalWrite(led7, HIGH);
    velocidad1
      digitalWrite(led6, HIGH);
    velocidad1
      digitalWrite(led7, LOW);
    velocidad1
      digitalWrite(led5, HIGH);
    velocidad1
      digitalWrite(led6, LOW);
    velocidad1
      digitalWrite(led4, HIGH);
    velocidad1
      digitalWrite(led5, LOW);
    velocidad1
      digitalWrite(led3, HIGH);
    velocidad1
      digitalWrite(led4, LOW);
    velocidad1
      digitalWrite(led2, HIGH);
    velocidad1
      digitalWrite(led3, LOW);
    velocidad1
      digitalWrite(led1, HIGH);
    velocidad1
      digitalWrite(led2, LOW);
    velocidad1
      digitalWrite(led1, LOW);
    }
    if(digitalRead(sw2) == HIGH){
      Serial.println("Secuencia Velocidad 2");
      digitalWrite(led1, HIGH);
    velocidad2
      digitalWrite(led2, HIGH);
    velocidad2
      digitalWrite(led1, LOW);
    velocidad2
      digitalWrite(led3, HIGH);
    velocidad2
      digitalWrite(led2, LOW);
    velocidad2
      digitalWrite(led4, HIGH);
    velocidad2
      digitalWrite(led3, LOW);
    velocidad2
      digitalWrite(led5, HIGH);
    velocidad2
      digitalWrite(led4, LOW);
    velocidad2
      digitalWrite(led6, HIGH);
    velocidad2
      digitalWrite(led5, LOW);
    velocidad2
      digitalWrite(led7, HIGH);
    velocidad2
      digitalWrite(led6, LOW);
    velocidad2
      digitalWrite(led7, LOW);
      digitalWrite(led7, HIGH);
    velocidad2
      digitalWrite(led6, HIGH);
    velocidad2
      digitalWrite(led7, LOW);
    velocidad2
      digitalWrite(led5, HIGH);
    velocidad2
      digitalWrite(led6, LOW);
    velocidad2
      digitalWrite(led4, HIGH);
    velocidad2
      digitalWrite(led5, LOW);
    velocidad2
      digitalWrite(led3, HIGH);
    velocidad2
      digitalWrite(led4, LOW);
    velocidad2
      digitalWrite(led2, HIGH);
    velocidad2
      digitalWrite(led3, LOW);
    velocidad2
      digitalWrite(led1, HIGH);
    velocidad2
      digitalWrite(led2, LOW);
    velocidad2
      digitalWrite(led1, LOW);
      velocidad2
    }
}