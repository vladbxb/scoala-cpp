#include <iostream>
#include <cmath>

using namespace std;

void sumcif(int num) {
    int i,digits=0,temp,fact=1,currentNum,result=0;
    temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    while (digits > 0) {
        //cout << (int) (num / (pow(10,(digits-1)))) % 10 << " ";
        currentNum = (int) (num / (pow(10,(digits-1)))) % 10;
        result += currentNum;
        digits--;
    }
    cout << result;
}

int main()
{
    int n;
    cin >> n;
    cout << sumcif(n);
    return 0;
}
