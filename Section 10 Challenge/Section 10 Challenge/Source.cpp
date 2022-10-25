// Section 10
// Challenge
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter in the alphabet.
For example, every letter 'a' gets replaced with an 'x', and every 'b' gets replaced with a 'z', etc.

Write a program that asks the user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for your substitution.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in alphabet.

Have fun! And make the cipher strong if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter an vice-versa.
This could also be improved.

Remember, the less code you write the less you have to test!
Reuse existing funcitonality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_message{};
	string alphabet{ "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz " };
	string key	   { "TGJUHYVDMKCRNIWBOZPXLASEQFtgjuhyvdmkcrniwbozpxlaseqf " };

	cout << "Enter a secret message: ";
	getline(cin, user_message);

	cout << endl;

	size_t position{};
	
	for (size_t i{0}; i < user_message.length(); ++i)
	{
		position = alphabet.find(user_message.at(i));

		if (position != string::npos)
		{
			if (i == 0)
			{
				cout << "Encrypting message..." << endl << endl;

				cout << "Encrypted message: " << key.at(position);
			}

			else if (i + 1 < user_message.length())
			{
				cout << key.at(position);
			}

			else
			{
				cout << key.at(position) << endl;

				cout << endl;

				cout << "Decrypting message..." << endl << endl;

				cout << "Decrypted message: " << user_message << endl;
			}
		}

		else
		{
			cout << "Unable to encrypt" << endl;
			break;
		}
	}
	cout << endl;

	return 0;
}