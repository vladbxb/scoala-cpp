#include <iostream>
#include <iomanip>

using namespace std;

void showDollars (double);

int main()
{
    double payRate, hoursWorked, wages;

    cout << "How many hours have you worked? ";
    cin >> hoursWorked;
    cout << "What is your hourly pay rate? ";
    cin >> payRate;
    wages = hoursWorked * payRate;
    showDollars(wages);
    return 0;
}

void showDollars(double num) {
    cout << "Your wages are $";
    cout << fixed << setprecision(2) << num;
    cout << ".";
}
