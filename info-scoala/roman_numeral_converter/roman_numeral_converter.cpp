#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Roman Numeral Calculator" << endl;
    cout << "Please enter a number: ";
    cin >> num;
    switch (num) {
    case 1:
        cout << "Roman numeral is: I" << endl;
        break;
    case 2:
        cout << "Roman numeral is: II" << endl;
        break;
    case 3:
        cout << "Roman numeral is: III" << endl;
        break;
    case 4:
        cout << "Roman numeral is: IV" << endl;
        break;
    case 5:
        cout << "Roman numeral is: V" << endl;
        break;
    case 6:
        cout << "Roman numeral is: VI" << endl;
        break;
    case 7:
        cout << "Roman numeral is: VII" << endl;
        break;
    case 8:
        cout << "Roman numeral is: VIII" << endl;
        break;
    case 9:
        cout << "Roman numeral is IX" << endl;
        break;
    case 10:
        cout << "Roman numeral is: X" << endl;
        break;
    default:
        cout << "Please input a number from 1 to 10" << endl;
    }
    return 0;
}
