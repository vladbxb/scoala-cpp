#include <iostream>

using namespace std;

int main()
{
    int fatcalories,fatgrams;
    double totalcalories,percentage;
    cout << "Fat Gram Calculator" << endl;
    cout << "How many fat grams does the food have? ";
    cin >> fatgrams;
    cout << "How many calories does the food have? ";
    cin >> totalcalories;
    if (fatgrams < 0 || totalcalories < 0) {
        cout << "The value(s) cannot be less than 0." << endl;
        return 0;
    }
    fatcalories = fatgrams * 9;
    if (fatcalories > totalcalories) {
        cout << "The fat grams are incorrectly entered." << endl;
        return 0;
    }
    percentage = (fatcalories / totalcalories)*100;
    cout << "The percentage of fat calories is: " << percentage << "." << endl;
    if (fatcalories < 0.3 * totalcalories) {
        cout << "The food is too low in fat!" << endl;
    }
    return 0;
}
