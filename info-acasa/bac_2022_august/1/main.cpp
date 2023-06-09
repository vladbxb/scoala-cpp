#include <iostream>

using namespace std;

void schimb(int &n, int x, int p) {
    int putere=1;
    while (p > 0) {
        p--;
        putere *= 10;
    }
    n = n - ((n / putere) % 10) * putere;
    //10587
    n = n + x * putere;
    //16587
}

int main()
{
    int n=12587,x=6,p=3;
    schimb(n, x, p);
    cout << n;
    return 0;
}
