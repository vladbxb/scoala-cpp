#include <iostream>
#include <fstream>

using namespace std;

bool prim(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << prim(17);
    return 0;
}
