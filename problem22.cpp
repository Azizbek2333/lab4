
#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int a=rand();
    cout<<"The number is"<<a<<endl;
    cout<<"Is it odd or even "<<endl;
    string odd;
    cin>>odd;
    if(a%2==0 && odd=="even" )cout<<"You are right its even";
    else if(a%2!=0 && odd=="odd")cout<<"You are right its odd";
    else cout<<"No it is not "<<odd<<endl;



    return 0;
}
