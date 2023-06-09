#include <iostream>

using namespace std;

int main()
{
    int arraySize, sum=0, i;
    cin >> arraySize;
    int Arr[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> Arr[i];
    }
    for (i=0;i<arraySize;i++) {
        cout << Arr[i] << " ";
    }
    return 0;
}
