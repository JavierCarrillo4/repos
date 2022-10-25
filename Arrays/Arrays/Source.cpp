//Arrays

#include <iostream>

using namespace std;

int main()
{
	char vowels[]{ 'a','e','i','o','u' };
	
	cout << "The first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl << endl;

//	cin >> vowels[5]; This would not be possible and would make my computer crash. Out of bounds.

	double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
	
	cout << "The first high temperature is: " << hi_temps[0] << endl;

	hi_temps[0] = 100.7; // sets the first hi_temps to 100.7

	cout << "The first high temperature is now: " << hi_temps[0] << endl << endl;

	int test_scores[5]; //When not initialized, junk will appear when program runs.

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl << endl;

	int scores[5]{}; // When curly braces are added all scores will become initialized to 0.

	cout << "First score at index 0: " << scores[0] << endl;
	cout << "Second score at index 1: " << scores[1] << endl;
	cout << "Third score at index 2: " << scores[2] << endl;
	cout << "Fourth score at index 3: " << scores[3] << endl;
	cout << "Fifth score at index 4: " << scores[4] << endl << endl;

	int value[5]{100, 90, 80}; // When only some indexes in the array are initialized, all other indexes will be intialized to 0 (for integers).

	cout << "First value at index 0: " << value[0] << endl;
	cout << "Second value at index 1: " << value[1] << endl;
	cout << "Third value at index 2: " << value[2] << endl;
	cout << "Fourth value at index 3: " << value[3] << endl;
	cout << "Fifth value at index 4: " << value[4] << endl << endl;

	cout << "Notice what the value of the array name is: " << test_scores << endl << endl;

	//Multi-dimensional Arrays

	int movie_ratings[3][4]
	{1, 2, 3, 4,
	 5, 6, 7, 8,
	 9, 1, 2, 3};

	cout << movie_ratings[2][0] << endl; // First number in the braces is for the row in the array and the second is for the column

	movie_ratings[2][0] = 2; // New number in the index in third row column one is 2

	cout << movie_ratings[2][0] << endl; 

	return 0;
}