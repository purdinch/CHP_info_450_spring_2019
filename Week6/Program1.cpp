// Program1.cpp : This program allows the user to input 3 employees, their compensation rates,
// and then output the list with their annual compensation
//

#include "stdafx.h"
#include <iostream> 
#include <string.h> 
#include <cstdio> 
#include <stdlib.h>

#pragma warning(disable : 4996)

using namespace std;

class Employee {
private:
	char firstname[250];
	char lastname[250];
	char type[20];
	char compensation[250];

public:
	void set_firstname(const char* in_name) { strcpy(firstname, in_name); }
	void set_lastname(const char* in_lname) { strcpy(lastname, in_lname); }
	void set_type(const char* in_type) { strcpy(type, in_type); }
	void set_compensation(const char* in_comp) { strcpy(compensation, in_comp); }
	void printEntry() {
		
			cout << lastname << ", " << firstname << ":" << " $" << compensation << "\n" << endl;
		}
};

int main()
{
	const int MAX = 3;
	int i;
	Employee entries[MAX];
	for (int x = 0; x < MAX; x++) {
		cout << "Entry: #" << x << endl;
		char *value = (char *)malloc(250);
		(int *)malloc(30 * sizeof(int));

		cout << "Employee's first name:" << endl;
		cin.getline(value, 250);
		entries[x].set_firstname(value);

		cout << "Employee's last name:" << endl;
		cin.getline(value, 250);

		entries[x].set_lastname(value);
		cout << "Please enter 'T' for hourly or 'F' for salary below: " << endl;
		cin.getline(value, 20);


		if (strcmp(value, "T") == 0) {
			cout << "You have selected hourly. Please enter your compensation per hour below:" << endl;
			cin.getline(value, 250);
			i = atoi(value);
			int annual = i * 2000;
			value = _itoa(annual, value, 10);
			entries[x].set_compensation(value);
		}
		else if (strcmp(value, "F") == 0) {
			cout << "You have selected salaried. Please enter your compensation per year below:" << endl;
			cin.getline(value, 250);
			entries[x].set_compensation(value);
		}
		else {
			cout << "You've made an error!" << endl;
		}

	}
	for (int x = 0; x < MAX; x++) {
		entries[x].printEntry();
	}
}