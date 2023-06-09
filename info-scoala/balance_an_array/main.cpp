#include <iostream>

using namespace std;

int main()
{
    int arrsize,sumleft=0,sumright=0;
    cout << "Input the array size (must be even): ";
    cin >> arrsize;
    if (arrsize % 2 != 0) {
        return 0;
    }
    int unbalancedarray[arrsize];
    cout << "Input the array elements: ";
    for (int i=0; i<arrsize; i++) {
        cin >> unbalancedarray[i];
    }
    for (int i=0; i<arrsize/2; i++) {
        sumleft += unbalancedarray[i];
    }
    for (int i=arrsize/2; i<arrsize; i++) {
        sumright += unbalancedarray[i];
    }
    if (sumleft > sumright) {
        cout << sumleft - sumright;
    } else {
        cout << sumright - sumleft;
    }
    return 0;
}
