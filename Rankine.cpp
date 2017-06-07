#include "Rankine.h"



Rankine::Rankine(double v)
{
	temp_in_Rankine = v;
}


//Rankine::~Rankine()
//{
//}

double Rankine::toCelsius()
{
	return ((temp_in_Rankine - 491.67)) * (5.0 / 9.0);
}

double Rankine::toFahrenheit()
{
	return temp_in_Rankine - 459.67;
}

double Rankine::toKelvin()
{
	return temp_in_Rankine * (5.0 / 9.0);
}

double Rankine::toDelisle()
{
	return (671.67 - temp_in_Rankine) * (5.0 / 6.0);
}

double Rankine::toNewton()
{
	return (temp_in_Rankine - 491.67) * (11.0 / 60.0);
}

double Rankine::toReaumur()
{
	return (temp_in_Rankine - 491.67) * (4.0 / 9.0);
}

double Rankine::toRomer()
{
	return ((temp_in_Rankine - 491.67) * (7.0 / 24.0)) + 7.5;
}
