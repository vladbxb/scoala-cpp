#include <iostream>
#include <fstream>

using namespace std;

int nrpare_p(int n, int v[100][100]) {
    int par=0;
    for (int i=0; i<n; i++) {
        if (v[i][i] % 2 == 0) {
            par++;
        }
    }
    if (par) {
        return par;
    } else {
        return -1;
    }
}

int nrpare_s(int n, int v[100][100]) {
    int par=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if ((i + j) == n - 1 && v[i][j] % 2 == 0) {
                par++;
            }
        }
    }
    if (par) {
        return par;
    } else {
        return -1;
    }
}

int main()
{
    ifstream fin("matrice.in", ios::in);
    int n, v[100][100];
    fin >> n;
    //cout << "n este: " << n << "\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            fin >> v[i][j];
            //out << "v este: " << v[i][j] << "\n";
        }
    }
    int impare=0;
    impare += n - nrpare_p(n, v);
    impare += n - nrpare_s(n, v);
    if (impare) {
        cout << impare;
    } else {
        cout << "nu exista";
    }
    fin.close();
    return 0;
}
