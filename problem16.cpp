
#include <iostream>
using namespace std;
int main() {
    int grade;
    cout<<"Enter grade from 100 to 1"<<endl;
    cin>>grade;
    if (grade>100||grade<0) {
        cout<<"invalid value";
    }
    cout<<"The grade is ";
    switch (grade/10) {
        case 10:cout<<"A";break;
        case 9:cout<<"A";break;
        case 8:cout<<"B";break;
        case 7:cout<<"C";break;
        case 6:cout<<"D";break;
        default:cout<<"F";break;
    }
return 0;
        }
}
