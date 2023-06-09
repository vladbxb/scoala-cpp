#include <iostream>

using namespace std;

int main()
{
    int jarAmount = 5, sum=0, maxsale, minsale;
    string maxflavor, minflavor;
    string flavors[jarAmount] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
    int jars[jarAmount];
    cout << "How many jars of ";
    for (int i=0; i<jarAmount; i++) {
        cout << "How many jars of " << flavors[i] << " have been sold? ";
        cin >> jars[i];
    }
    cout << "\nSalsa sales:";
    for (int i=0; i<jarAmount; i++) {
        cout << "\n" << flavors[i] << ": " << jars[i];
    }
    cout << "\n\nTotal sales: ";
    for (int i=0; i<jarAmount; i++) {
        sum += jars[i];
    }
    cout << sum;
    maxsale = jars[0];
    minsale = jars[0];
    for (int i=0; i<jarAmount; i++) {
        if (jars[i] > maxsale) {
            maxsale = jars[i];
            maxflavor = flavors[i];
        }
        if (jars[i] < minsale) {
            minsale = jars[i];
            minflavor = flavors[i];
        }
    }
    cout << "\nHighest selling product: " << maxflavor << "\nLowest selling product: " << minflavor;
    return 0;
}
