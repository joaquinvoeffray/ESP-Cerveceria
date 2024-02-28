 class _instrumento{
    private: //atributos
    short Nombre;
    float medicion;
    int estado;

    public: //metodos
    _instrumento (short, float, int); //constructor 1
    void saveinfirebase(float);
    void Estado(short,float,int);
    int getMedicion();
    void settMedicion();
 };

 //constructor 1
 _instrumento::_instrumento(short _Nombre){
    nombre=_Nombre;
 }


int _instrumento::getMedicion(){        //retornamos el valor encapsulado del valor medido
     return medicion;
}


void _instrumento::settMedicion(float _Medicion){
    medicion = _Medicion;
}


//funsiones 
    void _instrumento::GuardarMedicion(){ //es de clase void, pertenece a la clase instrumento y se llama guardar medicion
      //ver como guardar datos a firebase
      saveinfirebase: medicion;
    }

    void _instrumento::VerificacionFunsionamiento(){
      //corroborar de alguna manera que el instrumento este midiendo bien
    }
