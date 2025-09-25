#include <iostream>
using namespace std;
int main() {
    int  a;
    cout << "Enter a number:";
    cin >> a ;
    if (a>=0 &&  a % 2 ==0) {
        cout << "Positive even number.";
    }
    if (a>=0 && a % 2 !=0) {
        cout << "Positive odd number";
    }
    if (a<=0 &&  a % 2 ==0) {
        cout << "Negative even number.";
    }
    if (a<=0 && a % 2 !=0) {
        cout << "Negative odd number";
    }
    return 0;
}
