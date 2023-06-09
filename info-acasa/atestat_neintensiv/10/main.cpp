#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("sir.in", ios::in);
    ofstream fout("sir.out", ios::out);
    int read;
    bool foundNumber = false;
    for (int i=10; i < 100; i++) {
        while(!fin.eof()) {
            fin >> read;
            if (i == read) {
                foundNumber = true;
            }
        }
        fin.close();
        fin.open("sir.in", ios::in);
        if (foundNumber == false) {
            fout << i;
            fout << " ";
        }
        foundNumber = false;
    }
    fin.close();
    fout.close();
    return 0;
}
