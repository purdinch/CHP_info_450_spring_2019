// Program2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	string StName[30][30];
	string name =  " ";
	int i;
	int j;
	int x;
	int y;
	cout << "Please enter up to 30 names, hit enter at any time to output names and exit!\n";
	

	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++)
		{
			cout << "Enter names: ";
			getline(cin, name);
			
			if (name.empty())
			{

				StName[i][j] = '\0';
				for (x = 0; x < 30; x++)
				{
					for (y = 0; y < 30; y++)
					{
						if (!StName[x][y].empty())
						{
							cout << '\t' << StName[x][y] << endl;
						}
						else
						{
							exit(0);
						}
					}

				}
				exit(0);
			}
			else
			{
				StName[i][j] = name;
			}
		}

		cout << StName[i][j] << endl;

	}

}


