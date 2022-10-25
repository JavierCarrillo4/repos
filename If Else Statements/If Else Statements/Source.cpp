#include <iostream>

using namespace std;

int main()
{
	int num{};
	const int target{ 10 };

	cout << "Enter a number and I'll compare it to " << target << ": ";
	cin >> num;
	cout << endl;

	if (num >= target)
	{
		cout << "==============================" << endl;
		cout << num << " is greater than or equal to " << target << endl;

		int diff{ num - target };
		cout << num << " is " << diff << " greater than " << target << endl << endl;
	}

	// else if statements would go here if there was a chronological order for the specific program

	else
	{
		cout << "==============================" << endl;
		cout << num << " is less than " << target << endl;

		int diff{ target - num };
		cout << num << " is " << diff << " less than " << target << endl << endl;
	}

	return 0;
}