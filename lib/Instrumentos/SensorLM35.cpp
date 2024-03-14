#include "Arduino.h"

#include "LM35.h"
//construtor del sensor

LM35::LM35(int analogPin)
{
	this->_analogPin = analogPin;
}

double LM35::GetMeasure()
{
	double value = analogRead(this->_analogPin);

	double celcius = (double(value) * ((5.0 / 1023.0) / 0.01));

	return celcius;
}

double LM35::getTemp(Unity unity)
{
	if (unity == FAHRENHEIT) {
		return ((this->getTemp() * 1.8) + 32.0);
	}
	if (unity == KELVIN) {
		return (this->getTemp() + 273.15);
	}
	if (unity == CELCIUS) {
		return this->getTemp();
	}
}