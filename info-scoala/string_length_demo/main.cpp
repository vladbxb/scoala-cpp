#include <iostream>
#include <cstring>

using namespace std;

int getStringSize(char a[]) {
    int counter=0, i=0;
    while (a[i] != '\0') {
        counter++;
        i++;
    }
    return counter;
}

int main()
{
    int stringSize = 10000;
    char sentence[stringSize];
    cout << "Text Length Calculator\n";
    cout << "Input text:\n";
    cin.getline(sentence, stringSize);
    cout << getStringSize(sentence);
    return 0;
}
