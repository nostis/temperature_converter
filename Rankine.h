#pragma once
class Rankine
{
private:
	double temp_in_Rankine;

public:
	Rankine(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toKelvin();
	double toDelisle();
	double toNewton();
	double toReaumur();
	double toRomer();

//	~Rankine();
};

