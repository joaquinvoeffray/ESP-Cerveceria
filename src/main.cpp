#include <Arduino.h>
#include <sensorLM35.h>

//#include <class_alarma>
//#include <class_chek>


#define LED1 4

LM35 STAguaIngreso(2);

// put function declarations here:
int myFunction(int, int);
double medicion;
//Constructor de instrumento

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(3, 4);
  pinMode (LED1,OUTPUT);
  
 

  }
 
void loop() {
  
  //encender led a x temperatura
  medicion = STAguaIngreso.GetMeasure();
  
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