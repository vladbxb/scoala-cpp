#include <iostream>
#include <fstream>

using namespace std;

void sterge(int v[100], int &n, int x) {
    int noulIndex=0;
    for (int i=0; i<n; i++) {
        // pentru toate elementele inegale cu x suprascrie vectorul
        if (v[i] != x) {
            v[noulIndex] = v[i];
            noulIndex++;
        }
    }
    n = noulIndex;
}

int cif(int n) {
    int placeholder = n;
    int neparitare = 0;
    int cifraAnterioara;
    // init element anterior
    cifraAnterioara = placeholder % 10;
    placeholder /= 10;
    // verifica paritate cifra anterioara si cifra curenta
    while (placeholder > 0) {
        if ((placeholder % 10) % 2 != cifraAnterioara % 2) {
            neparitare = 1;
        }
        placeholder /= 10;
    }
    // daca a gasit o schimbare in paritate inverseaza pt valoarea reala
    return !neparitare;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime;
    fin >> marime;
    int v[marime];
    int placeholder;
    for (int i=0; i<marime; i++) {
        fin >> v[i];
    }
    for (int i=0; i<marime; i++) {
        if (cif(v[i])) {
            sterge(v, marime, v[i]);
            i = 0;
        }
    }
    for (int i=0; i<marime; i++) {
        fout << v[i] << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
