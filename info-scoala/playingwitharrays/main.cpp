#include <iostream>

using namespace std;

int main()
{
    int row,col,sum=0;
    cout << "Arrays\n";
    cout << "How many rows do you want? ";
    cin >> row;
    cout << "How many columns do you want? ";
    cin >> col;
    int inputarray[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin >> inputarray[i][j];
        }
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout << inputarray[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            sum += inputarray[i][j];
        }
    }
    cout << "The sum of all the elements is: " << sum << ".\n";
    cout << "The average of all the elements is: " << sum/row*col << ".";
    return 0;
}
