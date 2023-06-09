#include <iostream>
#include <fstream>

using namespace std;

//fibo este urat, -1

void fibo(int n, int &x) {
    int n1=0, n2 = 1, urmatorulTermen = 0;
    // algoritm ciudat iterativ pt calculat al n-lea nr fibonacci, modificat pt returnarea celui mai mic sau egal nr fibonacci fata de nr pasat
    for (int i=1; i<=n; i++) {
        //kickstart
        urmatorulTermen = n1 + n2;
        //daca trece sau e egal cu nr pasat, am gasit ce ne trebuie
        if (urmatorulTermen >= n) {
            x = urmatorulTermen;
            i = n + 1;
        }
        //modificarea elementelor pt a opera una pe alta 3 cate 3
        n1 = n2;
        n2 = urmatorulTermen;
    }
}

int divprim(int a) {
    // verificarea primalitatii mai ineficienta pentru a respecta cerinta
    for (int i=2; i*i <= a; i++) {
        if (a % i == 0) {
            return i;
        }
    }
    return a;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int marimer, marimec, x;
    float sumanr=0, numeregasite=0;
    fin >> marimer >> marimec;
    int v[marimer][marimec];
    for (int i=0; i<marimer; i++) {
        for (int j=0; j<marimec; j++) {
            fin >> v[i][j];
            //daca cel mai mic divizor al numarului este numarul in sine, atunci numarul este prim
            if (divprim(v[i][j]) == v[i][j]) {
                fibo(v[i][j], x);
                //daca cel mai mic sau egal nr fibonacci este egal cu el insusi, este in sirul fibonacci
                if (v[i][j] == x) {
                    sumanr += v[i][j];
                    numeregasite++;
                }
            }
        }
    }
    //medie aritmetica
    sumanr /= numeregasite;
    fout << sumanr;
    fin.close();
    fout.close();
    /*int n, x = 0;
    n = 5;
    fibo(n, x);
    cout << x;*/
    return 0;
}
