#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

struct punct {
    float x,y;
};

// cum nu folosesc sqrt??? metoda pe care o stiu e absurda in situatia asta, pt ca nu pot sa iterez prin fiecare numar cu virgula

float distanta(punct A, punct B) {
    return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

int main()
{
    ifstream fin("puncte.in", ios::in);
    int r,n;
    fin >> r;
    fin >> n;
    //cout << "raza este: " << r << endl;
    //cout << "n este: " << n << endl;
    punct P[n];
    punct O;
    O.x = 0;
    O.y = 0;
    for (int i=0; i<n; i++) {
        fin >> P[i].x >> P[i].y;
        if (distanta(O, P[i]) == r) {
            cout << "(" << P[i].x << "," << P[i].y << ")" << endl;
        }
    }
    fin.close();
    return 0;
}
