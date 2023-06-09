#include <iostream>

using namespace std;

int main()
{
    int n,x,i,smaller=0,bigger=0;
    cin >> n;
    cin >> x;
    int A[n];
    for (i=0;i<n;i++) {
        cin >> A[i];
    }
    for (i=0;i<n;i++) {
        if (A[i] <= x) {
            smaller++;
        } else {
            bigger++;
        }
    }
    cout << "There are ";
    if (smaller == 0) {
        cout << "no";
    } else {
        cout << smaller;
    }
    cout << " elements less than or equal to " << x << " and ";
    if (bigger == 0) {
        cout << "no";
    } else {
        cout << bigger;
    }
    cout << " elements greater or equal to " << x << ".";
    return 0;
}
