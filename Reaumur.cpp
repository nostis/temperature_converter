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
	return temp_in_Reaumur * (5 / 4);
}

double Reaumur::toFahrenheit()
{
	return (temp_in_Reaumur * (9 / 4)) + 32;
}

double Reaumur::toKelvin()
{
	return (temp_in_Reaumur * (5 / 4)) + 273.15;
}

double Reaumur::toRankine()
{
	return (temp_in_Reaumur * (9 / 4)) + 491.67;
}

double Reaumur::toDelisle()
{
	return (80 - temp_in_Reaumur) * (15 / 8);
}

double Reaumur::toNewton()
{
	return temp_in_Reaumur * (33 / 80);
}

double Reaumur::toRomer()
{
	return (temp_in_Reaumur * (21 / 32)) + 7.5;
}
