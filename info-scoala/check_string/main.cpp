#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

bool correct = true;

bool checkString(char S[], int charsize) {
    if (charsize == 0) {
        return correct;
    }
    if (S[charsize] != S[checkString(S, charsize-1)]) {
        correct = false;
    }
}

int main()
{
    int strsize = 10 * 10 * 10 * 10;
    int inputsize = 0;
    char S[strsize];
    cin.getline(S, strsize);
    inputsize = strlen(S) - 1;
    if (checkString(S, inputsize) == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
