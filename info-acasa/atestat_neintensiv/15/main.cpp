#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int consoane(char *s) {
    char vocale[] = "aeiouAEIOU";
    int consoane = 0;
    for (int i = 0; s[i] != NULL; i++) {
        if (!strchr(vocale, s[i]) && s[i] <= 'z' && s[i] >= 'A') {
            consoane++;
        }
    }
    return consoane;
}

int main()
{
    ifstream fin("consoane.in", ios::in);
    ofstream fout("consoane.out", ios::out);
    char cuvant[91];
    int maxConsoane=0;
    int consoaneL;
    fin >> cuvant;
    while (!fin.eof()) {
        consoaneL = consoane(cuvant);
        if (consoaneL > maxConsoane) {
            maxConsoane = consoaneL;
        }
        if (consoaneL % 2 == 0 && cuvant[0] >= 'A' && cuvant[0] <= 'Z') {
            fout << cuvant;
            fout << endl;
        }
        fin >> cuvant;
    }
    cout << maxConsoane;
    fin.close();
    fout.close();
    return 0;
}
