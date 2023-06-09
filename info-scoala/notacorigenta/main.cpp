#include <iostream>

using namespace std;

int main()
{
    short A[5];
    short goodNum=0;
    short goodPosition;
    short sum = 0;
    int i,j,k;
    for (i=0;i<5;i++) {
        cin >> A[i];
    }
    for (i=0;i<3;i++) {
        for (j=0;j<5;j++) {
            if (goodNum < A[j]) {
                goodNum = A[j];
                goodPosition = j;
                A[goodPosition] = 0;
            }
        }
        sum += goodNum;
    }
    cout << "sum is: " << sum;
    return 0;
}
