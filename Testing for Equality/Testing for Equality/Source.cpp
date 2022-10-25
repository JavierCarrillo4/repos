#include <iostream>

using namespace std;

int main()
{
	bool equal_result{ false };
	bool not_equal_result{ false };

	int num1{ 0 }, num2{ 0 };

	cout << boolalpha;	// Will display true/false instead of 1/0 for booleans

	cout << "Enter two integers separated by a space: ";
	cin >> num1 >> num2;

	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	
	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl << endl;

	/*
	**************************************************************************************
	
	Comparing characters
	
	**************************************************************************************
	*/

	char char1{}, char2{};

	cout << "Enter two characters separated by a space: ";
	cin >> char1 >> char2;

	equal_result = (char1 == char2);
	not_equal_result = (char1 != char2);

	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl << endl;

	/*
	**************************************************************************************

	Comparing double types (precision types)

	**************************************************************************************
	*/

	double double1{}, double2{};

	cout << "Enter two doubles separated by a space: ";
	cin >> double1 >> double2;

	// if one of the doubles is one whole number .99999999999 (ex. 10.9999999999) before the other double and are compared the program will say they are equal
	// Ex. 12 == 11.9999999999999999999999 (they will be equal)

	equal_result = (double1 == double2);
	not_equal_result = (double1 != double2);

	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl << endl;

	/*
	**************************************************************************************

	Comparing mixed types

	**************************************************************************************
	*/

	cout << "Enter an integer and a double separated by a space: ";
	cin >> num1 >> double1;

	equal_result = (num1 == double1);
	not_equal_result = (num1 != double1);

	cout << "Comparison result (equals): " << equal_result << endl;
	cout << "Comparison result (not equals): " << not_equal_result << endl << endl;

	return 0;
}