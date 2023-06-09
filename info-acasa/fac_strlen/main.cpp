#include <iostream>

using namespace std;

int strlen(char *s) {
    if (*s != '\0') {
        return 1 + strlen(s + 1);
    }
    return 0;
}

/*void strcpy(char *s1, char *s2) {
    if (!(strlen(s1) < strlen(s2))) {
        for (int i=0; i<strlen(s2); i++) {
            if (*s1 != '\0' || *s2 != '\0') {
                *s1 = *s2 + i;
                s1 = *s1 + i;
            }
        }
    }
}*/

void strcpy(char *s1, char *s2) {
    int n = strlen(s2);
    for (int i = 0; i <= n; ++i) {
        s1[i] = s2[i]; // s[i] <=> *(s + i)
    }
}

char* strchr(char *s, char c) {
    for (int i=0; i<=strlen(s); i++) {
        if (s[i] == c) {
            for (int j=0; j<strlen(s) - i; j++) {

            }
        }
    }
}

int main()
{
    char S[100];
    cin.getline(S, 100);
    cout << strlen(S);
    char S1[100], S2[100];
    cin.getline(S2);
    strcpy(S1, S2);
    for (int i=0; i<strlen(S1); i++) {
        cout << S1[i];
    }
    return 0;
}
