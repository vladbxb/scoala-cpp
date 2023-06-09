#include <iostream>

using namespace std;

int row = 3;
int col = 3;

int getTotal(int arr[][3]) {
    int sum=0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int getAverage(int arr[][3]) {
    int sum=0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            sum += arr[i][j];
        }
    }
    return sum/row*col;
}

int getRowTotal(int arr[][3], int chosenrow) {
    int sum=0;
    for (int i=0; i<col; i++) {
        sum += arr[chosenrow][i];
    }
    return sum;
}

int getColumnTotal(int arr[][3], int chosencol) {
    int sum=0;
    for (int i=0; i<row; i++) {
        sum += arr[i][chosencol];
    }
    return sum;
}

int getHighestInRow(int arr[][3], int chosenrow) {
    int sum=0;
    int highest=arr[0][0];
    for (int i=0; i<col; i++) {
        if (arr[chosenrow][i] > highest) {
            highest = arr[chosenrow][i];
        }
    }
    return highest;
}

int getLowestInRow(int arr[][3], int chosenrow) {
    int sum=0;
    int lowest=arr[0][0];
    for (int i=0; i<col; i++) {
        if (arr[chosenrow][i] < lowest) {
            lowest = arr[chosenrow][i];
        }
    }
    return lowest;
}

int main()
{
    int inputrow, inputcol;
    int initarr[3][3] = {5, 7, 3,
                         6, 1, 2,
                         9, 3, 4};
    getTotal(initarr);
    cout << "Array operations";
    cout << "\nThe average of all elements is: " << getAverage(initarr);
    cout << "\nWhich row do you want to check the total for? ";
    cin >> inputrow;
    cout << "The total of row " << inputrow << " in the initialized array is: " << getRowTotal(initarr, inputrow);
    cout << "\nWhich column do you want to check the total for? ";
    cin >> inputcol;
    cout << "The total of column " << inputcol << " in the initialized array is: " << getColumnTotal(initarr, inputcol);
    inputrow=0;
    inputcol=0;
    cout << "\nWhich row do you want to check the highest number for? ";
    cin >> inputrow;
    cout << "The highest number in row " << inputrow << " in the initialized array is: " << getHighestInRow(initarr, inputrow);
    cout << "\nThe lowest number in row " << inputrow << " in the initialized array is: " << getLowestInRow(initarr, inputrow);
    return 0;
}
