#include <iostream>

using namespace std;

int getRadius();
int getSquared(int);

int main()
{
    const float PI = 3.1415;
    int radius;
    cout << "This program calculates the area of a circle.\nEnter the radius of the circle: ";
    radius = getRadius();
    cout << "The area is " << getSquared(radius) * PI;
    return 0;
}

int getRadius() {
    int n;
    cin >> n;
    return n;
}

int getSquared(int num) {
    return num*num;
}
