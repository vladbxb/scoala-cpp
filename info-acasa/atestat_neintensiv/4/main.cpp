#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void puncte(char* cuv, int n) {
    cout << cuv;
    for (int i=0; i<n; i++) {
        cout << ".";
    }
}

int main()
{
    //char cuvant[] = "curat";
    //char *p = cuvant;
    ifstream f("cuvinte.in", ios::in);
    char cuvant[21];
    while (!f.eof()) {
        f >> cuvant;
        puncte(cuvant, strlen(cuvant));
        cout << endl;
    }
    f.close();
    return 0;
}
