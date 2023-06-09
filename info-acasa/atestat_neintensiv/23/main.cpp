#include <iostream>
#include <fstream>

using namespace std;

int prim(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ifstream fin("numere.in", ios::in);
    ofstream fout("numere.out", ios::out);
    int streak = 0, maxstreak = 0;
    int nr;
    fin >> nr;
    while (!fin.eof()) {
        if (prim(nr)) {
            streak++;
            if (maxstreak < streak) {
                maxstreak = streak;
            }
        } else {
            streak = 0;
        }
        fin >> nr;
    }
    fout << maxstreak;
    fin.close();
    fout.close();
    return 0;
}
