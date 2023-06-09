#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char S[1000];
    cin.get(S, 1000);
    if (strlen(S) < 3) {
        cout << "Input more than 3 characters.";
        return 0;
    }
    for (int i=0; i<strlen(S); i++) {
        if (isalpha(S[i])) {
            cout << S[i];
        }
    }
    cout << "\n";
    for (int i=0; i<strlen(S); i++) {
        if (isdigit(S[i])) {
            cout << S[i];
        }
    }
    cout << "\n";
    for (int i=0; i<strlen(S); i++) {
        if (ispunct(S[i])) {
            cout << S[i];
        }
    }
    cout << "\n";
    return 0;
}
