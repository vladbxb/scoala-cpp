#include <iostream>

using namespace std;

int scoreAmount;

int countPerfect(int arr[]) {
    int perfect=0;
    for (int i=0; i<scoreAmount; i++) {
        if (arr[i] == 100) {
            perfect++;
        }
    }
    return perfect;
}

int main()
{
    int scores[10];
    cout << "How many scores would you like to input? ";
    cin >> scoreAmount;
    if (scoreAmount < 10) {
        cout << "Sorry, you must input at least 10 integer test scores.";
        return 0;
    }
    for (int i=0; i<scoreAmount; i++) {
        cout << "Enter score #" << i+1 << ": ";
        cin >> scores[i];
        if (scores[i] < 0 || scores[i] > 100) {
            cout << "Invalid score.";
            return 0;
        }
    }
    cout << "Perfect scores: " << countPerfect(scores);
    return 0;
}
