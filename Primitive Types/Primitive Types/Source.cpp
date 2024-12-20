#include <iostream>

using namespace std;

int main()
{
	/***************************************************************************
	* 
	* Character Types
	* 
	***************************************************************************/
	
	char middle_initial = 'J'; // Notice the single quotes around the character
	
	cout << "My middle initial is " << middle_initial << endl;

	/***************************************************************************
	*
	* Integer Types
	*
	***************************************************************************/

	unsigned short int exam_score{ 55 }; // Same as unsigned short exam_score = 55
	
	cout << "My exam score was " << exam_score << endl;

	int countries_represented{ 65 };
	
	cout << "There were " << countries_represented << " countries represented in meeting" << endl;

	long people_in_florida{ 20610000 };

	cout << "There are about " << people_in_florida << " people in Florida" << endl;

	long long people_on_earth{ 7'600'000'000 };

	cout << "There are about " << people_on_earth << " people on earth" << endl;

	long long distance_to_alpha_centauri { 9'461'000'000'000 };

	cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

	/***************************************************************************
	*
	* Floating Point Types
	*
	***************************************************************************/

	float car_payment{ 401.23 };

	cout << "My car payment is " << car_payment << endl;

	double pi{ 3.14159 };
	
	cout << "PI is " << pi << endl;

	long double large_amount{ 2.7e120 };

	cout << large_amount << " is a very big number" << endl;

	/***************************************************************************
	*
	* Boolean Types
	*
	***************************************************************************/

	bool game_over{ 0 };

	cout << "The value of game over is " << game_over << endl;

	short value1{ 30000 };
	short value2{ 1000 };
	short product{ value1 * value2 };

	cout << "The value of " << value1 << " and " << value2 << " is " << product << endl;

	return 0;
}