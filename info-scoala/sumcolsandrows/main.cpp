#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout << "Input the amount of rows: ";
    cin >> row;
    cout << "Input the amount of columns: ";
    cin >> col;
    int arr[row][col];
    int sumcol[col];
    int sumrow[row];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<col; i++) {
        sumcol[i] = 0;
    }
    for (int i=0; i<row; i++) {
        sumrow[i] = 0;
    }
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            sumcol[i] = sumcol[i] + arr[j][i
            ];
        }
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            sumrow[i] += arr[i][j];
        }
    }
    cout << "The sums of the elements of each column are: \n";
    for (int i=0; i<col; i++) {
        cout << sumcol[i] << " ";
    }
    cout << "\nThe sums of the elements on each row are: \n";
    for (int i=0; i<row; i++) {
        cout << sumrow[i] << " ";
    }
    return 0;
}
