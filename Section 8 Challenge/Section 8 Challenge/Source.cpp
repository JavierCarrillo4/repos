/*
Section 8

	For this program I will be using US dollars and cents.

	Write a program that asks the user to enter the following:
	An integer representing the number of of cents

	You may assume that the number of cents entered is greater than or equal to zero

	The program should then display how to provide the change to the user.

	In the US:
	1 dollar is 100 cents
	1 quarter is 25 cents
	1 dime is 10 cents
	1 nickel is 5 cents
	1 penny is 1 cent.

	Here is sample run:

	Enter amount in cents: 92

	You can provide this change as follows:
	dollars: 0
	quarters: 3
	dimes: 1
	nickels: 1
	pennies: 2

	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!
*/

#include <iostream>

using namespace std;

int main()
{
	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };
	const int penny_value{ 1 };

	int cents{ 0 }, dollars_change{ 0 }, quarters_change{ 0 }, dimes_change{ 0 }, nickels_change{ 0 }, pennies_change{ 0 }, remainder{ 0 };
	double total_amount{ 0.00 };

	cout << "Enter amount in cents: ";
	cin >> cents;

	total_amount = cents * 0.01;

	cout << "You entered " << total_amount << endl << endl;

	dollars_change = cents / dollar_value;
	remainder = cents - (dollars_change * dollar_value);

	quarters_change = remainder / quarter_value;
	remainder = remainder - (quarters_change * quarter_value);

	dimes_change = remainder / dime_value;
	remainder = remainder - (dimes_change * dime_value);

	nickels_change = remainder / nickel_value;
	remainder = remainder - (nickels_change * nickel_value);

	pennies_change = remainder;

	cout << "You can provide change as follows: " << endl;
	cout << "dollars: " << dollars_change << endl;
	cout << "quarters: " << quarters_change << endl;
	cout << "dimes: " << dimes_change << endl;
	cout << "nickels: " << nickels_change << endl;
	cout << "pennies: " << pennies_change << endl;

	/*-------------------------------------------------------
	Solution using the modulo operator
	-------------------------------------------------------*/
	remainder = dollars_change = quarters_change = dimes_change = nickels_change = pennies_change = 0; // reset everything to zero

	dollars_change = cents / dollar_value;
	remainder = cents % dollar_value;

	quarters_change = remainder / quarter_value;
	remainder %= quarter_value;

	dimes_change = remainder / dime_value;
	remainder %= dime_value;

	nickels_change = remainder / nickel_value;
	remainder %= nickel_value;

	pennies_change = remainder;

	cout << "You can provide change as follows: " << endl;
	cout << "dollars: " << dollars_change << endl;
	cout << "quarters: " << quarters_change << endl;
	cout << "dimes: " << dimes_change << endl;
	cout << "nickels: " << nickels_change << endl;
	cout << "pennies: " << pennies_change << endl;

	return 0;
}