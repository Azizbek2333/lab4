#include <iostream>
#include "math.h"
using namespace std;
int main() {
    double x1,y1;
    cin>>x1>>y1;
    double d=(x1*x1 + y1*y1);
    if (sqrt(d)<=10) cout<<"("<<x1<<","<<y1<<") is in circle"<<endl;
    else cout<<"("<<x1<<","<<y1<<") is not in circle"<<endl;




    return 0;


}
