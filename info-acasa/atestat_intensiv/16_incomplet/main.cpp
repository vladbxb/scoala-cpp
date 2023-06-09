#include <iostream>
#include <fstream>

using namespace std;

bool cifra(char c) {
    if (c >= '1' && c <= '9') {
        return true;
    }
    return false;
}

void numar(int &n, int cif) {
    n *= 10;
    n += cif;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);

    int impar, impar_min = 9, impar_min_prec = 0, par, par_max = 0, par_max_prec = 9, constructie = 1;
    char c;
    bool impar_ordonat = true, par_ordonat = true;

    fin >> c;
    while (impar_ordonat) {
        impar_ordonat = false;
        while (!fin.eof()) {
            if (cifra(c)) {
                if (int(c) % 2 != 0) {
                    impar = int(c) - '0';
                    //cout << "i got here impar " << impar - '0' << endl;
                    if (impar_min > impar && impar_min_prec < impar) {
                        cout << "i got here impar" << endl;
                        impar_min = impar;
                        impar_ordonat = true;
                    }
                }
            }
            fin >> c;
        }
        numar(constructie, impar_min);
        impar_min_prec = impar_min;
    }
    fin.clear();
    fin.seekg(0, ios::beg);
    fin >> c;
    while (par_ordonat) {
        par_ordonat = false;
        while (!fin.eof()) {
            if (cifra(c)) {
                if (int(c) % 2 == 0) {
                    par = int(c) - '0';
                    //cout << "i got here par " << par - '0' << endl;
                    if (par_max < par && par_max_prec > par) {
                        cout << "i got here par" << endl;
                        par_max = par;
                        par_ordonat = true;
                    }
                }
            }
            fin >> c;
        }
        numar(constructie, par_max);
        par_max_prec = par_max;
    }

    fout << constructie;
    fin.close();
    fout.close();
    return 0;
}
