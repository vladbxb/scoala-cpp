#include <iostream>

using namespace std;

bool isValid(int num) {
    int digits=0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    if (digits == 4)
        return digits;
}

int main()
{
    int pin;
    cout << "Enter a 4 digit PIN: ";
    cin >> pin;
    if (isValid(pin))
        cout << "PIN accepted.";
    else
        cout << "PIN denied.";
    return 0;
}
