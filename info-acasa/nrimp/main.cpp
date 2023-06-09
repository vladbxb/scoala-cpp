#include <iostream>

using namespace std;

void NrImp(int x, int y, int &nr) {
    int incercari=0;
    for (int i=x; i<=y; i++) {
        for (int j=1; j<=i; j++) {
            if ((i % j == 0) && (i % 2 != 0)) {
                incercari++;
            }
        }
        if (incercari == 3) {
            nr++;
        }
        incercari = 0;
    }
}

int main()
{
    int nr=0;
    NrImp(50, 50, nr);
    cout << nr;
    return 0;
}
