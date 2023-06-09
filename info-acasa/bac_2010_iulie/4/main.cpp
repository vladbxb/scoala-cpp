#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int x,temp;
    ifstream f("BAC.TXT", ios::in);
    f >> x;
    temp = x;
    while (!f.eof()) {
        if (x % 2 == 0 && x != temp) {
            cout << x << " ";
            temp = x;
        }
        f >> x;
    }
    f.close();
    return 0;
}
