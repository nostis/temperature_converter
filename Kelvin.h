#pragma once
class Kelvin
{
private:
	double temp_in_Kelvin;

public:
	Kelvin(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toRankine();
	double toDelisle();
	double toNewton();
	double toReaumur();
	double toRomer();

//	~Kelvin();
};

