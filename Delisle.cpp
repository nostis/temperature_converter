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
	return 100.0 - (temp_in_Delisle * (2.0 / 3.0));
}

double Delisle::toFahrenheit()
{
	return 212.0 - (temp_in_Delisle * (6.0 / 5.0));
}

double Delisle::toKelvin()
{
	return 373.15 - (temp_in_Delisle * (2.0 / 3.0));
}

double Delisle::toRankine()
{
	return 671.67 - (temp_in_Delisle * (6.0 / 5.0));
}

double Delisle::toNewton()
{
	return 33.0 - (temp_in_Delisle * (11.0 / 50.0));
}

double Delisle::toReaumur()
{
	return 80.0 - (temp_in_Delisle * (8.0 / 15.0));
}

double Delisle::toRomer()
{
	return 60.0 - (temp_in_Delisle * (7.0 / 20.0));
}
