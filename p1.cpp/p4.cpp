/*
Create a program that prompts the user to enter the day of the week (1 for Monday, 2 for Tuesday, etc.) 
and then displays whether it's a weekday or a weekend day.*/

#include<iostream>
using namespace std;

int main () {
     cout << "Enter the day of the week (1 for Sunday, 2 for Monday, 3 for Tuesday, 4 for Wednesday, 5 for Thursday, 6 for Friday, 7 for Saturday): \n";
     int number;
     cin >> number;
     switch (number) {
        case 1:
        case 7:
            cout << "It's a weekend. \n";
            break;
        default: 
            cout << "It's a weekday. \n";
     }

}
   