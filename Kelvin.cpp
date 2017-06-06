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
	return (temp_in_Kelvin * (9 / 5)) - 459.67;
}

double Kelvin::toRankine()
{
	return temp_in_Kelvin * (9 / 5);
}

double Kelvin::toDelisle()
{
	return (373.15 - temp_in_Kelvin) * (3 / 2);
}

double Kelvin::toNewton()
{
	return (temp_in_Kelvin - 273.15) * (4 / 5);
}

double Kelvin::toReaumur()
{
	return (temp_in_Kelvin - 273.15) * (4 / 5);
}

double Kelvin::toRomer()
{
	return ((temp_in_Kelvin - 273.15) * (21 / 40)) + 7.5;
}
