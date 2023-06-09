#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int countUpperCase (char text[100]) {
    int counter=0;
    for (int i=0; i<strlen(text); i++) {
        if (isupper(text[i])) {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int tests[3];
    for (int i=0; i<3; i++) {
        char S[100];
        cin.getline(S, 100);
        tests[i] = countUpperCase(S);
    }
    cout << tests[0] << "\n" << tests[1] << "\n" << tests[2];
    return 0;
}
