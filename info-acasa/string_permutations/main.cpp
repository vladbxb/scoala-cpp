#include <iostream>
#include <cstring>

using namespace std;

void permutate(char S[], int l, int r)
{
    if (l == r)
        cout << S << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(S[l], S[i]);
            permutate(S, l + 1, r);
            swap(S[l], S[i]);
        }
    }
}

int main()
{
    char S[] = "12345";
    permutate(S, 0, strlen(S));
    return 0;
}
