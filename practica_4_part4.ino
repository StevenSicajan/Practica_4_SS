#define push1 2
#define push2 3
#define tiempo delay(500);

int numero = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Presiona un interruptor");
  Serial.println(" 1. Ascendente");
  Serial.println(" 2. Descendente");
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
}
void loop(){
  if(digitalRead(push1) == HIGH){
    for(int subida = 0; subida < 100; subida++){
   Serial.println(subida);
      tiempo
    }
  }
  if(digitalRead(push2) == HIGH){
    for(int bajada = 99; bajada > -1; bajada--){
    Serial.println(bajada);
      tiempo
    }
  }
  if(numero > 99){
      numero = 1;
    Serial.println(numero);
    
  }
  if(numero < 0){
    numero = 99;
    Serial.println(numero);
    
  }
}  