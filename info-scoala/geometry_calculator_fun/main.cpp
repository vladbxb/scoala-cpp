#include <iostream>

using namespace std;

int circleArea();
int rectangleArea();
int triangleArea();

int main()
{
    int choice;
    cout << "Geometry Calculator\n1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit\nEnter your choice (1-4): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << circleArea();
        break;
    case 2:
        cout << rectangleArea();
        break;
    case 3:
        cout << triangleArea();
        break;
    case 4:
        return 0;
    default:
        cout << "Choose a number between 1-4.";
        return 0;
    }
    return 0;
}

int circleArea() {
    int r;
    const float PI = 3.1415;
    cout << "Enter the radius: ";
    cin >> r;
    return r * r * PI;
}

int rectangleArea() {
    int L,l;
    cout << "Input length: ";
    cin >> L;
    cout << "Input width: ";
    cin >> l;
    return L * l;
}

int triangleArea() {
    int base,height;
    cout << "Input the size of the base: ";
    cin >> base;
    cout << "Input the height: ";
    cin >> height;
    return base * height * 0.5;
}
