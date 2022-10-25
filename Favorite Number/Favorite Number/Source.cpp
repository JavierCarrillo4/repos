/*This program just asks the user to input their favorite number and replies with the users number input*/

#include <iostream>

using namespace std;



int main()
{
	int fav_num;

	cout << "Enter your favorite number between 1 and 100: ";
	
	cin >> fav_num;

	cout << "Amazing! "; cout << fav_num << " is my favorite number too!" << endl;
		
	return 0;
}