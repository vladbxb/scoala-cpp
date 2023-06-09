#include <iostream>

using namespace std;

int main()
{
    float a_bought, b_bought, c_bought, a_cost, b_cost, c_cost, a_income, b_income, c_income;
    a_bought = 20;
    b_bought = 8;
    c_bought = 4;

    a_cost = 15;
    b_cost = 12;
    c_cost = 9;

    a_income = a_bought * a_cost;
    b_income = b_bought * b_cost;
    c_income = c_bought * c_cost;
    cout << "How many tickets were sold for each class of seats?" << endl;
    cout << "Generated income: " << endl;
    cout << "For Class A: $" << fixed << setprecision(2) << a_income << endl;
    cout << "For Class B: $" << fixed << setprecision(2) << b_income << endl;
    cout << "For Class C: $" << fixed << setprecision(2) << c_income;
    return 0;
}
