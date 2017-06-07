#include "Kelvin.h"



Kelvin::Kelvin(double v)
{
	temp_in_Kelvin = v;
}


//Kelvin::~Kelvin()
//{
//}

double Kelvin::toCelsius()
{
	return temp_in_Kelvin - 273.15;
}

double Kelvin::toFahrenheit()
{
	return (temp_in_Kelvin * (9.0 / 5.0)) - 459.67;
}

double Kelvin::toRankine()
{
	return temp_in_Kelvin * (9.0 / 5.0);
}

double Kelvin::toDelisle()
{
	return (373.15 - temp_in_Kelvin) * (3.0 / 2.0);
}

double Kelvin::toNewton()
{
	return (temp_in_Kelvin - 273.15) * (4.0 / 5.0);
}

double Kelvin::toReaumur()
{
	return (temp_in_Kelvin - 273.15) * (4.0 / 5.0);
}

double Kelvin::toRomer()
{
	return ((temp_in_Kelvin - 273.15) * (21.0 / 40.0)) + 7.5;
}
