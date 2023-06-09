#include <iostream>

using namespace std;

int main()
{
    int choice, radius, length, width, base, height, result;
    cout << "Geometry Calculator \n1. Calculate the Area of a Circle \n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle \n4. Quit \nEnter your choice (1-4): ";
    cin >> choice;
    if (choice < 0) {
        return 0;
    }
    switch (choice)
    {
    case 1:
        cout << "What's the radius of the circle? ";
        cin >> radius;
        result = 3.14159 * radius;
        cout << "The Area of the Circle is " << result << ".";
        break;
    case 2:
        cout << "What's the length of the rectangle? ";
        cin >> length;
        cout << "What's the width of the rectangle? ";
        cin >> width;
        result = length * width;
        cout << "The Area of the Rectangle is: " << result << ".";
        break;
    case 3:
        cout << "What is the base of the triangle? ";
        cin >> base;
        cout << "What is the height of the triangle? ";
        cin >> height;
        result = base * height * 0.5;
        cout << "The Area of the Triangle is: " << result << ".";
        break;
    case 4:
        break;
    default:
        break;
    }
    return 0;
}
