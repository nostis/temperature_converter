#include "Delisle.h"



Delisle::Delisle(double v)
{
	temp_in_Delisle = v;
}


//Delisle::~Delisle()
//{
//}

double Delisle::toCelsius()
{
	return 100 - (temp_in_Delisle * (2 / 3));
}

double Delisle::toFahrenheit()
{
	return 212 - (temp_in_Delisle * (6 / 5));
}

double Delisle::toKelvin()
{
	return 373.15 - (temp_in_Delisle * (2 / 3));
}

double Delisle::toRankine()
{
	return 671.67 - (temp_in_Delisle * (6 / 5));
}

double Delisle::toNewton()
{
	return 33 - (temp_in_Delisle * (11 / 50));
}

double Delisle::toReaumur()
{
	return 80 - (temp_in_Delisle * (8 / 15));
}

double Delisle::toRomer()
{
	return 60 - (temp_in_Delisle * (7 / 20));
}
