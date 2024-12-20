/*
Range Based For Loop
Section 9
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int scores[]{ 10, 20, 30 };

	for (int score : scores)
	{
		cout << score << endl;
	}

	cout << endl;

	vector <double> temperatures{ 87.9, 77.9, 80.0, 72.5 };
	double average_temp{};
	double total{};

	for (auto temp : temperatures)
	{
		total += temp;
	}

	if (temperatures.size() != 0)
	{
		average_temp = total / temperatures.size();
	}

	cout << fixed << setprecision(1);
	cout << "Average temperature is " << average_temp << endl;

	cout << endl;

	for (auto val : { 1, 2, 3, 4, 5 })
	{
		cout << val << endl;
	}

	cout << endl;

	for (auto c : "This is a test")
	{
		if (c != ' ')
		{
			cout << c;
		}
	}

	cout << endl;

	for (auto c : "This is a test")
	{
		if (c == ' ')
		{
			cout << "\t";
		}
		else
		{
			cout << c;
		}
	}

	cout << endl;

	return 0;
}