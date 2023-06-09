#include <iostream>
#include <cstring>

using namespace std;

char reverseString(char a[]) {
    int calledStringLength = strlen(a);
    char reversedString[calledStringLength];
    for (int i=calledStringLength; i>=0; i--) {
        cout <<
    }
    return reversedString;
}

int main()
{
    int stringSize=10000;
    char text[stringSize];
    cout << "Reverse text\n";
    cout << "Input text:\n";
    cin.getline(text, stringSize);
    cout << reverseString(text);
    return 0;
}
