/*
	Javier's Carpet Cleaning Services
	Charges:
		$25 per small room
		$35 per large room
	Sales tax rate 6%
	Estimates are valid for 30 days

	Prompt the user for the number of rooms they would like cleaned
	and provide an estimate such as:

Estimate for carpet cleaning service:
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax:: $6.6
======================================
Total estimate: $116.6
This estimate is valid for 30 days

Psuedocode:
	Prompt the user to enter the number of small rooms
	Prompt the user to enter the number of large rooms
	Display the number of small rooms
	Display the number of large rooms
	Display price per small room
	Display price per large room

	Display cost: (number of small rooms * price per small room) + (number of large rooms * price per large room)
	Display tax: ( (number of small rooms * price per small room) + (number of large rooms * price per large room) ) * tax rate
	Display total estimate:( (number of small rooms * price per small room) + (number of large rooms * price per large room) ) + ( ( (number of small rooms * price per small room) + (number of large rooms * price per large room) ) * tax rate)
	Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Hello welcome to Javier's Carpet Cleaning Service" << endl << endl;
	cout << "How many small rooms would you like to be cleaned? ";

	int number_of_small_rooms{ 0 };
	cin >> number_of_small_rooms;
	cout << endl;

	cout << "How many large rooms would you like to be cleaned? ";
	int number_of_large_rooms{ 0 };
	cin >> number_of_large_rooms;
	cout << endl;

	const double price_per_small_room{ 25 };
	const double price_per_large_room{ 35 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 }; // number of days

	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) << endl;
	cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax << endl;
	cout << "=================================================================" << endl;
	cout << "Total estimate: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) + (((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

	cout << endl;
	return 0;
}