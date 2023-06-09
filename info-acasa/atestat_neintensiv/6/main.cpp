#include <iostream>

using namespace std;

int linie_x(int n, int a[100][100], int x) {
    int nenul=0;
    x++;
    for (int i=1; i<n; i++) {
        if (a[x][i]) {
            nenul++;
        }
    }
    return nenul;
}

int coloana_x(int n, int a[100][100], int x) {
    int nenul=0;
    x++;
    for (int i=1; i<n; i++) {
        if (a[i][x]) {
            nenul++;
        }
    }
    return nenul;
}

int main()
{
    int a[100][100];
    for (int i=1; i<6; i++) {
        for (int j=1; j<6; j++) {
            a[i][j] = j;
        }
    }
    for (int i=1; i<6; i++) {
        for (int j=1; j<6; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << linie_x(6, a, 1) << " " << coloana_x(6, a, 1);
    return 0;
}
