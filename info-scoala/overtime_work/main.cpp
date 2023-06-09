#include <iostream>

using namespace std;

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

double getBasePay(int hours) {
    if (hours <= BASE_HOURS) {
        return hours * PAY_RATE;
    } else {
        return BASE_HOURS * PAY_RATE;
    }
}

double getOvertimePay(int hours) {
    return (hours - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
}

int main()
{
    int hoursWorked;
    cout << "Gross Pay Calculator\n";
    cout << "How many hours have you worked? ";
    cin >> hoursWorked;
    if (hoursWorked <= BASE_HOURS) {
        cout << "Your gross pay is $" << getBasePay(hoursWorked);
    } else {
        cout << "Your gross pay is $" << getBasePay(hoursWorked) + getOvertimePay(hoursWorked);
    }
    return 0;
}
