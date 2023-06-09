#include <iostream>

using namespace std;

// am descoperit algoritmul lui euclid pe net

int cmmdc(int m, int n) {
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return m;
    }
    if (m > n) {
        return cmmdc(m-n, n);
    }
    return cmmdc(n-m, m);
}

int main()
{
    cout << cmmdc(18, 24);
    return 0;
}
