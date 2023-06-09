#include <iostream>

using namespace std;

int main()
{
    int i,j,ilength,alength,lettercopy;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string input;
    cin >> input;
    input[0] = 'm';
    for (i=0;i<ilength;i++) {
        for (j=0;j<alength;j++) {
            if (input[i] == 'z') {
                input[i] = 'a';
            }
//            if (input[i] == alphabet[j]) {
//                lettercopy = alphabet[j + 1];
//                input[i] = lettercopy;
//            }
        }
    }
    cout << input;
    return 0;
}
