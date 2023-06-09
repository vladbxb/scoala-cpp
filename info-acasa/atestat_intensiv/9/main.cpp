#include <iostream>
#include <fstream>

using namespace std;

bool prim(int x) {
        for (int i=2; i*i<=x; i++) {
                if (x % i == 0) {
                        return false;
                }
        }
        return true;
}

int contorizare(int y) {
        if (y == 0) {
                return 0;
        }
        if (y % 2 == 0) {
                return 1 + contorizare(y/10);
        }
        return contorizare(y/10);
}

int main() {
        ifstream fin("atestat.in", ios::in);
        ofstream fout("atestat.out", ios::out);
        int inutil, nr, maxim_prim = 0, maxim_par = 0;
        fin >> inutil;
        while (!fin.eof()) {
            fin >> nr;
            if (prim(nr)) {
                int pare = contorizare(nr);
                if (maxim_par < pare) {
                    maxim_prim = nr;
                    maxim_par = pare;
                } else if (maxim_par == pare && nr < maxim_prim) {
                    maxim_prim = nr;
                }
            }
        }
        fout << maxim_prim << " " << maxim_par;
        return 0;
}
