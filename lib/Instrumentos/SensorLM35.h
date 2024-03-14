#ifndef LM35_h
#define LM35_h

#include "Arduino.h"
#include "IntInstrimentos.h"

enum Unity { 
	CELCIUS, 
	KELVIN,
	FAHRENHEIT
};

class LM35 : public IntInstrumento  {

	public:
		LM35(int analogPin);
		double GetMeasure() override;
		double GetMeasure(Unity unity);

	private:
		int _analogPin;

};

#endif