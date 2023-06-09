#include <iostream>

using namespace std;

int main()
{
    int A[3] = {1, 2, 3};
    int num;
    int actualnum;
    cout << "input scrollback ";
    cin >> num;
    cout << A[num % 3];
    return 0;
}
