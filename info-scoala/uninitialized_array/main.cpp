#include <iostream>

using namespace std;

int main()
{
    cout << "Showing uninitialized array numbers\n";
    int n[9] = {1, 2, 3, 4};
    cout << "Here are the contents of the array when we initialize only the first 4 elements: ";
    for (int i=0; i<9; i++) {
        cout << n[i] << " ";
    }
    return 0;
}
