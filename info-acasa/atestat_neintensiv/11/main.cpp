#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void vocale(char *s, int &v) {
    char vocaleCaractere[] = "aeiouAEIOU";
    v = 0;
    for (int i = 0; s[i] != NULL; i++) {
        if(strchr(vocaleCaractere, s[i])) {
            v++;
        }
    }
}

int main()
{
    char cuvant[81];
    int fullVocale = 0;
    int v;
    ifstream fin("vocale.in", ios::in);
    ofstream fout("vocale.out", ios::out);
    // init
    fin >> cuvant;
    while (!fin.eof()) {
        if (strstr(cuvant, "str")) {
            fout << cuvant;
            fout << endl;
        }
        vocale(cuvant, v);
        if (v == strlen(cuvant)) {
            fullVocale++;
        }
        fin >> cuvant;
    }
    cout << fullVocale;
    fin.close();
    fout.close();
    return 0;
}
