/*
	Mixed Type Expressions

	Ask the user to enter 3 integers
	Calculate the sum of the integers then
	Calculate the average of the 3 integers

	Display the 3 integers entered
	The sum of the 3 integers
	The average of the integers
*/

#include <iostream>

using namespace std;

int main()
{
	int total{ 0 };
	int num1{ 0 }, num2{ 0 }, num3{ 0 };
	const int count{ 3 };

	cout << "Enter 3 integers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	cout << endl;

	total = num1 + num2 + num3;

	double average{ 0.0 };

	average = static_cast<double>(total) / count;
//	average = (double)total / count; Old-Style

	cout << "The 3 numbers were: " << num1 << ',' << num2 << ',' << num3 << endl;

	cout << "The sum of the numbers is: " << total << endl;

	cout << "The average of the numbers is: " << average << endl;



	return 0;
}