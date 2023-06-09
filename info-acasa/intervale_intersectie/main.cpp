#include <iostream>

using namespace std;

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

struct Interval {
    int a, b;
};

Interval intersectie(Interval i1, Interval i2) {
    int capat1, capat2;
    capat1 = max(i1.a, i2.a);
    capat2 = min(i1.b, i2.b);
    Interval i3;
    i3.a = capat1;
    i3.b = capat2;
    return i3;
}

bool valid (Interval i) {
    if (i.a < i.b) {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Interval interval[n];
    Interval rezultat;
    for (int i=0; i<n; i++) {
        cin >> interval[i].a >> interval[i].b;
    }
    rezultat = intersectie(interval[0], interval[1]);
    for (int i=2; i<n; i++) {
        rezultat = intersectie(rezultat, interval[i]);
    }
    cout << rezultat.a << " " << rezultat.b;
    return 0;
}
