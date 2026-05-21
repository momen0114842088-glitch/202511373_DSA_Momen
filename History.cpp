#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;

    // Start of the program loop
    do {
        cout << "\n====================================" << endl;
        cout << "   C++ FOUNDATIONS AND HISTORY      " << endl;
        cout << "====================================" << endl;
        cout << "1. View History of C++" << endl;
        cout << "2. View Programming Concepts" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Using switch-case as required for Question 3
        switch (choice) {
            case 1:
                cout << "\n[ HISTORY ]:" << endl;
                cout << "- Developed by Bjarne Stroustrup at Bell Labs in 1979." << endl;
                cout << "- It was originally called 'C with Classes'." << endl;
                cout << "- It is an extension of the C programming language." << endl;
                break;

            case 2:
                cout << "\n[ CONCEPTS ]:" << endl;
                cout << "- Data Types (int, float, char, string)." << endl;
                cout << "- Control Structures (if-else, switch-case)." << endl;
                cout << "- Loops (for, while, do-while)." << endl;
                cout << "- Data Structures (Arrays, Pointers)." << endl;
                break;

            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}