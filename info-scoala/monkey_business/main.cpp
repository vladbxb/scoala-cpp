#include <iostream>

using namespace std;

int main()
{
    int monkeys = 3;
    int days = 7;
    int sum = 0;
    int highest, lowest, highestPosition, lowestPosition;
    int zoo[monkeys][days];
    // values are bananas
    for (int i=0; i<monkeys; i++) {
        for (int j=0; j<days; j++) {
            cout << "Enter the value for monkey " << i + 1 << " and day " << j + 1 << ": ";
            cin >> zoo[i][j];
            sum += zoo[i][j];
        }
    }
    highest = zoo[0][0];
    lowest = zoo[0][0];
    for (int i=0; i<monkeys; i++) {
        for (int j=0; j<days; j++) {
            if (zoo[i][j] > highest) {
                highest = zoo[i][j];
                highestPosition = i;
            }
            if (zoo[i][j] < lowest) {
                lowest = zoo[i][j];
                lowestPosition = i;
            }
        }
    }
    cout << "\nThe average of monkey food eaten is: " << sum / (monkeys * days);
    cout << "\nThe most amount of food eaten is " << highest << " by monkey " << highestPosition + 1;
    cout << "\nThe smallest amount of food eaten is " << lowest << " by monkey " << lowestPosition + 1;
    return 0;
}
