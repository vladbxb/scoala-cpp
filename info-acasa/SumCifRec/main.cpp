#include <iostream>

using namespace std;

int sumcif(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumcif(n / 10);
}

int main()
{
    cout << sumcif(2050);
    return 0;
}
