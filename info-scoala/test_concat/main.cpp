#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char A[100], B[100];
    cin.getline(A, 100);
    cin.getline(B, 100);
    if (strlen(A) > strlen(B)) {
        cout << strlen(A) << "\n";
    } else {
        cout << strlen(B) << "\n";
    }
    cout << strcat(A, B);
    return 0;
}
