/*  todos los sensores deben tener como minimo estosparametros 
    por este motivo la clase es totalmente virtual para crear una plantilla/interfaz 
    de programacion generica para cada instrumento*/
class IntInstrumento{
    public: 

    virtual void TensionEntrada(float)=0;
    virtual double GetMeasure(void)=0;
    virtual void PinIO(int,int)=0;

  //void IntInstrumento::IntInstrumento();

    private:
};
