#include <iostream>

using namespace std;

int main()
{
    int n,x,i,isEqual=0;
    cin >> n;
    cin >> x;
    int A[n];
    for (i=0;i<n;i++) {
        cin >> A[i];
    }
    for (i=0;i<n;i++) {
        if (A[i] == x) {
            isEqual++;
        }
    }
    cout << isEqual;
    return 0;
}
