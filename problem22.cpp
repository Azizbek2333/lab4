#include <iostream>
#include <string>
using namespace std;
int main() {
    srand(time(0));
    int a = rand();
    int c = a % 2;
    string word;
cout <<a<<endl;
    cout << "Guess if the number is odd or even: ";
    cin >> word;

    if (c == 1 && word == "odd")
        cout << "Number is odd " << endl;
    else if (c == 0 && word == "even")
        cout << "Number is even " << endl;
    else
        cout << "Wrong guess " << endl;

    return 0;
}
