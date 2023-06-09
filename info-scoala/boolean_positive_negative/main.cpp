#include <iostream>

using namespace std;

bool positive_or_negative(int num) {
    if (num > 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter an integer and I will tell you if it's positive or negative: ";
    cin >> num;
    if (positive_or_negative(num))
        cout << num << " is positive.";
    else
        cout << num << " is negative.";
    return 0;
}
