#include <iostream>

using namespace std;

int pozitie(int n, int v[100], int x) {
    for (int i=1; i<=n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6 ,7};
    int n = 7;
    int x = 4;
    cout << pozitie(n, v, x);
    return 0;
}
