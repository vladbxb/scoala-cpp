#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char S[20];
    char vocale[] = "aeiou";
    cin.getline(S, 20);
    for (int i=0; i<strlen(S); i++) {
        if (strchr(vocale, S[i])) {
            for (int j=0; j<strlen(S); j++) {
                if (S[j] != S[i]) {
                    cout << S[j];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
