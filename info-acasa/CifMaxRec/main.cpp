#include <iostream>

using namespace std;

int cifmax(int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 10 > cifmax(n / 10)) {
        return n % 10;
    }
    return cifmax(n / 10);
}

int main()
{
    /*int num = 2050;
    int maxdigit = 0;
    while (num > 0) {
        if (maxdigit < num % 10) {
            maxdigit = num % 10;
        }
        num = num / 10;
    }
    cout << maxdigit;*/
    cout << cifmax(2050);
    return 0;
}
