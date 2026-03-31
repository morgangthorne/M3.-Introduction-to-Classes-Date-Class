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
    /*
    cout << TestDate.NumberString() << endl;

    Date ValidDate(12, 25, 2021);
    cout << ValidDate.NumberString() << endl;

    Date InvalidDate(2, 30, 2021);
    cout << InvalidDate.NumberString() << endl;

    Date d1(5, 10, 2022);
    cout << d1.NumberString() << endl;

    //Invalid temp
    d1.SetDate(2, 30, 2022);
    cout << d1.NumberString() << endl;
    */

    Date d1(12, 25, 2021);
    cout << d1.NumberString() << endl;
    cout << d1.LongString() << endl;
    cout << d1.InternString() << endl;

    cout << "Program complete\n";

    return 0;
}

