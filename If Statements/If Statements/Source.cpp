// Section 9
// If Statements

#include <iostream>

using namespace std;

int main()
{
	int num{ 0 };
	const int min{ 10 };
	const int max{ 100 };

	cout << "Enter a number between " << min << " and " << max << ": ";
	cin >> num;
	cout << endl;

	if (num >= min)
	{
		cout << "======================= if statement 1 =========================" << endl;
		cout << num << " is greater than " << min << endl;

		int diff{ num - min };
		cout << num << " is " << diff << " greater than or equal to " << min << endl << endl;
	}

	if (num <= max)
	{
		cout << "======================= if statement 2 =========================" << endl;
		cout << num << " is less than " << max << endl;

		int diff{ max - num };
		cout << num << " is " << diff << " less than or equal to " << max << endl << endl;
	}

	if (num >= min && num <= max)
	{
		cout << "======================= if statement 3 =========================" << endl;
		cout << num << " is in range " << endl;

		cout << "This means statements 1 and 2 must also display!!" << endl << endl;
	}

	if (num == min || num == max)
	{
		cout << "======================= if statement 4 =========================" << endl;
		cout << num << " is right on a boundary " << endl;

		cout << "This means all 4 statements display " << endl;
	}

	return 0;
}