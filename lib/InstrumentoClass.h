 //agregar las librerias que sean necesarias.

#ifndef InstrumentoClass_h
#define InstrumentoClass.h

 class Instrumento{
    private: //atributos
      //baudios a lo que el sensor se debe inicializar
      float _Bd;
      //pin que utiliza el sensor como entrada
      _ADCsensor;
      //valor de inicializacion del instrumento 
      dht.begin(Bd);
      //tiempo en que se midio la ultima vez (por si el sensor necesita un tiempo entre medicion y medicion)
      float timeSensor;

    public: //metodos
    float medicion;
    int estado;
    //tendria que guardar el valor medido en una base de datos (ver la opcion de hacerlo en otra clase)
    void saveinfirebase(float); 
    //retorna un valor para reconocer si esta activo o inactivo.
    int Estado();
    //retorna la medicion del sensor
    float getMedicion();
 };

 
#endif