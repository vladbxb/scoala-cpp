#include <iostream>

using namespace std;

int main()
{
    int book_amount;
    cout << "Serendipity Book Club" << endl;
    cout << "How many books have you purchased this month? ";
    cin >> book_amount;
    switch (book_amount)
    {
    case 0:
        cout << "You earned 0 points, sorry.";
        break;
    case 1:
        cout << "You earned 5 points!";
        break;
    case 2:
        cout << "You earned 15 points!";
        break;
    case 3:
        cout << "You earned 30 points!";
        break;
    default:
        cout << "You earned 60 points! Congratulations!";
        break;
    }
    return 0;
}
