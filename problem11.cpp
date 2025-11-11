#include <iostream>
using namespace std;
int main() {
    double x1,y1,x2,y2;
    cout<<"Enter weight and price for 1 product";
    cin>>x1>>y1;
    cout<<"Enter weight and price for 2 product";
    cin>>x2>>y2;
    double a1=x1/y1;
    double a2=x2/y2;
    if (a1>a2) cout<<"product 1 is better";
    if (a2>a1) cout<<"product 2 is better";
    else cout<<"Two products has the same price";



    return 0;


}
}
