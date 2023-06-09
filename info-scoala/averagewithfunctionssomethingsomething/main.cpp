#include <iostream>

using namespace std;

void getScores(int scores[], int arraysize) {
    for (int i=0; i<arraysize; i++) {
        cin >> scores[i];
    }
}

double getTotal(int scores[], int arraysize) {
    int total=0;
    for (int i=0; i<arraysize; i++) {
        total += scores[i];
    }
    return total;
}

double getLowest(int scores[], int arraysize) {
    int lowest = scores[0];
    for (int i=0; i<arraysize; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int main()
{
    int i,sum,lowest_number;
    double average;
    int arraysize = 4;
    int scores[arraysize];
    getScores(scores,arraysize);
    sum = getTotal(scores,arraysize);
    lowest_number = getLowest(scores, arraysize);
    average = (double) (sum - lowest_number) / (double) (arraysize - 1);
    cout << average;
    return 0;
}
