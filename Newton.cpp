#include "Newton.h"



Newton::Newton(double v)
{
	temp_in_Newton = v;
}


//Newton::~Newton()
//{
//}

double Newton::toCelsius()
{
	return temp_in_Newton * (100.0 / 33.0);
}

double Newton::toFahrenheit()
{
	return (temp_in_Newton * (60.0 / 11.0)) + 32.0;
}

double Newton::toKelvin()
{
	return (temp_in_Newton * (100.0 / 33.0)) + 273.15;
}

double Newton::toRankine()
{
	return (temp_in_Newton * (60.0 / 11.0)) + 491.67;
}

double Newton::toDelisle()
{
	return (33.0 - temp_in_Newton) * (50.0 / 11.0);
}

double Newton::toReaumur()
{
	return temp_in_Newton * (80.0 / 33.0);
}

double Newton::toRomer()
{
	return (temp_in_Newton * (35.0 / 22.0)) + 7.5;
}
