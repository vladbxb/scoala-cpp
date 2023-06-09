#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // I need to calculate a fat person's BMI value
    // Formula is BMI = weight * 703 / height2
    // The weight is measured in pounds and the height is measured in inches
    // The BMI should be in between 18.5 and 25, if it's bigger or lower, it's bad
    float weight, height, BMI, powerheight;
    cout << "Body Mass Index Calculator" << endl;
    cout << "Please input your weight in pounds: ";
    cin >> weight;
    cout << "Please input your height in inches: ";
    cin >> height;
    powerheight = pow(height, 2);
    BMI = weight * 803 / powerheight;
    cout << BMI << endl;
    if (BMI > 18.5 && BMI < 25) {
        cout << "You have optimal BMI for your weight and height.";
    } else if (BMI < 18.5) {
        cout << "You are underweight for your BMI.";
    } else {
        cout << "You are overweight for your BMI.";
    }
    return 0;
}
