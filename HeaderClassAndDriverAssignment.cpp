//============================================================================
// Name        : HeaderClassAndDriverAssignment.cpp
// Author      : Benjamin Breshears (bhbreshears@dmacc.edu)
// Version     : 1
// Date        : 4/11/2020
// Academic Honesty:
//   I attest that this is my original work.
//   I have not used unauthorized source code, either modified or unmodified.
//   I have not given other fellow student(s) access to my program.
// Description : Demonstrates the use of a header file for a monthly budgeting program
//============================================================================
#include <iostream>
#include <iomanip>
#include "HeaderClassAndDriverAssignment.h"
using namespace std;
int main()
{
	Month July;
	Month August = { 950, 80.10, 25};
	Month September = { 900, 60.62, 22};
	cout << "These are the costs of July: " << endl;
	cout << "Rent: " << July.getRent() << endl;
	cout << "Water: $" << fixed << setprecision(2) << July.getWater() << endl;
	cout << "Garbage: $" << July.getGarbage() << endl;
	cout << "Total cost for the month: $" << fixed << setprecision(2) << July.getTotal() << endl;
	cout << "These are the costs of August: " << endl;
	cout << "Rent: " << August.getRent() << endl;
	cout << "Water: $" << fixed << setprecision(2) << August.getWater() << endl;
	cout << "Garbage: $" << August.getGarbage() << endl;
	cout << "Total cost for the month: $" << fixed << setprecision(2) << August.getTotal() << endl;
	cout << "These are the costs of September: " << endl;
	cout << "Rent: " << September.getRent() << endl;
	cout << "Water: $" << fixed << setprecision(2) << September.getWater() << endl;
	cout << "Garbage: $" << September.getGarbage() << endl;
	cout << "Total cost for the month: $" << fixed << setprecision(2) <<September.getTotal() << endl;
	return 0;
}

// Test Data
// These are the costs of July :
// Rent: 950
// Water : $75.60
// Garbage : $25
// Total cost for the month : $1050.60
// These are the costs of August :
// Rent: 950
// Water : $80.10
// Garbage : $25
// Total cost for the month : $1055.10
// These are the costs of September :
// Rent: 900
// Water : $60.62
// Garbage : $22
// Total cost for the month : $982.62
