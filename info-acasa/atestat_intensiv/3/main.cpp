#include <iostream>
#include <fstream>

using namespace std;

void inversareCifre(int &x) {
    int placeholder = x;
    int baza10 = 1;
    int rezultat = 0;
    // puterea in baza 10
    while (placeholder >= 10) {
        baza10 *= 10;
        placeholder /= 10;
    }
    // adauga prima cifra deja prezenta in x
    rezultat += baza10 * (x / baza10);
    x = x % baza10;
    baza10 /= 10;
    // inverseaza ce cifre au ramas
    while (x > 0) {
        rezultat += (x % 10) * baza10;
        baza10 /= 10;
        x /= 10;
    }
    x = rezultat;
}

int nrDivizori(int x) {
    int nr=2;
    for (int i=2; i<x; i++) {
        if (x % i == 0) {
            nr++;
        }
    }
    return nr;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime, nr;
    fin >> marime;
    bool modificari = false;
    int v[marime];
    for (int i=0; i<marime; i++) {
        fin >> v[i];
        if (nrDivizori(v[i]) > 4) {
            inversareCifre(v[i]);
            modificari = true;
        }
    }
    if (modificari) {
        for (int i=0; i<marime; i++) {
            fout << v[i] << " ";
        }
    } else {
        fout << "nu au fost facute modificari";
    }
    fin.close();
    fout.close();
    return 0;
}
