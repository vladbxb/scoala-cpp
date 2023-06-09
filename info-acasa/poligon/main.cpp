#include <iostream>
#include <cmath>

using namespace std;

struct Punct {
    int x,y;
};

struct Poligon {
    int numarPuncte;
    Punct p[10000];
};

void citire(Poligon &poli) {
    for (int i=0; i<poli.numarPuncte; i++) {
        cin >> poli.p[i].x >> poli.p[i].y;
    }
}

void afisare(Poligon poli) {
    for (int i=0; i<poli.numarPuncte; i++) {
        cout << poli.p[i].x << " " << poli.p[i].y << "\n";
    }
}

int distanta(Punct p1, Punct p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

bool coincid(Punct p1, Punct p2) {
    if (distanta(p1, p2) == 0) {
        return true;
    }
    return false;
}

bool eValid(Poligon poli) {
    for (int i=1; i<poli.numarPuncte; i++) {
        if (coincid(poli.p[i-1], poli.p[i])) {
            return false;
        }
    }
    return true;
}

int perimetru(Poligon poli) {
    int p=0;
    if (eValid(poli)) {
        for (int i=1; i<poli.numarPuncte; i++) {
            p += distanta(poli.p[i-1], poli.p[i]);
        }
        return p;
    }
    return -1;
}

int main()
{
    Poligon poli;
    cout << "numar puncte: ";
    cin >> poli.numarPuncte;
    cout << "puncte:\n";
    citire(poli);
    cout << perimetru(poli);
    return 0;
}
