// Practice1.cpp : This application while read any positive value and output the square root
// it will continue in it's loop until 0 is entered.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double value;
	double square;
	cout << "Welcome to the square calculator, follow the instructions below and hit 0 to end!";
	cout <<  "\n Enter any value to determine its value squared" << endl;
	cin >> value;

	while (value > 0) {
		square = value * value;
		cout << "The square of " << value << " is " << square << endl;
		cout << "Enter another value!" << endl;
		cin >> value;
	}
	return 0;
}
