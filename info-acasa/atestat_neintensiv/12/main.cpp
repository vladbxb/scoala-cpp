#include <iostream>
#include <fstream>

using namespace std;

int perfect(int x) {
    int sumaDiv = 1;
    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            sumaDiv += i;
        }
    }
    if (2 * x == sumaDiv) {
        return 1;
    }
    return 0;
}

int main()
{
    ifstream fin("perfect.in", ios::in);
    int nr, maxim=0, maximIndex, citite=0;
    fin >> nr;
    citite++;
    while (!fin.eof()) {
        if (perfect(nr)) {
            if (maxim < nr) {
                maxim = nr;
                maximIndex = citite;
            }
        }
        fin >> nr;
        citite++;
    }
    if (maxim) {
        cout << maxim << " " << maximIndex;
    } else {
        cout << "imposibil";
    }
    fin.close();
    return 0;
}
