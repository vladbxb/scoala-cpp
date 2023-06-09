#include <iostream>

using namespace std;

int FiboRec(int x, int y) {
    if (x < 1) {
        return 0;
    }
    if (x == 1 && y == 1) {
        return 1;
    }
    return FiboRec(y-x, x);
}

int main()
{
    cout << FiboRec(5, 8);
    return 0;
}
