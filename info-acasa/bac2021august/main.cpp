#include <iostream>
#include <fstream>

using namespace std;

bool asemenea(int x, int y) {
        if ((x % 10 == (y / 10) % 10 && (x / 10) % 10 == y % 10) || (x % 10 == y % 10 && (x / 10) % 10 == (y / 10) % 10)) {
                return true;
        }
        return false;
}

int main() {
        int na, nb, suma = 0;
        ifstream fin("numere.in", ios::in);
        fin >> na >> nb;
        int s1[na];
        int s2[nb];
        for (int i=0; i<na; i++) {
                fin >> s1[i];
        }
        for (int i=0; i<nb; i++) {
                fin >> s2[i];
        }
        for (int i=0; i<na; i++) {
                for (int j=0; j<nb; j++) {
                        if (asemenea(s1[i], s2[j])) {
                                suma++;
                        }
                }
        }

        cout << suma;
        fin.close();
}

