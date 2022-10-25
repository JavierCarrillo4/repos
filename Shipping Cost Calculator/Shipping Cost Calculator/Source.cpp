/*
Section 9

	Shipping cost calculator
	
	Ask the user for package dimensions in inches
	length, width, height - these should be integers

	All dimensions must be 10 inches or less or we cannot ship it

	Base cost $2.50
	If package volume if greater than 100 cubic inches there is a 10% surcharge
	If package volume if greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int length{ 0 }, width{ 0 }, height{ 0 };
	double base_cost{ 2.50 };

	const int teir1_threshold{ 100 }; // volume
	const int teir2_threshold{ 500 }; // volume

	int max_dimension_length{ 10 }; // inches

	double teir1_surcharge{ 0.10 }; // 10% extra
	double teir2_surcharge{ 0.25 }; // 25% extra

	// all dimensions must 10 inches or less

	int package_volume{ 0 };

	cout << "Welcome the package cost calculator" << endl;
	cout << "Enter length, width and height of the package separated by spaces: ";
	cin >> length >> width >> height;
	cout << endl;

	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
	{
		cout << "Sorry, package rejected - dimensions exceeded" << endl << endl;
	}
	else
	{
		double package_cost{ 0 };
		package_volume = length * width * height;

		package_cost = base_cost;

		if (package_volume > teir2_threshold)
		{
			package_cost += package_cost * teir2_surcharge;
			cout << "Adding teir 2 surcharge" << endl << endl;
		}

		else if (package_volume > teir1_threshold)
		{
			package_cost += package_cost * teir1_surcharge;
			cout << "Adding teir 1 surcharge" << endl << endl;
		}

		cout << fixed << setprecision(2); // prints 2 decimal places only
		cout << "The volume of your package is: " << package_volume << endl;
		cout << "Yor package will cost $" << package_cost << " to ship " << endl;
	}

	return 0;
}