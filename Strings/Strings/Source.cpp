#include <iostream>
#include <iomanip>
#include <string>	// Important!

using namespace std;	// or use std::

int main()
{
	string s0;
	string s1{"Apple"};
	string s2{"Banana"};
	string s3{"Kiwi"};
	string s4{"apple"};
	string s5{s1};		// Apple
	string s6{s1, 0, 3};// App
	string s7(10, 'X');	//XXXXXXXXXX

	cout << s0 << endl;				// No garbage
	cout << s0.length() << endl;	// empty string

// Initialization
	cout << endl;
	cout << "Initialization" << endl << "---------------------------------" << endl;
	cout << "s1 is initialized to: " << s1 << endl;
	cout << "s2 is initialized to: " << s2 << endl;
	cout << "s3 is initialized to: " << s3 << endl;
	cout << "s4 is initialized to: " << s4 << endl;
	cout << "s5 is initialized to: " << s5 << endl;
	cout << "s6 is initialized to: " << s6 << endl;
	cout << "s7 is initialized to: " << s7 << endl;

// Comparison
	cout << endl;
	cout << "Comparison" << endl << "---------------------------------" << endl;
	cout << boolalpha;
	cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;		// True		Apple == Apple
	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;		// False	Apple != Banana
	cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;		// True		Apple != Banana
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;			// True		Apple < Banana
	cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;		// True		Banana > Apple
	cout << s4 << " < " << s5 << ": " << (s4 == s5) << endl;		// False	apple > Apple
	cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;		// True		Apple == Apple

// Assingment
	cout << endl;
	cout << "Assignment" << endl << "---------------------------------" << endl;
	s1 = "Watermelon";
	cout << "s1 is now: " << s1 << endl; // Watermelon
	s2 = s1;
	cout << "s2 is now: " << s2 << endl; // Watermelon
	s3 = "Javier";
	cout << "s3 is now: " << s3 << endl; // Javier
	
	s3[0] = 'X';
	cout << "s3 changed first letter to 'X': " << s3 << endl; // Xavier
	s3.at(0) = 'P';
	cout << "s3 changed first letter to 'P': " << s3 << endl; // Pavier

// Concatenation
	cout << endl;
	cout << "Concatenation" << endl << "---------------------------------" << endl;
	
	s3 = "Watermelon";
	s2 = "Banana";
	s3 = s5 + " and " + s2 + " juice";	// Apple and Banana juice
	cout << "s3 is now: " << s3 << endl;	// Apple and Banana juice

//	s3 = "nice " + " cold " + s5 + "juice";		// Compile error 
												// C-strings cannot be written with two literals next to one another and should be concatenated with strcat_s() instead

// for loop
	cout << endl;
	cout << "Looping" << endl << "---------------------------------" << endl;
	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.length(); ++i)
	{
		cout << s1.at(i);	// or s1[i] Apple
	}
	cout << endl;

// Range-based for loop
	cout << endl;
	cout << "Range-based for loop" << endl << "---------------------------------" << endl;
	for (char c : s1)
	{
		cout << c;	// Apple
	}
	cout << endl;

// Substring
	cout << endl;
	cout << "Substring" << endl << "---------------------------------" << endl;
	s1 = "This is a test";

	cout << s1.substr(0, 4) << endl;	// This
	cout << s1.substr(5, 2) << endl;	// is
	cout << s1.substr(10, 4) << endl;	// test

// Erase
	cout << endl;
	cout << "Erase" << endl << "---------------------------------" << endl;
	s1.erase(0, 5);		// Erase This from s1 results in "is a test"
	cout << "s1 is now: " << s1 << endl;	// is a test

// getline
	cout << endl;
	cout << "getline" << endl << "---------------------------------" << endl;
	
	string full_name{};

	cout << "Enter your full name: ";
	getline(cin, full_name);

	cout << "Your full name is: " << full_name << endl;

// Find
	cout << endl;
	cout << "Find" << endl << "---------------------------------" << endl;

	s1 = "The secret word is Boo";
	string word{};

	cout << "Enter word to find: ";
	cin >> word;

	size_t position = s1.find(word);
	if (position != string::npos)	// string::npos == no position
	{
		cout << "Found " << word << " at position " << position << endl;
	}
	
	else
	{
		cout << "Sorry " << word << " not found" << endl;
	}

	cout << endl;
	
	return 0;
}