#include <iostream>

using namespace std;

int main()
{
    int a,b,result;
    // ask user for two numbers
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (a>b) {
        cout << "a is greater than b" << endl;
    }
    else {
        cout << "b is greater than a" << endl;
    }
    return 0;
}
