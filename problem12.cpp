#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int a=x/100;int b=x%10;
    if (a==b)cout<<"palindrome number";
    else cout<<"not palindrome";

    return 0;


}
