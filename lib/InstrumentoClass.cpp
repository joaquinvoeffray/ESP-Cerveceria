#include <Arduino.h>
#include "InstrumentoClass.h"

//constructor 1
 Instrumento::Instrumento(short ADCsensor,float Bd){
    _ADCsensor=ADCsensor;
    _Bd=Bd;
 }

//medicion 
int ADCvar=analogRead(_ADCsensor);
//retornamos el valor encapsulado del valor medido
int Instrumento::getMedicion(){        
     return medicion;
}

//funsiones 
    void Instrumento::GuardarMedicion(){ //es de clase void, pertenece a la clase instrumento y se llama guardar medicion
      //ver como guardar datos a firebase
      saveinfirebase: medicion;
    }

    void Instrumento::VerificacionFunsionamiento(){
      //corroborar de alguna manera que el instrumento este en funcinamiento, es decir que no este desconectado u/o apagado

    }
