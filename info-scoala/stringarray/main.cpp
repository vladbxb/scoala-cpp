#include <iostream>

using namespace std;

int main()
{
    string planets[9] = {"Venus", "Jupiter", "Mars", "Earth", "Saturn", "Uranus", "Neptune", "Mercury", "Pluto"};
    cout << "These are the planets:\n";
    for (int i=0; i<9; i++) {
        cout << planets[i] << " ";
    }
    return 0;
}
