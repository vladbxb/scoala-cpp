#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int cifre(char *s) {
    int nrcifre=0;
    for (int i=0; s[i] != NULL; i++) {
        if (s[i] >= '1' && s[i] <= '9') {
            nrcifre++;
        }
    }
    return nrcifre;
}

int main()
{
    ifstream fin("cifra.in", ios::in);
    ofstream fout("cifra.out", ios::out);
    char s[101];
    char interzis[] = " ,";
    fin >> s;
    while (!fin.eof()) {
        strtok(s, interzis);
        if (s[0] >= 'A' && s[0] <= 'z') {
            s[0] += 'A' - 'a';
        }
        cout << s << endl;
        if (cifre(s) > 0) {
            fout << s << " ";
        }
        fin >> s;
    }
    fin.close();
    fout.close();
    return 0;
}
