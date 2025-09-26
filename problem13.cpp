#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter trafic light signal(g)(y)(r) ";
    cin >> light;
    if ( light == 'Y' || light == 'y') {
        cout << "Get ready";
    }
    if (light == 'G' || light == 'g') {
        cout << "Go";
    }
    if ( light == 'R' || light == 'r') {
        cout << "Stop";
    }
    else cout << "input is not right";
return 0;}
