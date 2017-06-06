#include "Celsius.h"



Celsius::Celsius(double v)
{
	temp_in_Celsius = v;
}

double Celsius::toFahrenheit()
{
	return (temp_in_Celsius * (9 / 5)) + 32;
}

double Celsius::toKelvin()
{
	return temp_in_Celsius + 273.15;
}

double Celsius::toRankine()
{
	return (temp_in_Celsius + 273.15) * (9 / 5);
}

double Celsius::toReaumur()
{
	return temp_in_Celsius * (4 / 5);
}

double Celsius::toRomer()
{
	return (temp_in_Celsius * (21 / 40)) + 7.5;
}

double Celsius::toDelisle()
{
	return (100 - temp_in_Celsius) * (3 / 2);
}

double Celsius::toNewton()
{
	return temp_in_Celsius * (33 / 100);
}


//Celsius::~Celsius()
//{
//}
