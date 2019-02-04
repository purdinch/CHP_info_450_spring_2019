// Assignment1.cpp : Allows the user to input a radius in inches,
//and then output the circumference in inches.


#include "stdafx.h"
#include <iostream>
using namespace std;


const double pi = 3.14;
double calculateCircumference(double radius);

int main()
{
	
	double radius;


	cout << "Please enter the radius of a circle in inches: " << endl;
	cin >> radius;


	cout << "The circumference is: " << calculateCircumference(radius) << " inches" << endl;

	return 0;
}

double calculateCircumference(double radius) {
	double Circumference;
	Circumference = 2 * pi * radius;

	return Circumference;

 }