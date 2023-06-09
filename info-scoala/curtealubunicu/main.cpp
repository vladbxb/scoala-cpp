#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long double d1,d2,a;
    cin >> d1 >> d2;
    a = (d1/2)*(d1/2) + (d2/2)*(d2/2);
    a = sqrt(a);
    cout << 4*a << " ";
    cout << (d1 * d2)/2;
}
