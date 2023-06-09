#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numere.in", ios::in);
    ofstream fout("numere.out", ios::out);
    int max1=0, max2=0, aparitii1=0, aparitii2=0, nr;
    fin >> nr;
    while (!fin.eof()) {
        if (max1 < nr) {
            max1 = nr;
            aparitii1 = 0;
        }
        if (max1 == nr) {
            aparitii1++;
        }
        fin >> nr;
    }
    fin.clear();
    fin.seekg(0, ios::beg);
    fin >> nr;
    while (!fin.eof()) {
        if (nr < max1 && max2 < nr) {
            max2 = nr;
            aparitii2 = 0;
        }
        if (max2 == nr) {
            aparitii2++;
        }
        fin >> nr;
    }
    if (!max1 && !max2) {
        cout << "numere identice";
    }
    fout << max1 << " " << aparitii1 << endl;
    fout << max2 << " " << aparitii2;
    fin.close();
    fout.close();
    return 0;
}
