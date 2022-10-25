/*
Logical Operators

*/


#include <iostream>

using namespace std;

int main()
{
	int num{ 0 };
	const int lower{ 10 };
	const int upper{ 20 };

	cout << boolalpha;

	// Determine if an entered integer is between two other integers
	// Assume lower < upper

	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
	cin >> num;
	cout << endl;

	bool within_bounds{ false };

	within_bounds = (num > lower && num < upper);

	cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl << endl;

	// Determine if an entered integer is outside of two other integers
	// Assume lower < upper

	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
	cin >> num;
	cout << endl;

	bool outside_bounds{ false };

	outside_bounds = (num < lower || num > upper);

	cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl << endl;

	// Determine if an entered integer is exactly on the boundary
	// Assume lower < upper

	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
	cin >> num;
	cout << endl;

	bool on_bounds{ false };

	on_bounds = (num == lower || num == upper);

	cout << num << " is one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl << endl;

	// Determine if you need to wear a coat based on temperature and wind speed

	bool wear_coat{ false };

	double temperature{ 0 };
	int wind_speed{ 0 };

	const int wind_speed_for_coat{ 25 };	// wind over this value requires a coat
	const double temperature_for_coat{ 45 };// temperature below this value requires a coat

	cout << "Enter the current temperature in (F): ";
	cin >> temperature;

	cout << "Enter wind speed in (mph): ";
	cin >> wind_speed;

	//Require a coat if BOTH windspeed is too high OR temperature is too low

	wear_coat = (temperature < temperature_for_coat) || (wind_speed > wind_speed_for_coat);

	cout << "Do you need to wear a coat using OR? " << wear_coat << endl << endl;

	//Require a coat if BOTH windspeed is too high AND temperature is too low
	wear_coat = (temperature < temperature_for_coat) && (wind_speed > wind_speed_for_coat);

	cout << "Do you need to wear a coat using AND? " << wear_coat << endl << endl;

	return 0;
}