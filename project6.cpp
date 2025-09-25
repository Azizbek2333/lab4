#include <iostream>
#include <cmath>   
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real roots: x1 = " << x1 << ", x2 = " << x2;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "One real root: x = " << x;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Complex roots: "
             << realPart << " + " << imagPart << "i, "
             << realPart << " - " << imagPart << "i";
    }
    return 0;
}
