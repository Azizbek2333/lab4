#include <iostream>
using namespace std;

int main() {
    double weight1, price1, weight2, price2;

    cout << "Enter price and weight for package 1: ";
    cin >> price1 >> weight1;

    cout << "Enter price and weight for package 2: ";
    cin >> price2 >> weight2;
    double cost1 = price1 / weight1;
    double cost2 = price2 / weight2;

    if (cost1 > cost2) {
        cout << "I recommend to buy package 2" << endl;
    } else if (cost1 < cost2) {
        cout << "I recommend to buy package 1" << endl;
    } else {
        cout << "They have the same price" << endl;
    }

    return 0;
}
