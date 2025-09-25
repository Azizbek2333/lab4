#include <iostream>
using namespace std;
int  main() {
    int  a,b;
    cout << "Ener the first number:";
    cin  >> a;
    cout << "Enter the second number:";
    cin  >> b;
    if (a/b &&  a%b==0) {
        cout << "the first number is divisible by the second number";
    }
    else {
        cout << "the first number is not divisible by the second number";
    }
    return 0;
}
