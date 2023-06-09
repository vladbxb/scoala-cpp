#include <iostream>
#include <cmath>

using namespace std;

void sumfactcif(int num) {
    int i,digits=0,temp,fact=1,currentNum,result=0;
    temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    while (digits > 0) {
        //cout << (int) (num / (pow(10,(digits-1)))) % 10 << " ";
        currentNum = (int) (num / (pow(10,(digits-1)))) % 10;
        for (i=1;i<=currentNum;i++) {
            fact *= i;
        }
        result += fact;
        fact = 1;
        digits--;
    }
    cout << result;
}

int main()
{
    int input;
    cin >> input;
    sumfactcif(input);
    return 0;
}
