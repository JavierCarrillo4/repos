// This program is a test for using basic math operations with different initializers and utilizes specific namespaces in c

#include <iostream>

using namespace std;

int main()

{
	float a;
	float b;
	float result;
	
	cout << "Hello, give me the variable 'a' for the expression (a + 1) - b: ";

	cin >> a;
	cout << endl;
	
	cout << "Now give me the variable 'b': ";
	cin >> b;
	cout << endl;

	//Calculation

	a = a + 1;

	result = a - b;

	cout << "Your answer is: " << result << endl;


	return 0;
}