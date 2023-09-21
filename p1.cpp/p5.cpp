/* Develop a program that simulates a simple ATM. Ask the user to select an option (withdraw, deposit, check balance) 
and use a switch statement to perform (by printing a message on the screen) the corresponding operation. */

#include<iostream>
using namespace std;

int main () {

    //Option selection from main menu
    cout << "Please select from the following options: \n";
    cout << "1 - Withdraw \n";
    cout << "2 - Deposit \n";
    cout << "3 - Balance \n";
    int option; 
    cin >> option;

    //Account selection for withdrawal, deposit, and balance
    switch (option) {
    int account;

        //Account selection for withdrawl and amount
    case 1: 
        cout << "Which account do you want to withdraw from: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        cin >> account;
        break;
        
        //Account selection for deposit and amount
    case 2:
        cout << "Which account do you want to deposit to: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        cin >> account;
        break;

        //Account selection and balance
    default:
        cout << "Which account do you want to balance from: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        break;
    
    } 
}

