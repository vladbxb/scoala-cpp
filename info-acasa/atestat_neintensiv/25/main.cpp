#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int majuscule(char *s) {
    int maj=0;
    for (int i=0; s[i] != NULL; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            maj++;
        }
    }
    return maj;
}

int main()
{
    ifstream fin("titlu.in", ios::in);
    ofstream fout("titlu.out", ios::out);
    char text[201];
    int doualitere = 0;
    fin.getline(text, 201);
    char sep[] = "*";
    char *c = strtok(text , sep);
    while (c != NULL) {
        if (majuscule(c) == 2) {
            doualitere++;
        }
        if (strchr(c, 'M')) {
            fout << c << endl;
        }
        c = strtok(NULL , sep);
    }
    cout << doualitere;
    fin.close();
    fout.close();
    return 0;
}
