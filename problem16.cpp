#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade (0 - 100): ";
    cin >> grade;
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade! Must be between 0 and 100." << endl;
    }
    switch (grade / 10) {
        case 10:
        case 9:
            cout << "Your grade is: A" << endl;
            break;
        case 8:
            cout << "Your grade is: B" << endl;
            break;
        case 7:
            cout << "Your grade is: C" << endl;
            break;
        case 6:
            cout << "Your grade is: D" << endl;
            break;default:
            cout << "Your grade is: F" << endl;
            break;
    }
    return 0;
}
