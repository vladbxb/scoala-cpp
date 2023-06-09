#include <iostream>

using namespace std;

void showIntro();
double getCups();
double cupsToOunces(double);

int main()
{
    double n;
    showIntro();
    n = getCups();
    cout << cupsToOunces(n) << " fluid ounces";
}

void showIntro () {
    cout << "This program converts cups to ounces.\nPlease enter a number: ";
}

double getCups() {
    int cups;
    cin >> cups;
    return cups;
}

double cupsToOunces(double num) {
    return num * 8;
}
