#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct complexi
{
    float a,b;
};

float modul(complexi x) {
    // cum fac radical cand am cu virgula? ar fi ridicol sa verific pe fiecare zecimala daca patratul da numarul ala...
    return sqrt(x.a * x.a + x.b * x.b);
}

complexi suma(complexi x, complexi y) {
    complexi z;
    z.a = x.a + y.a;
    z.b = x.b + y.b;
    return z;
}

int main()
{
    ifstream fin("atestat.in", ios::in);

    int n, real=0, img=0;
    float mod;
    complexi x;
    fin >> n;

    for (int i=0; i<n; i++) {
        fin >> x.a >> x.b;
        mod = modul(x);
        if (mod - int(mod) == 0) {
            real += x.a;
            img += x.b;
        }
    }

    if (img) {
        cout << real << " " << img;
    } else {
        cout << "nu exista";
    }

    fin.close();
    return 0;
}
