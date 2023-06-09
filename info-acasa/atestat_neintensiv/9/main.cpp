#include <iostream>
#include <fstream>

using namespace std;

int oglinda(int x) {
    int temp = x;
    int putere = 1;
    int constructie=0;
    while (temp > 0) {
        putere *= 10;
        temp /= 10;
    }
    putere /= 10;
    int j = 1;
    for (int i = putere; i > 0; i /= 10) {
        constructie += ((x / j) % 10) * i;
        j *= 10;
    }
    return constructie;
}

int main()
{
    int a,b,k;
    ofstream fout("palindrom.out", ios::out);
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (i == oglinda(i)) {
            fout << i;
            fout << " ";
        }
    }
    fout << endl;
    cin >> k;
    bool gasit = false;
    while (!gasit) {
        k++;
        if (k == oglinda(k)) {
            fout << k;
            cout << "am ajuns ";
            gasit = true;
        }
    }
    fout.close();
    return 0;
}
