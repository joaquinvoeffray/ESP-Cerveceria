#include <Arduino.h>
#include <class_instrumento>
#include <class_alarma>
#include <class_chek>
#define LED1 = D1
// put function declarations here:
int myFunction(int, int);
float medicion;

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(3, 4);
  pinMode (LED1,OUTPUT);

  }
 
void loop() {
  //control de que la planta esta en condiciones y en funcionamiento
  _check(aguamacerado,estado,0);
  _check(maserado,estado,0);
  _check(coccion,estado,0);
  //envio de alertas
  //Constructor de instrumento
  _instrumento::_instrumento(TemperaturaAguaInicial);
  //encender led a x temperatura
  medicion = getMedicion;
  
   if (medicion >= 30){
    digitalWrite (LED1,HIGH);
   }
else
  digitalWrite(LED1,LOW);
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}