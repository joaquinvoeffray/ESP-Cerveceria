 //agregar las librerias que sean necesarias.

 class _instrumento{
    private: //atributos
      //baudios a lo que el sensor se debe inicializar
      float Bd;
      //pin que utiliza el sensor

      //valor de inicializacion del instrumento
      dht.begin(Bd);

      //tiempo en que se midio la ultima vez (por si el sensor necesita un tiempo entre medicion y medicion)
      float timeSensor;
    public: //metodos
    short Nombre;
    float medicion;
    int estado;
    //tendria que guardar el valor medido en una base de datos (ver la opcion de hacerlo en otra clase)
    void saveinfirebase(float); 

    //retorna un valor para reconocer si esta activo o inactivo.
    int Estado(); 

    //retorna la medicion del sensor
    float getMedicion();

    _instrumento (short); //constructor 1 // contruimos el sensor con solo el nombre 
 };

 //constructor 1
 _instrumento::_instrumento(short _Nombre){
    nombre=_Nombre;
 }

//retornamos el valor encapsulado del valor medido
int _instrumento::getMedicion(){        
     return medicion;
}

//funsiones 
    void _instrumento::GuardarMedicion(){ //es de clase void, pertenece a la clase instrumento y se llama guardar medicion
      //ver como guardar datos a firebase
      saveinfirebase: medicion;
    }

    void _instrumento::VerificacionFunsionamiento(){
      //corroborar de alguna manera que el instrumento este en funcinamiento, es decir que no este desconectado u/o apagado

    }
