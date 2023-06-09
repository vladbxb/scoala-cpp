#include <iostream>

using namespace std;

// ITS WORKING!!!! I'm so proud of this

int main()
{
    float number,percentage,result;
    cout<<"----*---- Sale calculator ----*----\n";
    cout<<"What number do you want to calculate?\n";
    cin>>number;

    cout<<"What percent of the number do you want to calculate?\n";
    cin>>percentage;
    if (percentage>100) {
        cout<<"Percentage needs to be less than 100!";
        return 0;
    }
    result= number - ((number * percentage)/100);

    cout<<"The result is: "<<result;
}
