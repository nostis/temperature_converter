#include <iostream>
#include <conio.h>
#include "Celsius.h"
#include "Delisle.h"
#include "Fahrenheit.h"
#include "Kelvin.h"
#include "Newton.h"
#include "Rankine.h"
#include "Reaumur.h"
#include "Romer.h" 

int main()
{
	int choose;
	double temperature;

	std::cout << "What temperature would you like to convert?" << std::endl;
	std::cout << "1. Celsius " << "\t" << "2. Delisle" << std::endl;
	std::cout << "3. Fahrenheit " << "\t" << "4. Kelvin" << std::endl;
	std::cout << "5. Newton " << "\t" << "6. Rankine" << std::endl;
	std::cout << "7. Reaumur " << "\t" << "8. Romer" << std::endl;

	std::cin >> choose;

	while (!(choose >= 1 && choose <= 8)) //if choose will be different
	{
		std::cout << "Enter the number in the range" << std::endl;
		std::cin >> choose;
	} 

	std::cout << "Enter the temperature" << std::endl;
	std::cin >> temperature;

	std::cout.precision(2); //to show e.g 2.00 instead 2.004123
	std::cout.setf(std::ios::showpoint); //to show insignificant zero and dot
	std::cout.setf(std::ios::fixed); //plain notation instead scientific


	switch (choose)
	{
	case 1:
		{
			Celsius celsius(temperature);
			std::cout << "In Delisle: " << celsius.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << celsius.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << celsius.toKelvin() << std::endl;
			std::cout << "In Newton: " << celsius.toNewton() << std::endl;
			std::cout << "In Rankine: " << celsius.toRankine() << std::endl;
			std::cout << "In Reaumur: " << celsius.toReaumur() << std::endl;
			std::cout << "In Romer: " << celsius.toRomer() << std::endl;
			break;
		}
	case 2:
		{
			Delisle delisle(temperature);
			std::cout << "In Celsius: " << delisle.toCelsius() << std::endl;
			std::cout << "In Fahrenheit: " << delisle.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << delisle.toKelvin() << std::endl;
			std::cout << "In Newton: " << delisle.toNewton() << std::endl;
			std::cout << "In Rankine: " << delisle.toRankine() << std::endl;
			std::cout << "In Reaumur: " << delisle.toReaumur() << std::endl;
			std::cout << "In Romer: " << delisle.toRomer() << std::endl;
			break;
		}
	case 3:
		{
			Fahrenheit fahrenheit(temperature);
			std::cout << "In Celsius: " << fahrenheit.toCelsius() << std::endl;
			std::cout << "In Delisle: " << fahrenheit.toDelisle() << std::endl;
			std::cout << "In Kelvin: " << fahrenheit.toKelvin() << std::endl;
			std::cout << "In Newton: " << fahrenheit.toNewton() << std::endl;
			std::cout << "In Rankine: " << fahrenheit.toRankine() << std::endl;
			std::cout << "In Reaumur: " << fahrenheit.toReaumur() << std::endl;
			std::cout << "In Romer: " << fahrenheit.toRomer() << std::endl;
			break;
		}
	case 4:
		{
			Kelvin kelvin(temperature);
			std::cout << "In Celsius: " << kelvin.toCelsius() << std::endl;
			std::cout << "In Delisle: " << kelvin.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << kelvin.toFahrenheit() << std::endl;
			std::cout << "In Newton: " << kelvin.toNewton() << std::endl;
			std::cout << "In Rankine: " << kelvin.toRankine() << std::endl;
			std::cout << "In Reaumur: " << kelvin.toReaumur() << std::endl;
			std::cout << "In Romer: " << kelvin.toRomer() << std::endl;
			break;
		}
	case 5:
		{
			Newton newton(temperature);
			std::cout << "In Celsius: " << newton.toCelsius() << std::endl;
			std::cout << "In Delisle: " << newton.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << newton.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << newton.toKelvin() << std::endl;
			std::cout << "In Rankine: " << newton.toRankine() << std::endl;
			std::cout << "In Reaumur: " << newton.toReaumur() << std::endl;
			std::cout << "In Romer: " << newton.toRomer() << std::endl;
			break;
		}
	case 6:
		{
			Rankine rankine(temperature);
			std::cout << "In Celsius: " << rankine.toCelsius() << std::endl;
			std::cout << "In Delisle: " << rankine.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << rankine.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << rankine.toKelvin() << std::endl;
			std::cout << "In Newton: " << rankine.toNewton() << std::endl;
			std::cout << "In Reaumur: " << rankine.toReaumur() << std::endl;
			std::cout << "In Romer: " << rankine.toRomer() << std::endl; 
			break;
		}
	case 7:
		{
			Reaumur reaumur(temperature);
			std::cout << "In Celsius: " << reaumur.toCelsius() << std::endl;
			std::cout << "In Delisle: " << reaumur.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << reaumur.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << reaumur.toKelvin() << std::endl;
			std::cout << "In Newton: " << reaumur.toNewton() << std::endl;
			std::cout << "In Rankine: " << reaumur.toRankine() << std::endl;
			std::cout << "In Romer: " << reaumur.toRomer() << std::endl;
			break;
		}
	case 8:
		{
			Romer romer(temperature);
			std::cout << "In Celsius: " << romer.toCelsius() << std::endl;
			std::cout << "In Delisle: " << romer.toDelisle() << std::endl;
			std::cout << "In Fahrenheit: " << romer.toFahrenheit() << std::endl;
			std::cout << "In Kelvin: " << romer.toKelvin() << std::endl;
			std::cout << "In Newton: " << romer.toNewton() << std::endl;
			std::cout << "In Rankine: " << romer.toRankine() << std::endl;
			std::cout << "In Reaumur: " << romer.toReaumur() << std::endl;
			break;
		}
	} 


	getch();

	return 0;
}