// Practice2.cpp : This application allows the user to input
// a value and then the program will determine if it is prime or not


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	int i;
	cout << "Welcome to the prime calculator, follow the instructions below and hit 0 to end!";
	cout << "\n Enter any value to determine if it is prime : " << endl;

	while (1)
	{
		cin >> num;
		if (num == 0)
		{
			cout << "Thanks for playing!" << endl;
			exit(0);
		}
		if (num == 1)
		{
			cout << "\n" << num << " is not prime." << endl;
			cin >> num;
		}
		if (num == 2)
		{
			cout << "\n" << num << " is prime." << endl;
			cin >> num;
		}

		for (i = 2 ; i < num; i++)
		{
			if (num % i == 0)
			{
				cout << "\n" << num << " is not prime." << endl;
				break;
				cin >> num;
			}
			else
			{
				cout << "\n" << num << " is prime." << endl;
				break;
				cin >> num;
			}
		}		
	}

	return 0;

}
