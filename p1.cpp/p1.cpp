/* Write a program that takes a user's age as input and prints out whether they are a child (0-12), 
a teenager (13-19), an adult (20-64), or a senior (65 and older). */

#include<iostream>
using namespace std;

int main () {
    cout << "Enter your age: \n";
    int age;
    cin >> age;
    if (age < 0) {
        cout << "You are a child.\n";
    }
    else if (age > 12 && age < 20) {
        cout << "You are a teenager.\n";
    }
    else if (age > 19 && age < 65) {
        cout << "You are an adult.\n";
    }
    else {
        cout << "You are a senior.\n";
    }

    
    
}