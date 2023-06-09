#include <iostream>

using namespace std;

int main()
{
    int score1,score2,score3,average;
    const int highscore = 95;
    bool beat_highscore;
    cout << "What was your first score? ";
    cin >> score1;
    cout << "What was your second score? ";
    cin >> score2;
    cout << "What was your third score? ";
    cin >> score3;
    average = (score1+score2+score3) / 3;
    cout << average;
    if (average > highscore) {
        beat_highscore = true;
    } else {
        beat_highscore = false;
    }

    cout << "The value for beating the highscore is " << beat_highscore <<"." << endl;
    return 0;
}
