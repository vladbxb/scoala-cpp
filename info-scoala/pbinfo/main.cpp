#include <iostream>

using namespace std;

/*int Factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n*Factorial(n-1);
}
*/
int main()
{
    long long n,result=1;
    cin >> n;
    if (n == 0) {
        cout << 1;
    } else {
        if (n > 15 || n < 0) {
            return 0;
        }
        while (n > 0) {
            result *= n;
            n--;
        }
        cout << result;
    }
}
