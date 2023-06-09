#include <iostream>
#include <fstream>

using namespace std;

void construire(int v[100], int &n) {
    ifstream fin("atestat.in", ios::in);
    int noulIndex = 0, temp, cifre=0, nr;
    fin >> nr;
    n = 1;
    while (!fin.eof()) {
        fin >> nr;
        n++;
    }
    fin.clear();
    fin.seekg(0, ios::beg);
    for (int i=0; i<n; i++) {
        fin >> v[i];
    }
    for (int i=0; i<n; i++) {
        temp = v[i];
        while (temp > 0) {
            cifre++;
            temp /= 10;
        }
        if (cifre == 3) {
            v[noulIndex] = v[i];
            noulIndex++;
        }
        cifre = 0;
    }
    n = noulIndex;
    fin.close();
}

int cautare(int v[100], int n, int x) {
    int poz=0, start = -1, sfarsit = n, mijloc;
    while (start < sfarsit && poz == 0) {
        mijloc = (start + sfarsit) / 2;
        if (v[mijloc] == x) {
            poz = mijloc;
            poz++;
        }
        if (v[mijloc] > x) {
            start = mijloc + 1;
        }
        if (v[mijloc] < x) {
            sfarsit = mijloc - 1;
        }
    }
    if (poz) {
        return poz;
    } else {
        return -1;
    }
}

int main()
{
    int v[100], n, cauta, pozitie;
    ofstream fout("atestat.out", ios::out);
    construire(v, n);
    cin >> cauta;
    pozitie = cautare(v, n, cauta);
    if (pozitie == -1) {
        fout << "nu exista";
    } else {
        fout << pozitie;
    }
    fout.close();
    return 0;
}
