#include <iostream>
using namespace std;

int main() {
    int number;
    cout << " Enter number 3 digit number";
    cin >> number ;
    int first = number / 100;
    int last = number % 10;
    if (first == last) {
        cout << number<< " is a palindrome number." << endl;
    } else {
        cout << number << " is not a palindrome number." << endl;
    }

    return 0;
