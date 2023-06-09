#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N,i,sumodd=0,sumeven=0;
    cin >> N;
    if (N >= 1 && N <= pow(10, 5)) {
        for (i=1;i<=N;i++) {
            if (i%2==0) {
                sumeven += i;
            } else {
                sumodd += i;}
        }
        cout << sumodd << " " << sumeven;
    }
    return 0;
}
