#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int key = (num > 0) ? 1 : ((num < 0) ? -1 : 0);

    switch (key) {
        case 1:
            cout << num << " is positive." << endl;
            break;
        case -1:
            cout << num << " is negative." << endl;
            break;
        case 0:
            cout << num << " is zero." << endl;
            break;
    }
    return 0;
}
