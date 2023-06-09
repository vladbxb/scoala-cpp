#include <iostream>
#include <fstream>

using namespace std;

int p_cifra(int y) {
    if (y < 10) {
        return y;
    }
    if (y >= 10) {
        return p_cifra(y / 10);
    }
}

void sortare(int v[100], int n) {
    bool gasit = true;
    while (gasit) {
        gasit = false;
        // itereaza pana cand niciun element din sir nu este mai mic decat urmatorul, atunci opreste iterarea
        for (int i=1; i<n; i++) {
            if (v[i-1] < v[i]) {
                swap(v[i-1], v[i]);
                gasit = true;
            }
        }
    }
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime, cifra_semnificativa;
    fin >> marime;
    int v[marime];
    for (int i=0; i<marime; i++) {
        fin >> v[i];
    }
    sortare(v, marime);
    for (int i=0; i<marime; i++) {
        cifra_semnificativa = p_cifra(v[i]);
        // daca prima cifra este patrat perfect atunci scrie numarul respectiv in atestat.out
        if (cifra_semnificativa == 1 || cifra_semnificativa == 4 || cifra_semnificativa == 9) {
            fout << v[i] << " ";
        }
    }
    fin.close();
    fout.close();
    return 0;
}
