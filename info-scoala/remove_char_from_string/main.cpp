#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char alphanumeric[100];
    cin.getline(alphanumeric, 100);
    for (int i=0; i<strlen(alphanumeric); i++) {
        if (isdigit(alphanumeric[i])) {
            cout << alphanumeric[i];
        }
    }
    return 0;
}
