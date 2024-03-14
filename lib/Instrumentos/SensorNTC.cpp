#include "Arduino.h"
#include "NTC.h"
#include "IntInstrimentos.h"


float NTC::getTCelsius(float temperatura){
	float corrected=0;
	corrected=temperatura-273.15;//Changes Kelvin into Celsius
	return corrected;
}

 int NTC::createNTC(float A,float B,float C,float top,float V, float K,int R,int resol){
 	//Saves all the NTC parameters in private variables.
	_A=A;
	_B=B;
	_C=C;
	_top=top;
	_V=V;
	_K=K;
	_R=R;
	_resol=resol;
	return 0;//Returns 0 if success
}

float NTC::getCorrectedT(float temperatura){
	float corrected=0;
	corrected=temperatura-(_V*_V)/(_K*_R)*1000;
	return corrected;
	/*
	This corrects failures because of self-heating
	_V->Is the voltage suministrated by powersource
	_K->dissipation factor in mW/C IMPORTANT: check your device's datasheet for accurate results
	_R->Resistor in Ohms
	*/
}
float NTC::getTemperature(int lectura){
float v=0, r=0,T=0;
  v=lectura*_top/(pow(2,_resol)-1);
  r=(_R*v)/(5.00-v);
  T = (1.0 / (_A + _B*log(r) + _C*log(r)*log(r)*log(r)));
  /*
  This is the most important function as it calculates the temperature from the device's voltage
  
  _A _B _C are constants calculated Steinhart�Hart equation. To get all of them you must know at least 3 operation points.
  Then you must apply the following formula:
  ####################################
  #  An=1/(Tn*(1+ln(Rn)+ln(Rn)^3));  #
  ####################################
  Rn is the resistance linked to the temperature Tn
  
  _R is the resistor conected to your device
  _resol is the resolution of your arduino. If you haven't use analogResolution, leave in 10.
  top is the analogReference value. If you haven't used analogReference, leave it in 5.00 V
  
  Units used are volts, Ohms, C�(in A,B and C) and K on the final temperature
  */
  return T;	
}