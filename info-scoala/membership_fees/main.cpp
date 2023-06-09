#include <iostream>

using namespace std;

int main()
{
    int i,new_tax=0;
    const int initial_tax = 2500;
    cout << "The tax this year is: $" << initial_tax << "." << endl;
    cout << "The tax values for the next 6 years are: " << endl;
    for (i=1;i<=6;i++) {
        new_tax += (initial_tax + (4*initial_tax)/100);
        cout << "Year " << i << ": $" << new_tax << endl;
    }
    return 0;
}
