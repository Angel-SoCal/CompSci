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
    double withdrawCheck, depositCheck, withdrawSav, depositSav ;
    int account;
        //Account selection for withdrawl and amount
    case 1: 
        cout << "Which account do you want to withdraw from: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        //int account;
        cin >> account;
            if (account == 1) {   
                cout << "How much do you want to withdraw from your checking account: \n";
                cin >> withdrawCheck; 
            } else {
                cout << "How much do you want to withdraw from your savings account: \n";
                cin >> withdrawSav;
            }
        break;
        
        //Account selection for deposit and amount
    case 2:
        cout << "Which account do you want to deposit to: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        //int account;
        cin >> account;
            if (account == 1) {   
                cout << "How much do you want to deposit into your checking account: \n";
                double depositCheck;
                cin >> depositCheck; 
            } else {
                cout << "How much do you want to deposit into your savings account: \n";
                double depositSav;
                cin >> depositSav;
            }
        break;

        //Account selection and balance
    default:
        cout << "Which account do you want to balance from: \n";
        cout << "1 - Checking Account \n";
        cout << "2 - Savings Account \n";
        //int account;
        double balanceCheck, balanceSav;
            if (account == 1) {    
                cout << "The balance in your checking account: " << balanceCheck << "\n";
                double balanceCheck = balanceCheck + depositCheck - withdrawCheck;
            } else {
                cout << "The balance in your savings account: " << balanceSav << "\n";
                double balanceSav = balanceSav + depositSav - withdrawSav;
        break;
    
            } 
    }
}

