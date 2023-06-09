#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int x;
    ifstream f("bac.txt", ios::in);
    f >> x;
    int paritar=0;
    int max_paritar=0;
    int nr_paritar=0;
    int temp = x;
    while (!f.eof()) {
        if (x % 2 != temp % 2) {
            if (paritar > max_paritar) {
                max_paritar = paritar;
            }
            if (paritar == max_paritar) {
                nr_paritar++;
            }
            paritar = 1;
            temp = x;
        } else {
            paritar++;
        }
        f >> x;
    }
    f.close();
    cout << nr_paritar << " " << max_paritar;
    return 0;
}
