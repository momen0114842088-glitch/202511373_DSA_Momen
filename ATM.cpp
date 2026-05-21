#include <iostream>
#include <string>

using namespace std;

// This function shows the options to the user
void myMenu() {
    cout << "\n--- Momen Digital Banking ---" << endl;
    cout << "1. View Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. History" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose: ";
}

int main() {
    int myPin = 7114; // You can change this PIN
    int inputPin;
    int tries = 0;
    int balance = 0;
    int userChoice;
    int cash;
    
    // Array to save history (up to 50 transactions)
    string myHistory[50];
    int hCount = 0;

    // Login system: 3 attempts only
    while (tries < 3) {
        cout << "Please enter your PIN: ";
        cin >> inputPin;
        if (inputPin == myPin) {
            cout << "Correct PIN!" << endl;
            break;
        } else {
            tries++;
            cout << "Wrong! Tries used: " << tries << "/3" << endl;
        }
    }

    if (tries == 3) {
        cout << "Too many wrong tries. Goodbye." << endl;
        return 0;
    }

    // Main program loop
    do {
        myMenu();
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "Your balance is: " << balance << " FRW" << endl;
        } 
        else if (userChoice == 2) {
            cout << "How much to deposit? ";
            cin >> cash;
            balance = balance + cash;
            myHistory[hCount] = "Added: " + to_string(cash);
            hCount++;
            cout << "Done!" << endl;
        } 
        else if (userChoice == 3) {
            cout << "How much to withdraw? ";
            cin >> cash;
            if (cash <= balance) {
                balance = balance - cash;
                myHistory[hCount] = "Took: " + to_string(cash);
                hCount++;
                cout << "Success!" << endl;
            } else {
                cout << "No enough money!" << endl;
            }
        } 
        else if (userChoice == 4) {
            cout << "--- Your History ---" << endl;
            for (int i = 0; i < hCount; i++) {
                cout << i + 1 << ". " << myHistory[i] << endl;
            }
        }
    } while (userChoice != 5);

    cout << "Thank you for using our ATM!" << endl;
    return 0;
}
