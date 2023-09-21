/* Develop a program that takes a user's birthdate and the current date as input 
and calculates their age in years, months, and days. */

#include <chrono>
#include<iostream>
using namespace std;

int main () {
    int byear, bmonth, bday;
    cout << "Please enter your date of birth (Year Month Day): \n";
    cin >> byear >> bmonth  >> bday;
    int cyear, cmonth, cday;
    cout << "Please enter today's date (Year Month Day): \n";
    cin >> cyear  >> cmonth >> cday;
    int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int years = cyear - byear;
    int months, days;
    if (cmonth < bmonth) { 
        years--;
        int months = 12 - (bmonth - cmonth);       
    }
    else {              
        months = cmonth - bmonth;}
    if (cday < bday) {
        months--;
        days = md[cmonth - 1] - (bday - cday);
    }
    else { 
        days = cday - bday;}
    cout << "Your age is: \n";
    cout << years << " years " << months << " months " << days << " days. ";

    
}
