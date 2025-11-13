#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int a = rand() % 11 + 4; // 4 dan 14 gacha son beradi

    cout << "Random card is: ";

    switch(a) {
        case 4: cout << "4"; break;
        case 5: cout << "5"; break;
        case 6: cout << "6"; break;
        case 7: cout << "7"; break;
        case 8: cout << "8"; break;
        case 9: cout << "9"; break;
        case 10: cout << "10"; break;
        case 11: cout << "joker"; break;
        case 12: cout << "dama"; break;
        case 13: cout << "king"; break;
        case 14: cout << "tuz"; break;
        default: cout << "unknown"; break;
    }
    int b=rand()%3+1;
    switch (b) {
        case 1: cout << " qarga"; break;
            case 2: cout << " chili"; break;
            case 3: cout << " sedtsa"; break;
            case 4: cout << " gisht"; break;
    }

    cout << endl;
    return 0;
}
