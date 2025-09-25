#include <iostream>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (int(a) >= 65 && int(a) <= 90) {
        cout << "Uppercase letter"<<endl;
    }
    else if (int(a) >= 97 && int(a) <=122) {
        cout << "Lowercas letter" ;
    }
    else
        cout << "It is not an alphabet" << endl;
    return 0;
}
