#include <iostream>

using namespace std;

int main()
{
    // This program prints out the fibonacci sequence, until the closest number to the inputted number.
    // Create the variables
    int i,j,input,stored_number1, stored_number2;
    int result[] = {};
    input = 10;
    j = 0;
    for (i = 0; i < input; i++) {
        stored_number1 = i;
        stored_number2 = i + stored_number1;
        result[j] = stored_number2;
        cout << result[j] << " ";
        j++;
    }
}
