#include <iostream>

using namespace std;

int main()
{
    // in ab/cd/ef, if ab*cd=ef, it's a magic date
    int ab,cd,ef;
    cout << "Magic Date calculator" << endl;
    cout << "If you want to calculate if the day times the month is equal to the year, for example 6/10/1960, you've come to the right place!" << endl;
    cout << "Please input the day: ";
    cin >> ab;
    cout << "Please input the month: ";
    cin >> cd;
    cout << "Please input the last two digits of the year: ";
    cin >> ef;
    if (ab*cd==ef) {
        cout << "This is a magic date!" << endl;
    }
    else {
        cout << "This is not a magic date." << endl;
    }
    return 0;
}
