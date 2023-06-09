#include <iostream>
#include <fstream>

using namespace std;

int nr_div(int n) {
    int nr = 0;
    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            nr++;
        }
    }
    return nr;
}

int main()
{
    int maxim = 0, maximNr, nr, numarDivizori;
    ifstream fin("divizori.in", ios::in);
    fin >> nr;
    while (!fin.eof()) {
        numarDivizori = nr_div(nr);
        if (maxim < numarDivizori || maxim == numarDivizori) {
            maxim = numarDivizori;
            maximNr = nr;
        }
        fin >> nr;
    }
    cout << maximNr;
    fin.close();
    return 0;
}
