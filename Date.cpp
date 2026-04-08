/*
Filename: Date.cpp
Programmer: Morgan Thorne
Date: March 2026
Requirements:
- Implement the Date class functions
*/

#include "Date.h"

//Constructor
Date::Date(int m, int d, int y) {
	
	bool valid = true;
	
	//Validation for year 
	if (y < 1900)
		valid = false;

	//Validation for month
	if (m < 1 || m > 12) 
		valid = false;

	if (d < 1 || d > LastDay(m, y))
		valid = false;


	if (!valid) {
		month = 1;
		day = 1;
		year = 1900;
	}
	else {
		month = m;
		day = d;
		year = y;
	}
}

//Mutator
void Date::SetDate(int m, int d, int y) {
	//Temp onject (automatically is valid)
	Date Temp(m, d, y);

	//Copies the valid values
	month = Temp.month;
	day = Temp.day;
	year = Temp.year;
}

//Accessors
int Date::GetMonth() const {
	return month;
}

int Date::GetDay() const {
	return day;
}

int Date::GetYear() const {
	return year;
}

//LeapYear Functions
bool Date::IsALeapYear() const {
	return IsALeapYear(year);
}

bool Date::IsALeapYear(int y) const {
	if (y % 400 == 0)
		return true;
	if (y % 100 == 0)
		return false;
	if (y % 4 == 0)
		return true;

	return false;
}

//Last Day
int Date::LastDay() const {
	return LastDay(month, year);
}

int Date::LastDay(int m, int y) const {
	//Logic for months with 31 days
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;

	//Logic for months with 30 days
	if (m == 4 || m == 6 || m == 9 || m == 11)
		return 30;

	//Logic for February
	if (m == 2) {
		if (IsALeapYear(y))
			return 29;
		else
			return 28;
	}

	//If validation doesn't happen
	return 31;
}

//Format for output
string Date::NumberString() const {
	
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);

}

string Date::LongString() const {
	
	string months[] = { "January", "February", "March", "April",
						"May", "June", "July", "August",
						"September", "October", "November", "December" };

	return months[month - 1] + " " + to_string(day) + " " + to_string(year);
}

string Date::InternString() const {
	
	string months[] = { "January", "February", "March", "April",
						"May", "June", "July", "August",
						"September", "October", "November", "December" };

	return to_string(day) + " " + months[month - 1] + " " + to_string(year);
}
