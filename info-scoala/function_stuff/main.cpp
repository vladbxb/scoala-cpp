#include <iostream>

using namespace std;

void sum(int a, int b, int c) {
    cout << a + b + c;
}

void average (int a, int b, int c) {
    cout << (a + b + c)/3;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    sum(a,b,c);
    cout << " ";
    average(a,b,c);
    return 0;
}
