#include <iostream>
#include <cstring>

using namespace std;

char* tail(char s[]) {
    return s+1;
}

int minstr(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    if (b <= a && b <= c) {
        return b;
    }
    return c;
}

int lev(char a[], char b[]) {
    if (strlen(a) == 0) {
        return strlen(b);
    }
    if (strlen(b) == 0) {
        return strlen(a);
    }
    if (a[0] == b[0]) {
        return lev(tail(a), tail(b));
    }
    return 1 + minstr(lev(a, tail(b)), lev(tail(a), tail(b)), lev(tail(a), tail(b)));
}

int main()
{
    char a[1000], b[1000];
    cin >> a >> b;
    cout << lev(a, b);
    return 0;
}
