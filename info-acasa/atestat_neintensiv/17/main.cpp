#include <iostream>
#include <fstream>

using namespace std;

struct clipa
{
    int sec, mi, ora;
};

void timp(clipa c) {
    if (c.ora < 10) {
        cout << "0" << c.ora << ":";
    } else {
        cout << c.ora << ":";
    }

    if (c.mi < 10) {
        cout << "0" << c.mi << ":";
    } else {
        cout << c.mi << ":";
    }

    if (c.sec < 10) {
        cout << "0" << c.sec;
    } else {
        cout << c.sec;
    }
}

int main()
{
    ifstream fin("clipa.in", ios::in);
    int cantitate, nr, maxsec=0, maxmi=0, maxora=0;
    clipa c;
    fin >> cantitate;
    for (int i=0; i<cantitate; i++) {
        fin >> c.sec;
        fin >> c.mi;
        fin >> c.ora;
        if (maxsec < c.sec && maxmi < c.mi && maxora < c.ora) {
            maxsec = c.sec;
            maxmi = c.mi;
            maxora = c.ora;
        }
        timp(c);
        cout << endl;
    }
    c.sec = maxsec;
    c.mi = maxmi;
    c.ora = maxora;
    timp(c);
    fin.close();
    return 0;
}
