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
    cout << "Present Value Calculator\nInput the future value: ";
    cin >> futureValue;
    cout << "Input the annual interest rate: ";
    cin >> interestRate;
    cout << "Input the number of years: ";
    cin >> years;
    cout << "The present value is: " << presentValue(futureValue, interestRate, years);
    return 0;
}
