#include <iostream>
#include <fstream>

using namespace std;

void oglindit(int &x) {
    int oglindire=0, temp = x, cifre10=1;
    //ia cifre in baza 10
    while (temp >= 10) {
        cifre10 *= 10;
        temp /= 10;
    }
    temp = x;
    while (temp > 0) {
        //ia ultima cifra si inmulteste-o cu puterea de 10 asociata cu inceputul nr pana la sfarsitul nr
        oglindire += cifre10 * (temp % 10);
        temp /= 10;
        cifre10 /= 10;
    }
    x = oglindire;
}

void maxim(int a[20][20], int n, int &p) {
    int palindrom_max = 0, nr, inversa=0;
    bool gasitPalindrom = false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            // daca elementul se afla pe diagonala principala sau secundara
            if (i == j || (i + j == n - 1)) {
                //daca inversa este egala cu cifra nr este palindromic
                nr = a[i][j];
                oglindit(nr);
                if (a[i][j] == nr) {
                    gasitPalindrom = true;
                    if (a[i][j] > palindrom_max) {
                        palindrom_max = a[i][j];
                    }
                }
            }
        }
    }
    if (gasitPalindrom) {
        p = palindrom_max;
    } else {
        p = -1;
    }
}

//incercare implementare verificare nr palindromic oribila
/*bool palindrom(int n) {
    int palindrom_max = 0, palindrom, temp, nrcifre=0, nrcifrest, nrcifredr;
    bool estePalindrom = true;
    if (n < 10) {
        return true;
    }
    temp = n;
    while (temp > 0) {
        nrcifre++;
        temp /= 10;
    }
    if (nrcifre % 2 == 0) {
        //76544567 1000
        nrcifrest = nrcifre/2;
        nrcifredr = (nrcifre/2) - 1;
        // mai mic sau egal sau nu nu stiu
        // uita-te aici daca ai probleme
        for (int i=nrcifre/2; i<nrcifre; i++) {
            if ((n / (nrcifrest * 10)) % 10 != (n / (nrcifredr * 10)) % 10) {
                estePalindrom = false;
            }
            nrcifrest++;
            nrcifredr--;
        }
    } else {
        //12321 1000
        nrcifrest = (nrcifre/2) + 1;
        nrcifredr = (nrcifre/2) - 1;
        // mai mic sau egal sau nu nu stiu
        // uita-te aici daca ai probleme
        for (int i=(nrcifre/2) + 1; i<nrcifre; i++) {
            if ((n / (nrcifrest * 10)) % 10 != (n / (nrcifredr * 10)) % 10) {
                estePalindrom = false;
            }
            nrcifrest++;
            nrcifredr--;
        }
    }
    if (estePalindrom) {
        return true;
    }
    return false;
}*/

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime, rez;
    fin >> marime;
    int a[20][20];
    for (int i=0; i<marime; i++) {
        for (int j=0; j<marime; j++) {
            fin >> a[i][j];
        }
    }
    maxim(a, marime, rez);
    fout << rez;
    fin.close();
    fout.close();
    return 0;
}
