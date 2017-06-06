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
	return temp_in_Newton * (100 / 33);
}

double Newton::toFahrenheit()
{
	return (temp_in_Newton * (60 / 11)) + 32;
}

double Newton::toKelvin()
{
	return (temp_in_Newton * (100 / 33)) + 273.15;
}

double Newton::toRankine()
{
	return (temp_in_Newton * (60 / 11)) + 491.67;
}

double Newton::toDelisle()
{
	return (33 - temp_in_Newton) * (50 / 11);
}

double Newton::toReaumur()
{
	return temp_in_Newton * (80 / 33);
}

double Newton::toRomer()
{
	return (temp_in_Newton * (35 / 22)) + 7.5;
}
