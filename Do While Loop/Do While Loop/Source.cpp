/*
Section 9
Do-while
Simple Menu Example
*/

#include <iostream>

using namespace std;

int main()
{

	char selection{};

	do
	{
		cout << endl;
		cout << "--------------------------" << endl;
		
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q. Quit" << endl;
		cout << endl;

		cout << "Enter your selection: ";
		cin >> selection;

		if (selection == '1')
		{
			cout << "You chose 1 - doing this" << endl;
		}

		else if (selection == '2')
		{
			cout << "You chose 2 - doing that" << endl;
		}

		else if (selection == '3')
		{
			cout << "You chose 3 - doing something else" << endl;
		}

		else if (selection == 'q' || selection == 'Q')
		{
			cout << "Goodbye..." << endl;
		}
		else
		{
			cout << "Unknown option -- try again..." << endl;
		}

	} while (selection != 'q' && selection != 'Q');	// If || is used instead of && it will be wrong because condition will be true on one side and will loop again

	// This menu can be recreated with a switch statement

	cout << endl;
	cout << "--------------------------" << endl;

	cout << "1. Do this" << endl;
	cout << "2. Do that" << endl;
	cout << "3. Do something else" << endl;
	cout << "Q. Quit" << endl;
	cout << endl;

	cout << "Enter your selection: ";
	cin >> selection;

	switch (selection) // Note this will run only once
	{
	case '1':
		cout << "You chose 1 - doing this" << endl;
	case '2':
		cout << "You chose 2 - doing that" << endl;
	case '3':
		cout << "You chose 3 - doing something else" << endl;
	case 'q':
	case 'Q':
		cout << "Goodbye..." << endl;
		break;
	default:
		cout << "Unknown option -- try again..." << endl;

	}

	cout << endl;

	return 0;
}