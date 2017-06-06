#pragma once
class Delisle
{
private:
	double temp_in_Delisle;

public:
	Delisle(double v = 0);

	double toCelsius();
	double toFahrenheit();
	double toKelvin();
	double toRankine();
	double toNewton();
	double toReaumur();
	double toRomer();

//	~Delisle();
};

