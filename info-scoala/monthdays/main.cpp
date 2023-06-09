#include <iostream>

using namespace std;

int main()
{
    int months = 12;
    int days[months] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    for (int i=0; i<months; i++) {
        cout << "Month " << i + 1 << " has: " << days[i] << " days.\n";
    }
}
