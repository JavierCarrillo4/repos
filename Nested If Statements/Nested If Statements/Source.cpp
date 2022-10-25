#include <iostream>

using namespace std;

int main()
{
	int score{ 0 };

	cout << "Enter your score on the exam (0-100): ";
	cin >> score;
	cout << endl;

	char letter_grade{ 0 };

	if (score >= 0 && score <= 100)
	{
		if (score >= 90)
		{
			letter_grade = 'A';
		}
		else if (score >= 80)
		{
			letter_grade = 'B';
		}
		else if (score >= 70)
		{
			letter_grade = 'C';
		}
		else if (score >= 60)
		{
			letter_grade = 'D';
		}
		else
		{
			letter_grade = 'F';
		}

		cout << "Your grade is: " << letter_grade << endl << endl;

		if (letter_grade == 'F')
		{
			cout << "Sorry, you must repeat this class" << endl;
		}
		else
		{
			cout << "Congrats!" << endl << endl;
		}
	}

	else
	{
		cout << "Sorry, " << score << " is not in range" << endl;
	}


	return 0;
}