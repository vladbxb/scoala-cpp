#include <iostream>
#include <fstream>

using namespace std;

void tablou(int n, int v[100]) {
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
}

int main()
{
    int na, nb;
    cin >> na;
    int a[na];
    for (int i=0; i<na; i++) {
        cin >> a[i];
    }
    cin >> nb;
    int b[nb];
    for (int i=0; i<nb; i++) {
        cin >> b[i];
    }
    ofstream fout("comune.out", ios::out);
    if (a[na - 1] > b[nb - 1]) {
        for (int i=0; i<na; i++) {
            for (int j=nb-1; j>=0; j--) {
                if (a[i] == b[j]) {
                    fout << a[i] << " ";
                }
            }
        }
    } else {
        for (int i=nb-1; i>=0; i--) {
            for (int j=0; j<na; j++) {
                if (a[j] == b[i]) {
                    fout << a[j] << " ";
                }
            }
        }
    }
    fout.close();
    return 0;
}
