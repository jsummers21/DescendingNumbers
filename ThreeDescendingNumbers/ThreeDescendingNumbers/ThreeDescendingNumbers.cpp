// ThreeDescendingNumbers.cpp : Defines the entry point for the console application.
/*Name: Jared Summers
Program: 3 Numbers in descending order
Description: Input 3 numbers and organizes them into descending order.*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	double dblnumber1 = 0.0;
	double dblnumber2 = 0.0;
	double dblnumber3 = 0.0;
	
	cout << "Imput three numbers to be put in descending order" << endl;
	cin >> dblnumber1 >> dblnumber2 >> dblnumber3;	
	
	cout << fixed;
	cout << setprecision(1);

	if ((dblnumber1 > dblnumber2) && (dblnumber2 > dblnumber3)) {

		cout << "Numbers in descending order: " << dblnumber1 << " | " << dblnumber2 << " | " << dblnumber3 << endl;

	}

	else if ((dblnumber2 > dblnumber3) && (dblnumber3 > dblnumber1)) {

		cout << "Numbers in descending order: " << dblnumber2 << " | " << dblnumber3 << " | " << dblnumber1 << endl;

	}

	else if ((dblnumber3 > dblnumber1) && (dblnumber1 > dblnumber2)) {

		cout << "Numbers in descending order: " << dblnumber3 << " | " << dblnumber1 << " | " << dblnumber2 << endl;

	}

	else if ((dblnumber1 > dblnumber3) && (dblnumber3 > dblnumber2)) {

		cout << "Numbers in descending order: " << dblnumber1 << " | " << dblnumber3 << " | " << dblnumber2 << endl;

	}

	else if ((dblnumber2 > dblnumber1) && (dblnumber1 > dblnumber3)) {

		cout << "Numbers in descending order: " << dblnumber2 << " | " << dblnumber1 << " | " << dblnumber3 << endl;

	}

	else if ((dblnumber3 > dblnumber2) && (dblnumber2 > dblnumber1)) {

		cout << "Numbers in descending order: " << dblnumber3 << " | " << dblnumber2 << " | " << dblnumber1 << endl;

	}
    return 0;
}

