/*
Section 9
Challenge


	This challenge is about using a collection (list) of integers and allowing the user
	to select options from a menu to perform operations on the list.

	Your program should display menu options to the user as follows:

	P - Print numbers
	A - Add a number
	M - Display a mean of numbers
	S - Display the smallest number
	L - Display the largest number
	Q - Quit

	Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.

If the user enter 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you shoulddisplay "[] - the list is empty"
If the list is not empty then all the list elements should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list then display it was added. For example, if the user enters 5
You should display "5 added"
Duplicate list entries are OK

If the user enter 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1], you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list.
For example, if the list contains [2 4 5 1], you should display, "The largest numer is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clear out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char selection{};
	vector <int> nums{};

	do
	{
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display a mean of numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "J - Search for number in the list and how man times it occurs" << endl;
		cout << "C - Clear out the list" << endl;
		cout << "Q - Quit" << endl << endl;

		cout << "Enter your choice: ";

		cin >> selection;

		if (selection == 'P' || selection == 'p')
		{
			cout << endl;

			if (nums.size() == 0)
			{
				cout << "[] - the list is empty" << endl;
			}

			else
			{
				cout << "[ ";

				for (auto i{ 0 }; i < nums.size(); ++i)	// i must start at 0 to also be used for the vector index
				{
					cout << nums.at(i);

					if (i < nums.size() - 1)
					{
						cout << ", ";
					}

				}

				cout << " ]" << endl;
			}
		}

		else if (selection == 'A' || selection == 'a')
		{
			int add_num{};
			char option{};

			cout << endl;

			cout << "Enter an integer to add to the list: ";
			cin >> add_num;

			nums.push_back(add_num);	// Add numbers to vector

			cout << endl;

			cout << add_num << " was added" << endl;

			cout << endl;
		}

		else if (selection == 'M' || selection == 'm')
		{
			double total_added{};
			double mean{};	// These intitialized variables can also be integers but to get a decimal as the mean static_cast<double> must be adde before either of these

			cout << endl;

			if (nums.size() == 0)
			{
				cout << "Unable to calculate the mean - no data" << endl;
			}

			else
			{
				for (int i{ 0 }; i < nums.size(); ++i)
				{
					total_added += nums.at(i);
				}

				mean = total_added / nums.size();	// mean calculation

				cout << "The mean of the list of numbers is: " << mean << endl;
			}
		}

		else if (selection == 'S' || selection == 's')
		{
			int smallest_num{};

			cout << endl;

			if (nums.size() == 0)
			{
				cout << "Unable to determine the smallest number - list is empty" << endl;
			}

			else
			{
				smallest_num = nums.at(0);

				for (int i{ 0 }; i < nums.size(); ++i)
				{
					if (nums.at(i) < smallest_num)
					{
						smallest_num = nums.at(i);
					}
				}
				cout << "The smallest number is " << smallest_num << endl;
			}
		}

		else if (selection == 'L' || selection == 'l')
		{
			int largest_num{};
			int temp{};

			cout << endl;

			if (nums.size() == 0)
			{
				cout << "Unable to determine the largest number - list is empty" << endl;
			}

			else
			{
				largest_num = nums.at(0);

				for (int i{ 0 }; i < nums.size(); ++i)
				{
					if (nums.at(i) > largest_num)
					{
						largest_num = nums.at(i);
					}
				}
				cout << "The largest number is " << largest_num << endl;
			}
		}

		else if (selection == 'J' || selection == 'j')
		{

			cout << endl;

			if (nums.size() == 0)
			{
				cout << "List is empty" << endl;
			}

			else
			{
				int num{};
				int counter{};

				cout << "Enter a number you would like to search for ";

				cin >> num;

				cout << endl;

				for (int i{ 0 }; i < nums.size(); ++i)
				{
					if (num == nums.at(i))
					{
						counter++;
					}

					else
					{
						continue;
					}
				}

				if (counter > 0)
				{
					cout << "Number detected in list - it appeared " << counter << " times" << endl;
				}

				else
				{
					cout << "Number is not in list - please try again" << endl;
				}
			}
		}

		else if (selection == 'C' || selection == 'c')
		{
			cout << endl;

			nums.clear();

			cout << "List was cleared" << endl;
		}

		else if (selection == 'Q' || selection == 'q')
		{
			cout << endl;
			cout << "Goodbye" << endl;
		}

		else
		{
			cout << endl;
			cout << "Unknown selection, please try again" << endl;
		}

		cout << endl;

	} while (selection != 'Q' && selection != 'q');

		return 0;
}