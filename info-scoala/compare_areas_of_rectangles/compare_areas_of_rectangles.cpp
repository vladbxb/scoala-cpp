#include <iostream>

using namespace std;

int main()
{
    // I need to ask the user for the length and width of two rectangles, calculate their areas and then compare them and say which is the bigger rectangle or if they are equal
    float len1, len2, wid1, wid2, area1, area2, result;
    cout << "Rectangle Area Comparison" << endl;
    cout << "First rectangle:" << endl;
    cout << "Please input the length: ";
    cin >> len1;
    cout << "Please input the width: ";
    cin >> wid1;
    cout << endl << endl;
    cout << "Second rectangle:" << endl;
    cout << "Please input the length: ";
    cin >> len2;
    cout << "Please input the width: ";
    cin >> wid2;
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    if (area1 > area2) {
        cout << "The area of the first rectangle is greater than the area of the second rectangle!";
    } else if (area1 == area2) {
        cout << "The rectangle areas are equal.";
    } else {
        cout << "The area of the second rectangle is greater than the area of the first rectangle!";
    }
    return 0;
}
