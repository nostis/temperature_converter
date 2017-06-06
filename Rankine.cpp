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
	return (temp_in_Rankine - 491.67) * (5 / 9);
}

double Rankine::toFahrenheit()
{
	return temp_in_Rankine - 459.67;
}

double Rankine::toKelvin()
{
	return temp_in_Rankine * (5 / 9);
}

double Rankine::toDelisle()
{
	return (671.67 - temp_in_Rankine) * (5 / 6);
}

double Rankine::toNewton()
{
	return (temp_in_Rankine - 491.67) * (11 / 60);
}

double Rankine::toReaumur()
{
	return (temp_in_Rankine - 491.67) * (4 / 9);
}

double Rankine::toRomer()
{
	return ((temp_in_Rankine - 491.67) * (7 / 24)) + 7.5;
}
