#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char consonants[] = "B,C,D,F,G,J,K,L,M,N,P,Q,S,T,V,X,Z,H,R,W,Y";
    char vowels[] = "A,E,I,O,U";
    char S[100];
    int consonant_amount = 0;
    int vowel_amount = 0;
    int temp_consonant = 0;
    int temp_vowel = 0;
    bool BAD = false;
    cin.getline(S, 100);

    for (int i=0; i<strlen(S); i++) {
        S[i] = toupper(S[i]);
    }

    for (int i=0; i<strlen(S); i++) {
        if (S[i] == '?') {
            S[i] = S[i-1];
        }
    }

    for (int i=0; i<strlen(S); i++) {
        if (strchr(vowels, S[i])) {
            vowel_amount++;
        } else {
            temp_vowel = vowel_amount;
            vowel_amount = 0;
        }

        if (temp_vowel > 5) {
            BAD = true;
        }

        if (strchr(consonants, S[i])) {
            consonant_amount++;
        } else {
            temp_consonant = consonant_amount;
            consonant_amount = 0;
        }

        if (temp_consonant > 3) {
            BAD = true;
        }
    }

    if (BAD == true) {
        cout << "0";
    } else {
        cout << "1";
    }
    return 0;
}
