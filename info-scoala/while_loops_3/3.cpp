#include <iostream>

using namespace std;

int main()
{
    int terms,sum=0,i=1;
    cout << "Input a number of terms: ";
    cin >> terms;
    cout << "The natural numbers up to " << terms << "th terms are: ";
    while (i <= terms) {
        cout << i << " ";
        sum = sum + i;
        i++;
    }
    cout << endl << "The sum of the natural numbers is: " << sum << ".";
    return 0;
}
