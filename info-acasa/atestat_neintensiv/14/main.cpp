#include <iostream>
#include <fstream>

using namespace std;

void secv_tablou(int n, int v[1001], int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << v[i] << " ";
    }
}

int main()
{
    int inutil, k, nr, temp, marime;
    ifstream fin("secventa_k.in", ios::in);
    fin >> marime;
    int v[marime];
    cin >> k;
    /*while (!fin.eof()) {
        fin >> nr;
        if (nr == k) {
            while (!fin.eof()) {
                fin >> temp;
                if (temp == k) {
                    secv_tablou(0, );
                }
            }
            nr = 0;
            fin.clear();
            fin.seekg(0, ios::beg);
        }
    }
    */
    for (int i = 0; i < marime; i++) {
        fin >> v[i];
    }
    for (int i = 0; i < marime; i++) {
        if (v[i] == k) {
            for (int j = i + 1; j < marime; j++) {
                if (v[i] == v[j]) {
                    secv_tablou(marime, v, i, j);
                    cout << endl;
                }
            }
            v[i] = 0;
        }
    }
    fin.close();
    return 0;
}
