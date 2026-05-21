#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n===== FOUNDATIONS OF C++ =====";
        cout << "\n1. History of C++";
        cout << "\n2. Learn C++";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "\nC++ was created by Bjarne Stroustrup." << endl;
            break;

        case 2:
            cout << "\nTopics in C++:" << endl;
            cout << "- Data Types" << endl;
            cout << "- Loops" << endl;
            cout << "- Arrays" << endl;
            cout << "- Control Flow" << endl;
            break;

        case 3:
            cout << "\nGoodbye!" << endl;
            break;

        default:
            cout << "\nInvalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}
