#include <iostream>
using namespace std;

int main() {
    int today, daysAfter;
    cout << "Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> today;
    cout << "Enter the number of days after today: ";
    cin >> daysAfter;
    int futureDay = (today + daysAfter) % 7;
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Today is " << days[today]
         << " and the future day is " << days[futureDay] << endl;

    return 0;
}
