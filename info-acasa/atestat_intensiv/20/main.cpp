#include <iostream>
#include <fstream>

using namespace std;

struct fractie {
    int x,y;
};

int cmmdc(int a, int b) {
    while (b != 0) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

fractie suma(fractie f, fractie g) {
    int temp;
    fractie h;
    f.x *= g.y;
    g.x *= f.y;
    f.y *= g.y;
    h.x = f.x + g.x;
    h.y = f.y;
    return h;
}

int main()
{
    ifstream fin("atestat.in", ios::in);
    ofstream fout("atestat.out", ios::out);
    int n, temp;
    fractie f, g, h;

    fin >> n;

    for (int i=0; i<n; i++) {
        fin >> f.x >> f.y;
        if (f.x % f.y != 0 && f.x % f.y != f.y / f.x) {
            fout << f.x << "/" << f.y;
        }
        while (f.x % f.y == 0 || f.x % f.y == f.y / f.x) {
            if (f.x % f.y == 0) {
                f.x /= f.y;
                f.y /= f.y;
            }
            if (f.x % f.y == f.y / f.x) {
                f.y /= f.x;
                f.x /= f.x;
            }
        }
    }

    cout << 1 % 16;

    fin.close();
    return 0;
}
