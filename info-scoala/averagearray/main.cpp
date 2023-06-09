#include <iostream>

using namespace std;

int main()
{
    int arraySize, sum=0, i;
    cin >> arraySize;
    double A[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> A[i];
    }
    for (i=0;i<arraySize;i++) {
        sum += A[i];
    }
    cout << (double) sum/arraySize;
    return 0;
}
