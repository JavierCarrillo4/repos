#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_input{};
	char space{ ' ' };

	cout << "Enter a collection of characters to form a pyramid: ";
	getline(cin, user_input);

	for (size_t i{ 0 }; i < user_input.length(); ++i)
	{
		if (i == 0)
		{
			for (size_t j{ user_input.length() - i }; j > 0; j--)
			{
				cout << space;
			}

			cout << user_input.at(0);
		}

		else
		{
			size_t position{};

			for (size_t j{ user_input.length() - i }; j > 0; j--)
			{
				cout << space;
			}

			cout << user_input.substr(0, i + 1);

			for (auto g{i - 1}; g >= 0; --g)
			{
				position = user_input.find(user_input.at(g));

				cout << user_input.at(position);
			}

		}

		cout << endl;
	}

	return 0;
}