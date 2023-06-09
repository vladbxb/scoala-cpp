#include <iostream>

using namespace std;

int sumcif(int n) {
    int temp = n;
    int digits = 0;
    int sum = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    for (int i=1; i<=digits; i++) {
        sum += n % (i * 10) / (i * 10);
    }
}

//2455643634

int main()
{
    cout << sumcif(241);
    return 0;
}
