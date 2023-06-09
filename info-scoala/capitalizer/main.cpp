#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int found_bos;
    char sentence[100];
    int counter=0;
    cin.getline(sentence, 100);
    for (int i=0; i<strlen(sentence); i++) {
        if (found_bos != 0) {

        } else {
            if (isalpha(sentence[i])) {
                found_bos = i;
            }
        }
        if (ispunct(sentence[i])) {
            sentence[found_bos] = toupper(sentence[found_bos]);
            found_bos = 0;
        }
    }
    cout << sentence;
    return 0;
}
