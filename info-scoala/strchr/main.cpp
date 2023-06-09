#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "ICHB Colentina";
    char c = 'C';

    if (strchr(str, c)) {
        cout << "The character " << c << " is present.";
    } else {
        cout << "The character " << c << " is not present.";
    }
    return 0;
}
