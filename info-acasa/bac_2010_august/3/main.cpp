#include <iostream>

using namespace std;

int sir(int n, int a[]) {
    if (n<=2) {
        return 1;
    }
    if (n>3) {
        a[n-1] = 3 * sir(n-1, n-1) - sir(n-1, n-2);
    }
}

int main()
{
    int n = 6;
    int a[n];
    sir(n, a);
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
