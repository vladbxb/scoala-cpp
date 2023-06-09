#include <iostream>

using namespace std;

int elimcif(int n, int c) {
    if (n == c) {
        return 0;
    }
    if (n < 10 && n != c) {
        return n;
    }
    if (n % 10 != c) {
        return n % 10 + elimcif(n / 10, c) * 10;
    }
    return elimcif(n / 10, c);
}

int main()
{
    cout << elimcif(2454, 4);
    return 0;
}
