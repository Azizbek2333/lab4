#include <iostream>
using namespace std;
int  main() {
    int  a,b,c;
    cout << "Ener  angles:";
    cin  >> a >> b >> c;
    if (a + b + c == 180 && a+b >=c && a+c>=b)  {
        cout << "Triangle exists";
    }
    else  cout << "Triangle does not exists";
    return 0;
