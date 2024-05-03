#define push1 2
#define push2 3
#define push3 4
#define pausa1 delay(1000);
#define pausa2 delay(2000);
#define pausa3 delay(3000);
#define pausa4 delay(500);

int without = 0;
void setup(){
  Serial.begin(9600);
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
  pinMode(push3, INPUT);
  Serial.println("Presiona un boton");
  Serial.println(" 1. 1s");
  Serial.println(" 2. 2s");
  Serial.println(" 3. 3s");
  
  
}
void loop(){
  if(digitalRead(push1) == HIGH){
   for(int a = 0; a < 10; a = a+1){
     Serial.println(a);
     pausa1
   }
  }
  if(digitalRead(push2) == HIGH){
   for(int b = 0; b < 10; b = b+1){
     Serial.println(b);
     pausa2
   }
  }
  if(digitalRead(push3) == HIGH){
   for(int c = 0; c < 10; c = c+1){
     Serial.println(c);
     pausa3
   }
  }
  if(without < 9){
    without = without+1;
    Serial.println(without);
    pausa4
  }
      else if(without > 8){
      without = 0;
        Serial.println(without);
        pausa4
  }
}
    