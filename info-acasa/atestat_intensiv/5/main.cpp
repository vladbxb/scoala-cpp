#include <iostream>
#include <fstream>

using namespace std;

void citeste(double v[100], int n) {
    ifstream fin("atestat.in", ios::in);
    int inutil;
    fin >> inutil;
    for (int i=0; i<n; i++) {
        fin >> v[i];
    }
    fin.close();
}

int pozmax(double v[100], int p1, int p2) {
    int maxim=0, maxpoz;
    for (int i=p1; i<=p2; i++) {
        if (maxim < v[i]) {
            maxim = v[i];
            maxpoz = i;
        }
    }
    return maxpoz;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime, maxpoz, p1=0;
    fin >> marime;
    double v[marime];
    citeste(v, marime);
    for (int i=0; i<marime; i++) {
        maxpoz = pozmax(v, p1, marime - 1);
        if (v[i] < v[maxpoz]) {
            swap(v[i], v[maxpoz]);
        }
        p1++;
    }
    for (int i=0; i<marime; i++) {
        fout << v[i] << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
