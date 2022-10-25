//Relational Operators

#include <iostream>

using namespace std;

int main()
{
	int num1{ 0 }, num2{ 0 };

	cout << boolalpha;
	cout << "Enter 2 integers separaated by a space: ";

	cin >> num1 >> num2;

	cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
	cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
	cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
	cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl << endl;

	const int lower{ 10 };
	const int upper{ 20 };

	cout << "Enter an integer that is greater than " << lower << " : ";
	cin >> num1;
	cout << num1 << " > " << lower << " is " << (num1 > lower) << endl << endl;

	cout << "Enter an integer that is less than or equal to " << upper << " : ";
	cin >> num2;
	cout << num2 << " <= " << upper << " is " << (num2 <= upper) << endl << endl;



	return 0;
}