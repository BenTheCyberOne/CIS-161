#include "Header.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
DayOfYear::DayOfYear(int d) {
	this->day = d;
}

void DayOfYear::print() {
	int startDayOfMonth[13] = {1,32,60,91,121,152,182,21,244,274,305,335,999};
	string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	string tempMonth;
	int tempDay = 0;
	cout << this->day << endl;
	/*
	Here we will check if the day is in between two months. If the day is
	lower than the value in the next index but larger than the current one,
	we will take the current index number (x) and use it to find which month
	the day corresponds with. For example if the user enters 57, we will use
	index #1 (32) and see that index #1 within the month[] contains February
	*/

	for (int x = 0; x < 13; x++) {
		if (this->day >= startDayOfMonth[x] && this->day < startDayOfMonth[x + 1]) {
			tempMonth = month[x];
			/*
			To calculate the day, we will take the integer given by the user and
			subtract it with the value we compared with previously
			Following the example from above, we take 57 - 32 and get 25.
			*/
			tempDay = (this->day - startDayOfMonth[x]) + 1;
			break;
		}
		// This is just incase the user enters a date that a month starts at
		//if (tempDay == 0) {
		//	tempDay += 1;
		//}

	}
	// Using the example we would get February 25
	cout << tempMonth << " " << tempDay << endl;
}

	// ### End of Implementation Pseudocode ###