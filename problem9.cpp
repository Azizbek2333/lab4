#include <iostream>
using namespace std;
int  main() {
    int  a;
    cout << "Ener  speed:";
    cin  >> a ;
    if (a<20)  {
        cout << " Too slow";
    }
    if (a>80)  {
        cout << " Too fast";
    }
    if (a>=20 && a<=80 ) {
        cout << "right";
    }
    return 0;
}
