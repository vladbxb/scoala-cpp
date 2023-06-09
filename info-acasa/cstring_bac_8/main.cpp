#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char S[255];
    char vocale[] = "aeiou";
    cin.getline(S, 255);
    bool found_bow = true;
    int bposition;
    int eposition;
    bool gasitVocala;
    for (int i=0; i<=strlen(S); i++) {
        if (strchr(vocale, S[i]) && found_bow == true) {
            bposition = i;
            gasitVocala = true;
        }
        found_bow = false;
        if (isspace(S[i]) || i == strlen(S)) {
            if (gasitVocala == true) {
                eposition = i-1;
                for (int j=eposition; j>=bposition; j--) {
                    cout << S[j];
                }
                gasitVocala = false;
            }
            found_bow = true;
        }
        if (!gasitVocala) {
            cout << S[i];
        }
    }
    return 0;
}
