#include <iostream>
#include <cmath>

using namespace std;

double presentValue(double futureValue, double interestRate, int years) {
    double result = futureValue / (pow((1+interestRate),years));
    return result;
}

int main()
{
    double futureValue, interestRate;
    int years;
    cout << "             Present Value Calculator               \n------------------------------------------------------\nWhat is the future amount you want in the account? ";
    cin >> futureValue;
    cout << "What is your annual interest rate? ";
    cin >> interestRate;
    cout << "How many years do you plan to let the money sit in the account? ";
    cin >> years;
    cout << "You need to deposit $" << presentValue(futureValue, interestRate, years) << " to have a balance of $" << futureValue << " in " << years << " years.";
    return 0;
}
