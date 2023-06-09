#include <iostream>
#include <fstream>

using namespace std;

int numar_cifre(int x) {
    int placeholder = x;
    int nr = 0;
    while (placeholder > 0) {
        placeholder /= 10;
        nr++;
    }
    return nr;
}

int main()
{
    ifstream fin("extrem.in", ios::in);
    int nr,maxiter,extrem=1, base10 = 1;
    fin >> nr;
    while (!fin.eof()) {
        if (nr % 2 != 0) {
            maxiter = numar_cifre(nr);
            for (int i = 1; i < maxiter; i++) {
                extrem *= 10;
            }
            cout << extrem << ".." << nr << endl;
            extrem = 1;
        }
        if (nr % 2 == 0) {
            maxiter = numar_cifre(nr);
            cout << nr << "..";
            for (int i=0; i<maxiter; i++) {
                cout << "9";
            }
            cout << endl;
        }
        fin >> nr;
    }
    return 0;
}
