#include <iostream>

using namespace std;

bool estePrim(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int getCifrePrime(int n) {
    if (n == 1) {
        return 0;
    }
    if (estePrim(n % 10)) {
        return 1 + getCifrePrime(n/10);
    }
    return getCifrePrime(n/10);
}

int main()
{
    cout << getCifrePrime(12345);
    return 0;
}
