#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ofstream fout("atestat.out", ios::out);

void prefixe(char *s) {
    int len = strlen(s);
    for (int i=1; i<=len; i++) {
        for (int j=0; j<i; j++) {
            fout << s[j];
        }
        fout << " ";
    }
    fout << endl;
}

void sufixe(char *s) {
    int len = strlen(s);
    for (int i=len-1; i>=0; i--) {
        for (int j = i; j < len; j++) {
            fout << s[j];
        }
        fout << " ";
    }
}

int main()
{
    ifstream fin("atestat.in", ios::in);

    char cuvant[31];
    char celMaiMicCuvant[31];
    char celMaiMareCuvant[31] = "";
    strcpy(celMaiMicCuvant, cuvant);
    while (!fin.eof()) {
        fin >> cuvant;
        if (strlen(celMaiMicCuvant) > strlen(cuvant)) {
            strcpy(celMaiMicCuvant, cuvant);
        }
        if (strlen(celMaiMareCuvant) <= strlen(cuvant)) {
            strcpy(celMaiMareCuvant, cuvant);
        }
    }
    fout << celMaiMicCuvant << " ";
    prefixe(celMaiMicCuvant);
    fout << celMaiMareCuvant << " ";
    sufixe(celMaiMareCuvant);
    fin.close();
    fout.close();
    return 0;
}
