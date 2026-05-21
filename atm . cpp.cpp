#include <iostream>
using namespace std;

int main() {

    int pin = 1234;
    int userPin;
    int balance = 0;
    int choice, amount;

    cout << "Enter PIN: ";
    cin >> userPin;

    if (userPin == pin) {

        do {

            cout << "\n1. Check Balance";
            cout << "\n2. Deposit";
            cout << "\n3. Withdraw";
            cout << "\n4. Exit";
            cout << "\nEnter Choice: ";
            cin >> choice;

            switch(choice) {

            case 1:
                cout << "Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Enter Amount: ";
                cin >> amount;

                if(amount > balance)
                    cout << "Insufficient Balance" << endl;
                else
                    balance -= amount;

                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
            }

        } while(choice != 4);

    } else {

        cout << "Wrong PIN" << endl;
    }

    return 0;
}
