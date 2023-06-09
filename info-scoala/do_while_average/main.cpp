#include <iostream>

using namespace std;

int main()
{
    // Average program
    int a,b,c;
    double average;
    char choice;
    do {
        cout << "Input 3 numbers: ";
        cin >> a >> b >> c;
        average = (a + b + c) / 3;
        cout << "The average of these 3 numbers is: " << average << endl;
        cout << "Do you want to do another average? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
