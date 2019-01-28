// Practice3.cpp :This application prompts the user to input a year and then
// outputs whether or not it is a leap year.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Input a year and the application will tell you if it is a leap year! ";
	cout << "\n Enter the year you would like to check: ";
	cin >> year;
	while (1) {
		if (((year % 4 == 0) && year % 100 != 0) || ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)))
		{
			cout << year << " is a leap year.";
			cout << "\n Enter another year: ";
			cin >> year;
		}
		else
		{
			cout << year << " is not a leap year.";
			cout << "\n Enter another year: ";
			cin >> year;
		}
	}
	return 0;
}
