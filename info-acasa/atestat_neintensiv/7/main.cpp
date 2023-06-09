#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("mat.out", ios::out);
    int n;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        if (i % 2 == 0) {
            for (int j=0; j<n; j++) {
                a[i][j] = j % 3;
            }
        } else {
            for (int j=0; j<n; j++) {
                a[i][n - 1 - j] = j % 3;
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            fout << a[i][j] << " ";
        }
        fout << endl;
    }
    fout.close();
    return 0;
}
