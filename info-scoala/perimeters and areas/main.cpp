#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float width,height,diagonal1,diagonal2,side1,side2,side3,input2,input3,input4,result;
    char input1;
    cout << "What shape do you want to calculate?" << endl;
    cout << "(a)Square\n(b)Rectangle\n(c)Triangle\n(d)Circle\n(d)Trapez\n(e)Parallelogram\n(f)Rhombus" << endl;
    cout << "Type the corresponding letter: ";
    cin >> input1;
    cout << endl;
    if (input1 == "a") {
        cout << "Please input the side value: "
        cin >> input2;
        result = 4 * input2;
        cout << "The perimeter is: " << result << endl;
        result = input2 * input2;
        cout << "The area is: " << result << endl;
    }
    if (input1 == "b") {
        cout << "Please input the height: " << endl;
        cin >> input2;
        cout << "Please input the width: " << endl;
        cin >> input3;
        result = 2 * (input2+input3);
        cout << "The perimeter of the rectangle is: " << result;
        result = input2 * input3;
        cout << "The area of the rectangle is: " << result;
    }
    if (input1 == "c") {
        cout << "Please input the first side value: "
        cin << input2;
        cout << "Please input the second side value: "
        cin << input3;
        cout << "Please input the third side value: "
        cin << input4;
        result = input2 + input3 + input4;
        cout << "The perimeter of this triangle is: " << result;
        result = 0.25 * sqrt((input2+input3+input4) * (input3 + input4))
        cout <<
    }
    return 0;
}
