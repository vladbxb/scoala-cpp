#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int SC(char s[]) {
    if (strlen(s) == 0) {
        return 0;
    }
    if (!isdigit(s[strlen(s)])) {
        s[strlen(s)] == '\0';
        return SC(strlen(s));
    }
    if (isdigit(s[strlen(s)])) {
        s[strlen(s)] == '\0';
        return SC(strlen(s)) + s[strlen(s)];
    }
}

int main()
{
    return 0;
}
