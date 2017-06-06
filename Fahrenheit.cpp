#include "Fahrenheit.h"



Fahrenheit::Fahrenheit(double v)
{
	temp_in_Fahrenheit = v;
}


//Fahrenheit::~Fahrenheit()
//{
//}

double Fahrenheit::toCelsius()
{
	return (temp_in_Fahrenheit - 32) * (5 / 9);
}

double Fahrenheit::toKelvin()
{
	return (temp_in_Fahrenheit + 459.67) * (5 / 9);
}

double Fahrenheit::toRankine()
{
	return temp_in_Fahrenheit + 459.67;
}

double Fahrenheit::toDelisle()
{
	return (212 - temp_in_Fahrenheit) * (5 / 6);
}

double Fahrenheit::toNewton()
{
	return (temp_in_Fahrenheit - 32) * (11 / 60);
}

double Fahrenheit::toReaumur()
{
	return (temp_in_Fahrenheit - 32) * (4 / 9);
}

double Fahrenheit::toRomer()
{
	return ((temp_in_Fahrenheit - 32) * (7 / 24)) + 7.5;
}
