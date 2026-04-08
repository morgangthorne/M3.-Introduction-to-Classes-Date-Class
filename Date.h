#pragma once
/*Filename: Date.h
Programmer: Morgan Thorne
Date: March 2026
Requirements:
-Define the Date Class
- Store the values for month, days, and year
- Provide prototypes for functions, use for format and validation
*/

#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	//The constructor
	Date(int m = 1, int d = 1, int y = 1900);

	//Mutator
	void SetDate(int m, int d, int y);

	//Accessors
	int GetMonth() const;
	int GetDay() const;
	int GetYear() const;

	//Leap Year
	bool IsALeapYear() const;
	bool IsALeapYear(int y) const;

	//Last day 
	int LastDay() const;
	int LastDay(int m, int y) const;

	//Print Functions
	string NumberString() const;
	string LongString() const;
	string InternString() const;
};

#endif