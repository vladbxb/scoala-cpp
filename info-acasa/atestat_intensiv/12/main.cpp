#include <iostream>
#include <fstream>

using namespace std;

//pt liniile respective schimba toate elementele de pe toate coloanele
void interschimbL(int a[20][20], int n, int k1, int k2) {
    for (int i=0; i<n; i++) {
        swap(a[k1][i], a[k2][i]);
    }
}

//la fel dar invers
void interschimbC(int a[20][20], int n, int k1, int k2) {
    for (int i=0; i<n; i++) {
        swap(a[i][k1], a[i][k2]);
    }
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marime;
    bool gasit = true;
    fin >> marime;
    int a[20][20];
    for (int i=0; i<marime; i++) {
        for (int j=0; j<marime; j++) {
            fin >> a[i][j];
        }
    }

    //sortare crescatoare
    while (gasit) {
        gasit = false;
        for (int i=1; i<marime; i++) {
            if (a[i-1][i-1] > a[i][i]) {
                interschimbL(a, marime, i-1, i);
                interschimbC(a, marime, i-1, i);
                gasit = true;
            }
        }
    }

    for (int i=0; i<marime; i++) {
        for (int j=0; j<marime; j++) {
            fout << a[i][j] << " ";
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
