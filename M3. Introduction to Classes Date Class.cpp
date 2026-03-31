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
    
    cout << "getter test\n";

    Date g1(7, 4, 2022);
    cout << g1.GetMonth() << endl;
    cout << g1.GetDay() << endl;
    cout << g1.GetYear() << endl;

    cout << "Program complete\n";

    return 0;
}

