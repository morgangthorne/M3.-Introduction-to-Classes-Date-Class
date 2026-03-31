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
	month = 1;
	day = 1;
	year = 1000;
}

//Mutator
void Date::SetDate(int m, int d, int y) {
	//Temp
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
	return false;
}

bool Date::IsALeapYear(int y) const {
	return false;
}

//Last Day
int Date::LastDay() const {
	return 31;
}

int Date::LastDay(int m, int y) const {
	return 31;
}

//Format for output
string Date::NumberString() const {
	return "1/1/1000";
}

string Date::LongString() const {
	return "January 1, 1000";
}

string Date::InternString() const {
	return "1 January 1000";
}
