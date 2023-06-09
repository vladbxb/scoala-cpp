#include <iostream>

using namespace std;

int* inserare(int &n, int a[]) {
    int nrpare=0;
    int a2[n];
    int k=0;
    for (int i=0; i<n; i++) {
        a2[i+k] = a[i];
        if (a[i] % 2 == 0) {
            nrpare++;
            a2[i] = 2011;
            k++;
        }
    }
    n += nrpare;
    return a2;
}

int main()
{
    int n=7;
    int a[n] = {1, 4, 5, 3, 82, 6, 2};

    return 0;
}
