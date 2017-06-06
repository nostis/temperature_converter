#pragma once
class Reaumur
{
private:
	double temp_in_Reaumur;

public:
	Reaumur(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toKelvin();
	double toRankine();
	double toDelisle();
	double toNewton();
	double toRomer();

//	~Reaumur();
};

