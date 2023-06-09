#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void citire(char cuv[30][3001], int n) {
    ifstream fin("atestat.in", ios::in);
    int inutil;
    fin >> inutil;
    for (int i=0; i<n; i++) {
        fin >> cuv[i];
    }
    fin.close();
}

int stergere(char s[101], char c) {
    int newIndex = 0;
    int stergeri = 0;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[newIndex] = s[i];
            newIndex++;
        } else {
            stergeri++;
        }
    }
    s[newIndex] = '\0';
    return stergeri;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    char cuv[30][3001];
    int n, stergeri = 0, primlung;
    char literaVerificata;
    fin >> n;
    citire(cuv, n);
    primlung = strlen(cuv[0]);
    for (int i = 0; i <= primlung; i++) {
        for (int j = 1; j < n; j++) {
            stergeri += stergere(cuv[j], cuv[0][i]);
            cout << "am ajuns aici " << j << " " << endl;
        }
        if (stergeri >= n) {
            fout << cuv[0][i] << " ";
        }
        stergeri = 0;
    }
    fin.close();
    fout.close();
    return 0;
}
