#include <iostream>

using namespace std;

int main()
{
    long long linii1,coloane1,linii2,coloane2,linii3,coloane3;
    int i,j,k,l,prod=0;
    cout << "Calculator de inmultire cu matrice\n";
    cout << "Cate linii si coloane are prima matrice? ";
    cin >> linii1 >> coloane1;
    cout << "Scrie numerele matricei (citind pe orizontala), fiecare numar separat de enter.";
    // pune numerele in matricea 1
    long long A[linii1][coloane1];
    for (i=0;i<linii1;i++) {
        for (j=0;j<coloane1;j++) {
            cin >> A[i][j];
        }
    }
    cout << "Cate linii si coloane are a doua matrice? ";
    cin >> linii2 >> coloane2;
    cout << "Scrie numerele matricei (citind pe orizontala), fiecare numar separat de enter.";
    // pune numerele in matricea 2
    long long B[linii2][coloane2];
    for (i=0;i<linii2;i++) {
        for (j=0;j<coloane2;j++) {
            cin >> B[i][j];
        }
    }
    // verifica daca matricile se pot inmulti
    if (linii1 != coloane2 || coloane1 != linii2) {
        cout << "Matricile nu se pot inmulti!";
        return 0;
    }
    if (linii1 == coloane2) {
        linii3 = linii2;
        coloane3 = coloane1;
    } else if (coloane1 == linii2) {
        linii3 = linii1;
        coloane3 = coloane2;
    }
    long long C[linii3][coloane3];
    for (i=0;i<linii1;i++) {
        for (j=0;j<coloane2;j++) {
            for (k=0;k<linii3;k++) {
                prod += A[i][k] * B[k][j];
            }
            C[i][j] = prod;
            prod = 0;
        }
    }

    for (i=0;i<linii3;i++) {
        for (j=0;j<coloane3;j++) {
            cout << C[i][j] << " ";
        }
    }
    /* incercare nereusita
    if (linii1 == coloane2) {
        long long C[linii2][coloane1];
        for (i=0;i<linii1;i++) {
            for (j=0;j<coloane1;j++) {
                for (k=0;k<coloane2;k++) {
                    for (l=0;l<linii2;l++) {
                        C[i][j] += A[i][j] * B[k][l];
                    }
                }
            }
        }
        for (i=0;i<linii2;i++) {
        cout << "\n";
        for (j=0;j<coloane2;i++) {
            cout << C[i][j] << " ";
        }
    }
    } else if (coloane1 == linii2) {
        long long C[linii1][coloane2];
        for (i=0;i<linii1;i++) {
            for (j=0;j<coloane1;j++) {
                for (k=0;k<coloane2;k++) {
                    for (l=0;l<linii2;l++) {
                        C[i][j] += A[i][j] * B[k][l];
                    }
                }
            }
        }
        for (i=0;i<linii2;i++) {
        cout << "\n";
        for (j=0;j<coloane2;i++) {
            cout << C[i][j] << " ";
        }
    }
    }
    */
    return 0;
}
