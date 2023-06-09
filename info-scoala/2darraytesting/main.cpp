#include <iostream>

using namespace std;

// make print 2d array func

void print2DArray(int arr[][3]) {
    for (int i=0; i<3; i++) {
        cout << "\n";
        for (int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    int A[3][3];

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> A[i][j];
        }
    }
    //print 2d array in int main
    print2DArray(A);
    return 0;
}
