#pragma once
class Fahrenheit
{
private:
	double temp_in_Fahrenheit;

public:
	Fahrenheit(double v = 0);

	double toCelsius();
	double toKelvin();
	double toRankine();
	double toDelisle();
	double toNewton();
	double toReaumur();
	double toRomer();

//	~Fahrenheit();
};

