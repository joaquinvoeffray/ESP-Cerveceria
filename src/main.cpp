#include <Arduino.h>
#include <class_instrumento>
#include <class_alarma>
#include <class_chek>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(3, 4);
 
  }
 
void loop() {
  //control de que la planta esta en condiciones y en funcionamiento
  _check(aguamacerado,estado,0);
  _check(maserado,estado,0);
  _check(coccion,estado,0);
  //envio de alertas



}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}