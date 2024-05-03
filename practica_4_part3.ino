//Definimos los pines y delay´s
#define sw1 2
#define sw2 3
#define sw3 4
#define sw4 5
#define a 6
#define b 7
#define c 8
#define d 9
#define e 10
#define f 11
#define g 12
#define led1 13
#define led2 A0
#define led3 A1
#define led4 A2
#define velocidad1 delay(500);
#define pausa delay(2000);  
//Declaramos el estado de los pines e invocamos el monitor serial
void setup(){
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(sw3, INPUT);
  pinMode(sw4, INPUT);
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}
//Iniciamos a realizar las instruccones de la práctica
void loop(){
  //Hacemos la instruccion 1, utilizamos una condicion para que lo realice cuando lo necesitemos
  if(digitalRead(sw1)==LOW){
    Serial.println("Practica 4 - Steven Sicajan");
    pausa
  }
  //Instruccion 2
  if(digitalRead(sw2)==LOW){
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
      digitalWrite(led4, LOW);
      digitalWrite(led4, HIGH);
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
    //Instrucción 3
  if(digitalRead(sw3)==LOW){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    pausa
      digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    pausa
      digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    pausa
      digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    pausa
      digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    pausa
      digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    pausa
  }
  //Instruccion 4
  //En ambas condiciones requerimos que 2 cosas se cumplan, por ello el uso de "&&"
  if (digitalRead(sw1) == LOW  && digitalRead(sw3) == LOW) { 
    Serial.println("Gracias por su atencion");
    velocidad1
  }
  if (digitalRead(sw2) == LOW  && digitalRead(sw4) == LOW) { 
    Serial.println("Gracias por su atencion");
    velocidad1
  }
}