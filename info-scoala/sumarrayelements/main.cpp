#include <iostream>

using namespace std;

int main()
{
    int arraySize, sum=0, i;
    cin >> arraySize;
    int A[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> A[i];
    }
    for (i=0;i<arraySize;i++) {
        sum += A[i];
    }
    cout << sum;
    return 0;
}
