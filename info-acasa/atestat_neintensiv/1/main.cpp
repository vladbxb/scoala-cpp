#include <iostream>
#include <fstream>

using namespace std;

int cifre_pare(int x) {
    int temp = x;
    int cifre = 1;
    int suma = 0;
    int i;
    while (temp > 0) {
        temp /= 10;
        cifre *= 10;
    }
    cifre /= 10;
    bool cifrePare = false;
    for (i=cifre; i>0; i/=10) {
        if (((x / i) % 10 ) % 2 == 0) {
            cifrePare = true;
            suma += (x / i) % 10;
        }
    }
    return suma;
}

int main()
{
    //cout << cifre_pare(1234);
    int inutil, nr, suma = 0, suma_maxim = 0, maxim = 0;
    ifstream f("suma.in", ios::in);
    f >> inutil;
    while (!f.eof()) {
        f >> nr;
        suma += cifre_pare(nr);
        if (suma_maxim < suma) {
            maxim = nr;
            suma_maxim = suma;
        }
        suma = 0;
    }
    cout << suma_maxim << " " << maxim;
    f.close();
    return 0;
}
