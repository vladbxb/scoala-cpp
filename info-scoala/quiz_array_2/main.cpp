#include <iostream>

using namespace std;

int main()
{
    int nums[10];
    cout << "Input numbers in the array ";
    for (int i=0; i<10; i++) {
        cin >> nums[i];
    }
    cout << "The even numbers are: ";
    for (int i=0; i<10; i++) {
        if (nums[i] % 2 == 0) {
            cout << nums[i] << " ";
        }
    }
    cout << "\nThe odd numbers are: ";
    for (int i=0; i<10; i++) {
        if (nums[i] % 2 != 0) {
            cout << nums[i] << " ";
        }
    }
    return 0;
}
