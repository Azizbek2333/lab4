#include <iostream>
using namespace std;
int main() {
    int today;
    cout<<"Enter todays day:";
    cin>>today;
    int daysafter;
    cout<<"enter future day:";
    cin>>daysafter;
    int futureday=(today+daysafter)%7;
    cout<<"Today is ";
    switch (today) {
        case 1:cout<<"dushanba"<<endl;break;
        case 2:cout<<"sewanba"<<endl;break;
        case 3:cout<<"chorshanba"<<endl;break;
        case 4:cout<<"payshanba"<<endl;break;
        case 5:cout<<"Juma"<<endl;break;
        case 6:cout<<"SHanba"<<endl;break;
        case 0:cout<<" Yakshanba"<<endl;break;
    }
    cout<<"and the future day is ";
    switch (futureday){
        case 1:cout<<"dushanba"<<endl;break;
        case 2:cout<<"sewanba"<<endl;break;
        case 3:cout<<"chorshanba"<<endl;break;
        case 4:cout<<"payshanba"<<endl;break;
        case 5:cout<<"Juma"<<endl;break;
        case 6:cout<<"SHanba"<<endl;break;
        case 0:cout<<" Yakshanba"<<endl;break;
    }

    return 0;
