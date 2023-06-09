#include <iostream>
#include <fstream>

using namespace std;

int gaseste_cifra(int x, int c) {
    int temp = x;
    int cifreb10=1;
    int aparente=0;
    while (temp > 0) {
        temp /= 10;
        cifreb10 *= 10;
    }
    cifreb10 /= 10;

    while (cifreb10 > 0) {
        if ((x / cifreb10) % 10 == c) {
            aparente++;
        }
        cifreb10 /= 10;
    }

    return aparente;
}

int main()
{
    int nr;
    cin >> nr;
    //cout << gaseste_cifra(1323, 3);
    ofstream f("control.out", ios::out);
    int temp = nr;
    int cifreb10=1;
    int insumare=0;
    for (int i=0; i<10; i++) {
        f << gaseste_cifra(nr, i);
    }
    while (temp > 0) {
        temp /= 10;
        cifreb10 *= 10;
    }
    cifreb10 /= 10;
    temp = nr;
    while (temp > 0) {
        insumare += (nr / cifreb10) % 10;
        temp /= 10;
        cifreb10 /=10;
    }
    cifreb10 = 1;
    while (insumare > 9) {
        int insumare2 = insumare;
        while (insumare2 > 0) {
            insumare2 /= 10;
            cifreb10 *= 10;
        }
        cifreb10 /= 10;
        insumare2 = insumare;
        insumare = 0;
        while (insumare2 > 0) {
            insumare += (nr / cifreb10) % 10;
            insumare2 /= 10;
            cifreb10 /=10;
        }
    }
    /*while (insumare > 9) {
        temp = insumare;
        cifreb10 = 1;
        while (temp > 0) {
            temp /= 10;
            cifreb10 *= 10;
        }
        cifreb10 /= 10;
        temp = insumare;
        insumare = 0;
        while (temp > 0) {
            insumare += (temp / cifreb10) % 10;
            temp /= 10;
            cifreb10 /= 10;
        }
    }*/
    f << endl;
    f << insumare;
    f.close();
    return 0;
}
