#include <iostream>
#include <fstream>

using namespace std;

int nr_prim(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

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
    ifstream fin("numere.in", ios::in);
    int m, n;
    int consecutiv=0;
    fin >> m;
    while (!fin.eof()) {
        fin >> n;
        if (cmmdc(m, n) == 1) {
            consecutiv++;
        }
        m = n;
    }
    cout << consecutiv;
    fin.close();
    return 0;
}
