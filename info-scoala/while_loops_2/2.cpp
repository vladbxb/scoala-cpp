#include <iostream>

using namespace std;

int main()
{
    int i=1,sum=0;
    cout << "Find the first 10 natural numbers:" << endl;
    cout << "----------------------------------" << endl;
    cout << "The natural numbers are: " << endl;
    while (i <= 10) {
        cout << i << " ";
        sum = sum + i;
        i++;
    }
    cout << endl << "The sum of the first 10 natural numbers is: " << sum << ".";
    return 0;
}
