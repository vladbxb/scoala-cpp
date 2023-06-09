#include <iostream>

using namespace std;

int main()
{
    int arrsize;
    cout << "Array reversal\n";
    cout << "Input the array size: ";
    cin >> arrsize;
    int arr[arrsize];
    cout << "Input the array elements: ";
    for (int i=0; i<arrsize; i++) {
        cin >> arr[i];
    }
    int reversedarray[arrsize];
    for (int i=arrsize-1; i>=0; i--) {
        reversedarray[arrsize-1-i] = arr[i];
    }
    for (int i=0; i<arrsize; i++) {
        cout << reversedarray[i] << " ";
    }
    return 0;
}
