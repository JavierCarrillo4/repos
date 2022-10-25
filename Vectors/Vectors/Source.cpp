// Vectors

#include <iostream>
#include <vector>

using namespace std;

int main()
{
//	vector <char> vowels;	 // empty
//	vector <char> vowels(5);	 // 5 innitialized to 0

	vector <char> vowels{ 'a','e','i','o','u' };	// character vector initiated to a, e, i ,o, u

	cout << vowels[0] << endl;
	cout << vowels[4] << endl << endl;

//	vector <int> test_scores (3) //	 3 elements all initialized to 0
//	vector <int> test_scores (3, 100); //	 3 elements all intialized to 100

	vector <int> test_scores{ 100, 98, 89 };

	cout << "Test scores using array syntax:" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl << endl; //	using the array syntax will not do bounds checking

	cout << "Test scores using vector syntax:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl << endl; //	using the vector syntax will do bounds checking and is a better practice

	cout << "There are " << test_scores.size() << " scores in the vector" << endl << endl; //	this checks how many elements are in the vector

	cout << "Enter 3 test scores: ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	cout << endl;

	cout << "Updated test scores: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl << endl;

	cout << "Enter a test score to add to the vector: ";

	int score_to_add{0};
	cin >> score_to_add;

	cout << endl;

	test_scores.push_back(score_to_add); //	 Here the users input gets added the end of the vector

	cout << "Enter one more test score to add to the vector: ";
	
	cin >> score_to_add;

	test_scores.push_back(score_to_add); //	 Here the users input gets updated in the same variable to the end of the vector

	cout << endl;

	cout << "Test scores are now: " << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl << endl;

	cout << "There are now " << test_scores.size() << " scores in the vector" << endl << endl;

//	cout << "This should cause an exception!!" << test_scores.at(10) << endl; //	This makes the program crash
	
	// Example of a 2-D vector
	
	vector <vector <int> > movie_ratings
	{
		{1,2,3,4},
		{1,2,4,4},
		{1,3,4,5}
	};

	cout << "Here are the movie ratings for viewer #1 using array syntax: " << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl << endl;

	cout << "Here are the movie ratings for viewer #1 using vector syntax: " << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl << endl;

	return 0;
}