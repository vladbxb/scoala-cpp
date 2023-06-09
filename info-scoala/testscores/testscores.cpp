#include <iostream>

using namespace std;

int main()
{
    const int A_SCORE = 90;
    const int B_SCORE = 70;
    const int C_SCORE = 50;
    const int D_SCORE = 40;
    int testScore;
    cout << "Enter your grade: ";
    cin >> testScore;
    if (testScore >= A_SCORE)
    {
        cout << "You got an A!" << endl;
    } else if (testScore >= B_SCORE)
    {
        cout << "You got a B." << endl;
    } else if (testScore >= C_SCORE)
    {
        cout << "You got a C." << endl;
    } else if (testScore >= D_SCORE)
    {
        cout << "You got a D." << endl;
    } else
    {
        cout << "You got an F." << endl;
    }
    return 0;
}
