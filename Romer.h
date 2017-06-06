#pragma once
class Romer
{
private:
	double temp_in_Romer;

public:
	Romer(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toKelvin();
	double toRankine();
	double toDelisle();
	double toNewton();
	double toReaumur();

//	~Romer();
};

