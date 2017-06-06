#pragma once
class Newton
{
private:
	double temp_in_Newton;

public:
	Newton(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toKelvin();
	double toRankine();
	double toDelisle();
	double toReaumur();
	double toRomer();

//	~Newton();
};

