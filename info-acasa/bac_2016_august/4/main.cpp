#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int nr, termeni_impari=0, termeni_determinati=0, temp;
    ifstream f("bac.txt", ios::in);
    f >> nr;
    while (!f.eof()) {
        if (nr % 2 != 0) {
            termeni_impari++;
        }
        if (termeni_impari == 3) {
            while (nr % 2 == 0) {
                temp = nr;
                f >> nr;
                if (nr % 2 == 0 && nr > temp) {
                    cout << nr << " ";
                    termeni_determinati++;
                }
                if (nr % 2 == 0 && nr < temp) {
                    cout << temp << " ";
                    termeni_determinati++;
                }
            }
        }
        f >> nr;
    }
    f.close();
    if (termeni_determinati == 0) {
        cout << "Nu exista";
    }
    return 0;
}
