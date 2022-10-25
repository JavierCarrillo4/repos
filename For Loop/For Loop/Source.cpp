/*
Section 9
For Loop
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	for (int i{ 1 }; i <= 10; ++i)
	{
		cout << i << endl;
	}

	cout << endl;

	for (int i{ 1 }; i <= 10; i += 2)
	{
		cout << i << endl;
	}

	cout << endl;

	for (int i{ 10 }; i > 0; --i)
	{
		cout << i << endl;
	}
	cout << "Blastoff!" << endl;


	cout << endl;

	for (int i{ 10 }; i <= 100; i += 10)
	{
		if (i % 15 == 0)
		{
			cout << i << endl;
		}
	}

	cout << endl;

	for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
	{
		cout << i << " + " << j << " = " << (i + j) << endl;
	}

	cout << endl;

	for (int i{ 1 }; i <= 100; ++i) // Here we used the if else statement
	{
		cout << i;

		if (i % 10 == 0)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}

	cout << endl;

	for (int i{ 1 }; i <= 100; ++i)
	{
		cout << i;

		cout << ((i % 10 == 0) ? "\n" : " "); // Here we used the conditional statement
	}

	cout << endl;

	vector <int> nums{ 10, 20, 30, 40, 50 };
	for (int  i{ 0 }; i < nums.size(); ++i) //	May cause an error in other IDEs because it is comparing an int (i) with an unsigned int {nums.size)
	{
		cout << nums.at(i) << endl;
	}

	cout << endl;


	return 0;
}