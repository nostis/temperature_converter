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
	return (temp_in_Romer - 7.5) * (40.0 / 21.0);
}

double Romer::toFahrenheit()
{
	return ((temp_in_Romer - 7.5) * (24.0 / 7.0)) + 32.0;
}

double Romer::toKelvin()
{
	return ((temp_in_Romer - 7.5) * (40.0 / 21.0)) + 273.15;
}

double Romer::toRankine()
{
	return ((temp_in_Romer - 7.5) * (24.0 / 7.0)) + 491.67;
}

double Romer::toDelisle()
{
	return (60.0 - temp_in_Romer) * (20.0 / 7.0);
}

double Romer::toNewton()
{
	return (temp_in_Romer - 7.5) * (22.0 / 35.0);
}

double Romer::toReaumur()
{
	return (temp_in_Romer - 7.5) * (32.0 / 21.0);
}
