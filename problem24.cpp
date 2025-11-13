    #include <iostream>
    using namespace std;

    int main() {
        srand(time(0));
        int a=rand()%89+10;
        int b;
        cout<<"guess an number";
        cin>>b;
        if (b==a )cout<<"100% yes correc answer is "<<a;
        else if (b/10==a%10 ||a/10==b%10)cout<<"50 yes correct answer is"<<a;
        else cout<<"0% righ correct answer is"<<a;
        return 0;
    }
