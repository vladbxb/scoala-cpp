#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char character;
    cout << "Enter a character: ";
    cin.get(character);
    if (isalpha(character)) {
        cout << "This character is in the alphabet.\n";
    }
    if (isdigit(character)) {
        cout << "This character is a digit.\n";
    }
    if (isspace(character)) {
        cout << "This character is a space.\n";
    }
    if (isupper(character)) {
        cout << "This character is uppercase.\n";
    }
    if (islower(character)) {
        cout << "This character is lowercase.\n";
    }
    return 0;
}
