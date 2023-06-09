#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char S[250];
    char c1, c2;
    cin >> c1;
    cin >> c2;
    cin.ignore(2, '\n');
    cin.getline(S, 250);
    for (int i=0; i<strlen(S); i++) {
        if (S[i] == c1) {
            S[i] = c2;
        } else if (S[i] == c2) {
            S[i] = c1;
        }
    }
    cout << S;
    return 0;
}
