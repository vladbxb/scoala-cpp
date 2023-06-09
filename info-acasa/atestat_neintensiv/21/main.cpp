#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int sir[100];

int nr_div(int a) {
    int nr = 0;
    for (int i=1; i<=a; i++) {
        if (a % i == 0) {
            nr++;
        }
    }
    return nr;
}

int main()
{
    ofstream fout("patrate.out", ios::out);
    int j=2;
    for (int i=0; sir[i-1] != 1; i++) {
        cin >> sir[i];
    }
    for (int i=0; sir[i] != 1; i++) {
        if (nr_div(sir[i]) == 3) {
            while (j * j < sir[i]) {
                j++;
            }
            if (j * j == sir[i]) {
                fout << sqrt(sir[i]) << " ";
            }
        }
        j = 2;
    }
    fout.close();
    return 0;
}
