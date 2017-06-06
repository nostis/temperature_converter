#pragma once
class Celsius
{
private:
	double temp_in_Celsius;

public:
	Celsius(double v = 0);

	double toFahrenheit();
	double toKelvin();
	double toDelisle();
	double toNewton();
	double toRankine();
	double toReaumur();
	double toRomer();

//	~Celsius();
};

