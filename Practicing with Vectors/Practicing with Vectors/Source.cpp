/*
Write a C++ program as follows:

Declare 2 empty vectors of integers named
vector1 and vector2 respectively

Add 10 and 20 to vector1 dynamically using push_back
Display the elements in vector1 using the at() method as well as using the size() method

Add 100 and 200 to vector2 dynamically using push_back
Display the elements in vector2 using the at() method as well as using the size() method

Declare an empty 2D called vector_2d
Remember that a 2D vector is a vector of vector <int>

Add vector1 to vector_2d dynamically using push_back
Add vector2 to vector_2d dynamically using push_back

Display the elements in vector_2d using the at() method

Change vector1.at(0) to 1000

Display the elements in vector_2d again using the at() method

Display the elements in vector1

What did you expect? Did you get what you expected? What do you think happened?
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2; //	Declared 2 empty vectors	//	These should be considered 1d vectors

	vector1.push_back(10);
	vector1.push_back(20); //	Added 2 integers to vector1 10 and 20

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl << endl; //	Displaying elements in vector1

	cout << vector1.size() << endl << endl; //	Displaying the size of vector1

	vector2.push_back(100);
	vector2.push_back(200); //	Added 2 integers to vector2 100 and 200

	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl << endl; //	Displaying elements in vector2

	cout << vector2.size() << endl << endl; //	Displaying the size of vector2

	vector < vector <int> > vector_2d; //	Declared an empty 2D vector

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2); //	Added all integeres of both vector1 and vector2 to vector_2d

	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl << endl; //	Displaying all elements saved into vector_2d

	vector1.at(0) = 1000; //	First element in vector1 is changed to 1000

	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl << endl;//	Displaying all elements saved into vector_2d again

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl << endl; //	Displaying all elements saved into vector1 again

	return 0;
}