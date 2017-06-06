#include "Romer.h"



Romer::Romer(double v)
{
	temp_in_Romer = v;
}


//Romer::~Romer()
//{
//}

double Romer::toCelsius()
{
	return (temp_in_Romer - 7.5) * (40 / 21);
}

double Romer::toFahrenheit()
{
	return ((temp_in_Romer - 7.5) * (24 / 7)) + 32;
}

double Romer::toKelvin()
{
	return ((temp_in_Romer - 7.5) * (40 / 21)) + 273.15;
}

double Romer::toRankine()
{
	return ((temp_in_Romer - 7.5) * (24 / 7)) + 491.67;
}

double Romer::toDelisle()
{
	return (60 - temp_in_Romer) * (20 / 7);
}

double Romer::toNewton()
{
	return (temp_in_Romer - 7.5) * (22 / 35);
}

double Romer::toReaumur()
{
	return (temp_in_Romer - 7.5) * (32 / 21);
}
