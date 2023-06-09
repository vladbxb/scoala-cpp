#include <iostream>

using namespace std;

int square(int num) {
    return num * num;
}

int getRadius() {
    int rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    return rad;
}

int main()
{
    const double PI = 3.14159;
    int radius;
    cout << "This program calculates the area of a circle.\n";
    cout << "The area is " << PI * square(getRadius()) << ".";
    return 0;
}
