/* Create a program that prints out the electricity charge for a household based on the number of units consumed (units are received from the input). 
The rate is $0.12 per unit for the first 100 units and $0.15 per unit for additional units. */

#include<iostream>
using namespace std;

int main () {
    cout << "Enter how many units were consumed: \n";
    int units;
    cin >> units;
    double charge1 = 0.12 * units;
    double charge2 = (0.12 * 100) + (0.15 * (units - 100));
    if (units < 101) {
        cout << "For " << units <<  " units your electricity charge is: " << charge1 << "\n";
    }
    
    else {
        cout << "For " << units << " units your electricity charge is: " << charge2 << "\n";
    }

    
    
}