#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    double distance = sqrt(x * x + y * y);

    if (distance <= 10) {
        cout << "Point ("<<  x << ", " << y << ") in   circle." << endl;
    } else {
        cout << "Point (" << x << ", " << y << ") is outside the circle." << endl;
    }

    return 0;
}
