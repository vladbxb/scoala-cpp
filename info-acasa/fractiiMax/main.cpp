#include <iostream>

using namespace std;

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

int simplifica(int a, int b) {
    if (cmmdc(a, b) == 1) {
        cout << a << " " << b;
        return 0;
    }
    return simplifica(a/cmmdc(a, b), b/cmmdc(a, b));
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a/b > c/d) {
        simplifica(a, b);
    } else {
        simplifica(c, d);
    }
    return 0;
}
