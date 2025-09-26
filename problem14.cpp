#include <iostream>
using namespace std;

int main() {
    int week;
    cout << " Pls input number of the weak:";
    cin >> week;
    if ( week == 1 ) cout << "monday";
    if (week == 2)  cout << "tuesday";
    if (week == 3)  cout << "wednesday";
    if (week == 4)  cout << "thursday";
    if (week == 5)  cout <<  "friday";
    if (week == 6)  cout << "saturday";
    if (week == 7)  cout << "sunday";
    else if (week >=7) cout <<"Week with that number does not exist";
    return 0;
}
