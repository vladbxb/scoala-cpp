#include <iostream>

using namespace std;

void duplicare(int n, int &d) {
    int temp = n;
    int counter=0;
    int putere=1;
    while (temp > 0) {
        temp /= 10;
        counter++;
    }
    for (int i=1; i<counter; i++) {
        putere *= 10;
    }
    int nrcifre=counter;
    temp = n;
    while (putere > 0) {
        if (temp / putere % 2 == 0) {
            nrcifre++;
        }
        putere /= 10;
    }
    d = 1;
    for (int i=1; i<counter; i++) {
        putere *= 10;
    }
    for (int i=1; i<nrcifre; i++) {
        d *= 10;
    }
    int counter_big=0;
    for (int i=0; i<nrcifre; i++) {
        counter_big++;
    }
    for (int i=0; i<nrcifre; i++) {
        for (int j=0; j<counter; j++) {
            if (n / putere % 2 == 0) {
                for (int i=0; i<2; i++) {
                    d = d + (n / putere) * counter_big;
                    counter_big--;
                }
            }
        }
    }
}

int main()
{
    int n=2380, d;
    duplicare(n, d);
    return 0;
}
