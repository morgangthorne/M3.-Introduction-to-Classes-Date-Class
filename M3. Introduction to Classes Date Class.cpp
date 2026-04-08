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
    cout << "------------------------------\n";
    cout << "       Date Class Test--------\n";
    cout << "------------------------------\n";

    //Constructor Tests
    cout << "\n------Constructor Tests------\n";

    //Default Constructor Test
    cout << "\n-----Default Constructor------\n";
    Date d1;
    cout << d1.NumberString() << endl;
    cout << d1.LongString() << endl;
    cout << d1.InternString() << endl;

    //Valid Constructor
    cout << "\n------Valid Construct------\n";

    Date d2(12, 25, 2021);
    Date d3(1, 1, 1900);
    Date d4(2, 14, 2022);
    
    cout << d2.NumberString() << endl;
    cout << d3.NumberString() << endl;
    cout << d4.NumberString() << endl;

    //Invalid Constructor
    cout << "\n------Invalid Contruct Test------\n";

    Date d5(0, 10, 2020);
    Date d6(13, 10, 2020);
    Date d7(4, 31, 2023);
    Date d8(2, 30, 2023);
    Date d9(2, 29, 2023);

    cout << d5.NumberString() << endl;
    cout << d6.NumberString() << endl;
    cout << d7.NumberString() << endl;
    cout << d8.NumberString() << endl;
    cout << d9.NumberString() << endl;

    //SetDate test
    cout << "\n------SetDate Tests------\n";

    Date s1;
    cout << "Starting Date: " << s1.NumberString() << endl;
    
    cout << "\nValid SetDate:\n";
    s1.SetDate(5, 10, 2022);
    cout << s1.NumberString() << endl;
    
    cout << "\nInvalid SetDate (Should reset):\n";
    s1.SetDate(4, 31, 2022);
    cout << s1.NumberString() << endl;

    s1.SetDate(2, 30, 2022);
    cout << s1.NumberString() << endl;

    //Leap Year Test
    cout << "\n------Leap Year Tests------\n";

    Date ly(1, 1, 2024);
    
    cout << "2024 (leap): " << (ly.IsALeapYear() ? "True" : "False") << endl;
    cout << "2023 (not leap): " << (ly.IsALeapYear(2023) ? "True" : "False") << endl;
    cout << "1900 (not leap): " << (ly.IsALeapYear(1900) ? "True" : "False") << endl;
    cout << "2000 (leap): " << (ly.IsALeapYear(2000) ? "True" : "False") << endl;

    //Last Day Test
    cout << "\n------Last Day Tests------\n";

    cout << "January: " <<  ly.LastDay(1, 2023) << endl; //31
    cout << "April: " << ly.LastDay(4, 2023) << endl; //30
    cout << "Feb 2023: " << ly.LastDay(2, 2023) << endl; //28
    cout << "Feb 2024: " << ly.LastDay(2, 2024) << endl; //29
   
    //Edge Case TEst
    cout << "\n------Edge case test------\n";

    Date e1(4, 30, 2023);
    Date e2(4, 31, 2023);
    Date e3(6, 30, 2023);
    Date e4(6, 31, 2024);
    Date e5(2, 28, 2023);
    Date e6(5, 29, 2024);
    Date e7(2, 29, 2024);
    Date e8(2, 30, 2024);
    
    cout << e1.NumberString() << endl;
    cout << e2.NumberString() << endl;
    cout << e3.NumberString() << endl;
    cout << e4.NumberString() << endl;
    cout << e5.NumberString() << endl;
    cout << e6.NumberString() << endl;
    cout << e7.NumberString() << endl;
    cout << e8.NumberString() << endl;
    
    //Print Format Test
    cout << "\n------Format Tests------\n";

    Date f1(12, 25, 2021);
    Date f2(7, 4, 2023);

    cout << "\nDate 1:\n";
    cout << f1.NumberString() << endl;
    cout << f1.LongString() << endl;
    cout << f1.InternString() << endl;

    cout << "\nDate 2:\n";
    cout << f2.NumberString() << endl;
    cout << f2.LongString() << endl;
    cout << f2.InternString() << endl;

    //Getter Tests
    cout << "\n------Getter Tests------\n";
    
    cout << "Month: " << f1.GetMonth() << endl;
    cout << "Day: " << f1.GetDay() << endl;
    cout << "Year: " << f1.GetYear() << endl;

    f1.SetDate(3, 15, 2025);
    
    cout << "\nAfter SetDate:\n";
    cout << f1.GetMonth() << "/" << f1.GetDay() << "/" << f1.GetYear() << endl;

    f1.SetDate(2, 30, 2025);

    cout << "\nAfter Invalid SetDate:\n";
    cout << f1.GetMonth() << "/" << f1.GetDay() << "/" << f1.GetYear() << endl;
    
    cout << "\n---------------------------\n";
    cout << "       All Tests Complete        ";
    cout << "\n---------------------------\n";

    return 0;
}

