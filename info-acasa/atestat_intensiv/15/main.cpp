#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int verif(char *s) {
    int consoane=0;
    char vocale[] = "aeiou";
    for (int i=0; s[i] != '\0'; i++) {
        if (!strchr(vocale, s[i])) {
            consoane++;
            if (consoane >= 2) {
                return 1;
            }
        } else {
            consoane = 0;
        }
    }
    return 0;
}

int nrvoc(char *s) {
    int nrvocale=0;
    char vocale[] = "aeiou";
    for (int i=0; s[i] != '\0'; i++) {
        if (strchr(vocale, s[i])) {
            nrvocale++;
        }
    }
    return nrvocale;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);

    char cuv[21];
    fin >> cuv;

    while (!fin.eof()) {
        if (verif(cuv) && nrvoc(cuv) >= 3) {
            fout << cuv << endl;
        }
        fin >> cuv;
    }

    fin.close();
    fout.close();
    return 0;
}
