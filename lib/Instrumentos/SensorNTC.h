#ifndef NTC_h
#define NTC_h
#include "Arduino.h"
#include "IntInstrimentos.h"

class NTC
{
  public:
  float getTemperature(int lectura);
  float getTCelsius(float temperatura);
  float getCorrectedT(float temperatura);
  int createNTC(float A,float B,float C,float top,float V, float K,int R,int resol);
  private:
  float _A,_B,_C,_top,_V,_K;
  int _R,_resol;
  
};

#endif
