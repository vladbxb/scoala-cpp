#include <iostream>
#include <fstream>

using namespace std;

int verif(int x) {
    bool impare = false;
    int placeholder = x;
    while (placeholder > 0) {
        if ((placeholder % 10) % 2 != 0) {
            impare = true;
        }
        placeholder /= 10;
    }
    return !impare;
}

void modif(int &x) {
    int placeholder=x;
    int numarcreat = 0;
    int baza10 = 1;
    while (placeholder > 0) {
        // daca cifra este para, cand numarul este construit cifra este injumatatita
        if ((placeholder % 10) % 2 == 0) {
            numarcreat += ((placeholder % 10) / 2) * baza10;
        } else {
            // altfel cifra ramane la fel in constructie
            numarcreat += (placeholder % 10) * baza10;
        }
        baza10 *= 10;
        placeholder /= 10;
    }
    x = numarcreat;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime, nr;
    fin >> marime;
    for (int i=0; i<marime; i++) {
        fin >> nr;
        // daca toate cifrele sunt pare injumatateste-le
        if (verif(nr)) {
            modif(nr);
        }
        fout << nr << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
