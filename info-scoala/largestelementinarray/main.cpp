#include <iostream>

using namespace std;

int main()
{
    int arraySize, sum=0, i;
    int maximum=0;
    cin >> arraySize;
    int Arr[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> Arr[i];
    }
    for (i=0;i<arraySize;i++) {
        if (Arr[i] > maximum) {
            maximum = Arr[i];
        }
    }
    cout << maximum;
    return 0;
}
