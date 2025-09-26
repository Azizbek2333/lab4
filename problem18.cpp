#include <iostream>
using namespace std;

int main() {
    char choice;
    cout << "Choose a language for greeting:" << endl;
    cout << "u - Uzbek" << endl;
    cout << "e - English" << endl;
    cout << "r - Russian" << endl;
    cout << "g - German" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 'u':
        case 'U':
            cout << "Salom!" << endl;
            break;
        case 'e':
        case 'E':
            cout << "Hello!" << endl;
            break;
        case 'r':
        case 'R':
            cout << "Privet!" << endl;
            break;
        case 'g':
        case 'G':
            cout << "Hallo!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter u, e, r, or g." << endl;
    }
    return 0;
}
