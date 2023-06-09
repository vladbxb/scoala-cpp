#include <iostream>

using namespace std;

int main()
{
    int height,width,perimeter,area;
    cout << "What are the sizes of the rectangle? Input height, press enter, and then input the width\n";
    cin >> height >> width;
    perimeter = 2 * (height+width);
    area = height * width;
    cout << "The perimeter of this rectangle is " << perimeter << "." << endl;
    cout << "The area of this rectangle is " << area << ".";
    return 0;
}
