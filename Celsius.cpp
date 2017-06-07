#include "Celsius.h"



Celsius::Celsius(double v)
{
	temp_in_Celsius = v;
}

double Celsius::toFahrenheit()
{
	return (temp_in_Celsius * (9.0 / 5.0)) + 32.0;
}

double Celsius::toKelvin()
{
	return temp_in_Celsius + 273.15;
}

double Celsius::toRankine()
{
	return (temp_in_Celsius + 273.15) * (9.0 / 5.0);
}

double Celsius::toReaumur()
{
	return temp_in_Celsius * (4.0 / 5.0);
}

double Celsius::toRomer()
{
	return (temp_in_Celsius * (21.0 / 40.0)) + 7.5;
}

double Celsius::toDelisle()
{
	return (100 - temp_in_Celsius) * (3.0 / 2.0);
}

double Celsius::toNewton()
{
	return temp_in_Celsius * (33.0 / 100.0);
}


//Celsius::~Celsius()
//{
//}
