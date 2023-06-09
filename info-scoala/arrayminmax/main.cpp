#include <iostream>

using namespace std;

int main()
{
    int arraySize, sum=0, i;
    int maximum=0;
    int minimum;
    cin >> arraySize;
    int Arr[arraySize];
    for (i=0;i<arraySize;i++) {
        cin >> Arr[i];
    }
    minimum = Arr[0];
    for (i=0;i<arraySize;i++) {
        if (Arr[i] > maximum) {
            maximum = Arr[i];
        }
        if (Arr[i] < minimum) {
            minimum = Arr[i];
        }
    }
    cout << minimum << "\n" << maximum;
    return 0;
}
