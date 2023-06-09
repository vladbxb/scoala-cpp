#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char alfabet[] = "abcdefghijklmnopqrstuvwxyz";
    char vocale[] = "aeiou";
    char consoane[] = "bcdfghjklmnpqrstvwxyz";
    char parola[50];
    cin.getline(parola, 50);
    int k;
    for (int i=0; i<strlen(parola); i++) {
        if (strchr(consoane, parola[i])) {
            int poz = parola[i] - 'a';
            while (!strchr(vocale, alfabet[poz])) {
                --poz;
            }
            parola[i] = alfabet[poz];
            /*for (int j=0; j<strlen(alfabet); j++) {
                if (alfabet[j] == parola[i]) {
                    k = j-1;
                    /*while (k > 0) {
                        if (!strchr(vocale, alfabet[k])) {
                            k--;
                        } else {
                            parola[i] = alfabet[k];
                            k=0;
                        }
                    }
                }*/
        }
    }
    cout << parola;
    return 0;
}
