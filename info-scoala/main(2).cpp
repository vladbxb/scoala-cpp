#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int strsize = 1000, counter = 0;
    char a[strsize];
    char character;
    cout << "Enter the string: ";
    cin.getline(a, strsize);
    cout << "Enter the character: ";
    cin >> character;
    for (int i=0; i<strlen(a); i++) {
        if (a[i] == character) {
            counter++;
        }
    }
    cout << "Character occurs " << counter << " times.";
    return 0;
}
