/* 
Filename: M3.Introduction to Classes Date Class.cpp
Programmer: Morgan Thorne
Date March 2026
Requirements:
-Used to test the date class in Date.h
*/

#include <iostream>
#include "Date.h"

using namespace std; 

int main()
{
    cout << "Testing Date class\n";

    //Temp Object 
    Date TestDate;

    cout << TestDate.NumberString() << endl;

    Date ValidDate(12, 25, 2021);
    cout << ValidDate.NumberString() << endl;

    Date InvalidDate(2, 30, 2021);
    cout << InvalidDate.NumberString() << endl;

    cout << "Program complete\n";

    return 0;
}

