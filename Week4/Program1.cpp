// Program 1 : This program accepts a list of 10 integers to be input
// it then totals those numbers, runs a mean calculation, then for each number
// subtracts the mean and squares the result. Then the mean of those differences is calculated,
// the sqaure root taken and all info is output.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	float num[10];
	int i;
	float total = 0;
	float mean = 0;
	float newTotal = 0;
	float newMean = 0;
	float square = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "Please input a list of 10 integers!";
		cin >> num[i];

		total = total + num[i];
		mean = total / 10;
		num[i] = sqrt(num[i]- mean);
		newTotal = newTotal + num[i];
		newMean = newTotal / 10;
		square = sqrt(newMean);

	}

	cout << "\nThe total is: " << total;
	cout << "\nThe mean is: " << mean;
	cout << "\nThe new mean is: " << newMean;
	cout << "\nThe square root of this is: " << square << endl;

    return 0;
}

