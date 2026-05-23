#include <iostream>
using namespace std;

// Function to find average
float findAverage(int a, int b, int c) {
    int sum = a + b + c;
    return sum / 3.0;
}

int main() {

    string name;
    int sub1, sub2, sub3;
    int totalMarks;
    float average;
    char option;

    do {

        cout << "\n====== Student Result System ======" << endl;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Subject 1 Marks: ";
        cin >> sub1;

        cout << "Enter Subject 2 Marks: ";
        cin >> sub2;

        cout << "Enter Subject 3 Marks: ";
        cin >> sub3;

        totalMarks = sub1 + sub2 + sub3;

        average = findAverage(sub1, sub2, sub3);

        cout << "\n----- Result -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Average: " << average << endl;

        if (average >= 50) {
            cout << "Final Result: PASS" << endl;
        }
        else {
            cout << "Final Result: FAIL" << endl;
        }

        cout << "\nWould you like to enter another student? (y/n): ";
        cin >> option;

    } while (option == 'y' || option == 'Y');

    cout << "\nThank You!" << endl;

    return 0;
}