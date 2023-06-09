#include <iostream>

using namespace std;

void tablou(int n, int k, int a[]) {
    for (int i=0; i<n*k; i++) {
        a[i] = 1 + i/k;
    }
}

int main()
{
    int n=4, k=3;
    int a[n*k];
    tablou(n, k, a);
    for (int i=0; i<n*k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
