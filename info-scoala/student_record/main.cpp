#include <iostream>

using namespace std;

int main()
{
    int number_of_students,highestavg,highestavgindex;
    cin >> number_of_students;
    string students[number_of_students];
    int scores[3];
    int avg[number_of_students];
    for (int i=0; i<number_of_students; i++) {
        avg[i] = 0;
    }
    for (int i=0; i<number_of_students; i++) {
        cin >> students[i];
        for (int j=0; j<3; j++) {
            cin >> scores[j];
            avg[i] += scores[j];
        }
        avg[i] = avg[i] / 3;
    }
    highestavg = avg[0];
    for (int i=0; i<number_of_students; i++) {
        if (highestavg < avg[i]) {
            highestavg = avg[i];
            highestavgindex = i;
        }
    }
    cout << students[highestavgindex] << " " << highestavg;
    return 0;
}
