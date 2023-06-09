#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int strsize;

char* modify(char cstring[], int strsize) {
    char result[strlen(cstring)];
    for (int i=0; i<strlen(cstring); i++) {
        for (int j=0; j<strlen(cstring); j++) {
            if (!isspace(cstring[j])) {
                result[i] = cstring[j];
            }
        }
    }
    strsize = strlen(result);
    return result;
}

int main()
{
    char S[100000] = "geeks for geeks";
    for (int i=0; i<strsize; i++) {
        cout << modify(S, strsize)[i];
    }
    return 0;
}
