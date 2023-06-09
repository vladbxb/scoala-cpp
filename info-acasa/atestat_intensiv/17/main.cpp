#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void construieste(char s[201]) {
    ifstream fin("atestat.in", ios::in);
    int i = 0;
    int lungimiPrec = 0;
    char *c;
    char cuv[201];
    fin >> cuv;
    while (!fin.eof()) {
        strcat(s, cuv);
        for (i=0; s[i] != '\0'; i++) {
            lungimiPrec++;
        }
        s[i] = ' ';
        lungimiPrec++;
        fin >> cuv;
    }
    s[strlen(s) + 1] = '\0';
    fin.close();
}

void decodifica(char s[201]) {
    char vocale[] = "aeiou";
    for (int i=0; s[i] != '\0'; i++) {
        if (strchr(vocale, s[i])) {
            for (int j=0; j<=strlen(vocale); j++) {
                if (s[i] == vocale[j]) {
                    s[i] = j;
                }
            }
        } else {
            s[i] = int(s[i]) + 1;
        }
    }
}

int main()
{
    ofstream fout("atestat.out", ios::out);
    char s[201];
    construieste(s);
    fout << s << endl;
    decodifica(s);
    fout << s;
    return 0;
}
