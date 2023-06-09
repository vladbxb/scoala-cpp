#include <iostream>

using namespace std;

int linii,coloane;

int det(int A[][10]) {
    return 0;
}

int main()
{
    int i,j;
    cout << "Calculator de inversa matricei\n";
    cout << "Cate linii si coloane are matricea? (ca matricea sa fie inversabila, trebuie sa fie patrata) ";
    cin >> linii;
    coloane = linii;
    cout << "Scrie numerele matricei (citind pe orizontala), fiecare numar separat de enter.";
    int A[linii][coloane];
    for (i=0;i<linii;i++) {
        for (j=0;j<coloane;j++) {
            cin >> A[i][j];
        }
    }
    return 0;
}
