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
    
    cout << "Edge case test\n";

    Date e1(4, 30, 2023);
    cout << e1.NumberString() << endl;
    
    Date e2(4, 31, 2023);
    cout << e2.NumberString() << endl;

    Date e3(2, 29, 2023);
    cout << e3.NumberString() << endl;

    Date e4(2, 29, 2024);
    cout << e4.NumberString() << endl;

    cout << "------Constructor Tests------\n";

    //Default Constructor
    Date d1;
    cout << d1.NumberString() << endl;
    cout << d1.LongString() << endl;
    cout << d1.InternString() << endl;

    cout << "\nValid Construct Tests\n";

    Date d2(12, 25, 2021);
    cout << d2.NumberString() << endl;
    
    Date d3(1, 1, 1900);
    cout << d3.NumberString() << endl;

    Date d4(2, 14, 2022);
    cout << d4.NumberString() << endl;

    cout << "\nInvalid Contruct Test\n";

    Date d5(0, 10, 2020);
    cout << d5.NumberString() << endl;

    Date d6(13, 10, 2020);
    cout << d6.NumberString() << endl;

    Date d7(4, 31, 2023);
    cout << d7.NumberString() << endl;

    Date d8(2, 30, 2023);
    cout << d8.NumberString() << endl;

    cout << "\n------SetDate Tests------\n";

    Date s1;
    s1.SetDate(5, 10, 2022);
    cout << s1.NumberString() << endl;

    s1.SetDate(4, 31, 2022); // Should be invalid
    cout << s1.NumberString() << endl;

    
    cout << "\nProgram Complete\n";

    return 0;
}

