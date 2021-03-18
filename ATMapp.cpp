#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********Menu**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "************************" << endl;
}

int main()
{
    int option;
    double balance = 5000;
    double depositAmount;
    double withdrawalAmount;
    // deposit money

    // withdrawal money

    // show menu
    do
    {

        showMenu();
        cout << "Option: ";
        cin >> option;
        system("clear");
        cout << option << endl;
        switch (option)
        {
        case 1:
        {
            cout << "Balance is: $" << balance << endl;
            break;
        }
        case 2:
        {
            cout << "Deposit amount: ";
            cin >> depositAmount;
            balance += depositAmount;
            cout << "New balance is " << balance << endl;
            break;
        }
        case 3:
        {
            cout << "Withdrawal amount: ";
            cin >> withdrawalAmount;
            if (withdrawalAmount <= balance)
            {
                balance -= withdrawalAmount;
            }
            else
            {
                cout << "This amount is unavailable at this time. Please add more money before trying to take it back out.";
            }
            cout << "Remaining balance: " << balance << endl;
            break;
        }
}

    } while (option != 4);

    return 0;
}