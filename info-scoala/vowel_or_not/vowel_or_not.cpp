#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Vowel or not?" << endl;
    cout << "Input a character: ";
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "It's a vowel!";
        break;
    case 'e':
        cout << "It's a vowel!";
        break;
    case 'i':
        cout << "It's a vowel!";
        break;
    case 'o':
        cout << "It's a vowel!";
    case 'u':
        cout << "It's a vowel!";
    default:
        cout << "It's not a vowel.";
    }
    return 0;
}
