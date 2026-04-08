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

    cout << "Program complete\n";

    return 0;
}

