// Program2.cpp : This application allows the user to input up to 30 names
// in a 2d array, after entry the names are output. If the user enters an empty input 
// the names are also output.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	string StName[2][15];
	string name = "name";
	int r = 2;
	int c = 15;
	int x;
	cout << "Welcome! \nPlease enter up to 30 names, hit enter at any time to output names and exit!\n";

	for (x = 0; x < 30; x++)
	{
		cout << "Enter names: ";
		cin >> StName[r][c];

		if (name.empty())
		{
			StName[r][c] = '\0';
			cout << '\t' << StName[r][c] << endl;
			exit(0);
		}
	}
	cout << '\t' << StName[r][c] << endl;

}