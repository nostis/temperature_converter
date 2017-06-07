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
	return (temp_in_Fahrenheit - 32.0) * (5.0 / 9.0);
}

double Fahrenheit::toKelvin()
{
	return (temp_in_Fahrenheit + 459.67) * (5.0 / 9.0);
}

double Fahrenheit::toRankine()
{
	return temp_in_Fahrenheit + 459.67;
}

double Fahrenheit::toDelisle()
{
	return (212.0 - temp_in_Fahrenheit) * (5.0 / 6.0);
}

double Fahrenheit::toNewton()
{
	return (temp_in_Fahrenheit - 32.0) * (11.0 / 60.0);
}

double Fahrenheit::toReaumur()
{
	return (temp_in_Fahrenheit - 32.0) * (4.0 / 9.0);
}

double Fahrenheit::toRomer()
{
	return ((temp_in_Fahrenheit - 32.0) * (7.0 / 24.0)) + 7.5;
}
