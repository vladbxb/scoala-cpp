#include <iostream>

using namespace std;

long long SumProdRec(int n) {
    if (n == 1) {
        return 0;
    }
    return n*(n-1) + SumProdRec(n-1);
}

int main()
{
    cout << SumProdRec(4);
    return 0;
}
