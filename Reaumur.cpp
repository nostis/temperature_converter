#include "Reaumur.h"



Reaumur::Reaumur(double v)
{
	temp_in_Reaumur = v;
}


//Reaumur::~Reaumur()
//{
//}

double Reaumur::toCelsius()
{
	return temp_in_Reaumur * (5.0 / 4.0);
}

double Reaumur::toFahrenheit()
{
	return (temp_in_Reaumur * (9.0 / 4.0)) + 32.0;
}

double Reaumur::toKelvin()
{
	return (temp_in_Reaumur * (5.0 / 4.0)) + 273.15;
}

double Reaumur::toRankine()
{
	return (temp_in_Reaumur * (9.0 / 4.0)) + 491.67;
}

double Reaumur::toDelisle()
{
	return (80.0 - temp_in_Reaumur) * (15.0 / 8.0);
}

double Reaumur::toNewton()
{
	return temp_in_Reaumur * (33.0 / 80.0);
}

double Reaumur::toRomer()
{
	return (temp_in_Reaumur * (21.0 / 32.0)) + 7.5;
}
