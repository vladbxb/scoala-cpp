#include <iostream>

using namespace std;

int main()
{
    int n,x,i,smaller=0;
    cin >> n;
    int A[n];
    for (i=0;i<n;i++) {
        cin >> A[i];
    }
    cin >> x;
    for (i=0;i<n;i++) {
        if (A[i] <= x) {
            smaller++;
        }
    }
    cout << smaller;
    return 0;
}
