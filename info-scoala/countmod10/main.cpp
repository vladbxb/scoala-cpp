#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,j,counter=0;
    cin >> a >> b >> c >> d;
    if (a < b && b < c && c < d) {
        for (;a<b;a++) {
            if (a % 3 == 0) {
                counter++;
            }
        }
        for (;c<d;c++) {
            if (c % 3 == 0) {
                counter++;
            }
        }
        cout << counter;
    }
    return 0;
}
