#include <iostream>

using namespace std;

int main()
{
    int arrsize, missingnumber;
    cout << "Input the size of the array: ";
    cin >> arrsize;
    int arr[arrsize-1];
    cout << "Input the array elements: ";
    for (int i=0; i<arrsize-1; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<arrsize-1; i++) {
        for (int j=0)
    }
    for (int i=1; i<arrsize-1; i++) {
        if (arr[i] != arr[i-1] + 1) {
            missingnumber = arr[i-1] + 1;
        }
    }
    cout << missingnumber;
    return 0;
}
