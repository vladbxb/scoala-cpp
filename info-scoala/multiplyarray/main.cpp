#include <iostream>

using namespace std;

int main()
{
    int arraySize, mul=1, i;
    cin >> arraySize;
    int A[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> A[i];
    }
    for (i=0;i<arraySize;i++) {
        mul *= A[i];
    }
    cout << mul;
    return 0;
}
