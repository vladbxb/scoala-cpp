#include <iostream>
using namespace std;
// You must write definitions for the two functions qualify
// and noQualify.
void qualify() {
    cout << "You are qualified for the card and the annual interest rate is 12%.";
}

void noQualify() {
    cout << "You are not qualified because your salary and experience does not match our expectations.";
}

int main()
{
double salary;
int years;
cout << "This program will determine if you qualify\n";
cout << "for our credit card.\n";
cout << "What is your annual salary? ";
cin >> salary;
cout << "How many years have you worked at your ";
cout << "current job? ";
cin >> years;
if (salary >= 17000.0 && years >= 2)
qualify();
else
noQualify();
return 0;
}
