#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    char vowels[] = "a,e,i,o,u";
    for (int i=0; i<strlen(s); i++) {
        if (!strchr(vowels,s[i]))
        {
            cout<<s[i];
        }
    }
    return 0;
}
