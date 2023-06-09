#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int nrlit(char *s) {
    int literemari=0;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            literemari++;
        }
    }
    return literemari;
}

//trans functioneaza per cuvant, nu mentioneaza in cerinta ca sirul de caractere sa fie propozitie

void trans(char *s) {
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] += 'A' - 'a';
    }
    for (int i=1; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);

    int inutil, literemari=0;
    fin >> inutil;
    char cuv[21];
    fin >> cuv;
    while (!fin.eof()) {
        literemari += nrlit(cuv);
        trans(cuv);
        fout << cuv << " ";
        fin >> cuv;
    }
    fout << endl << literemari;

    fin.close();
    fout.close();
    return 0;
}
