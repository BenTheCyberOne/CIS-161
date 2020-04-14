#pragma once
#include <iostream>
#include <string>

class DayOfYear {
	private:
		int day;
		std::string month;
	public:	
			DayOfYear(int d);
			void print();
};