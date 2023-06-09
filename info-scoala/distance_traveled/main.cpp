#include <iostream>

using namespace std;

int main()
{
    int distance,speed,time,i;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    if (speed < 0) {
        return 0;
    }
    cout << "How many hours has it traveled? ";
    cin >> time;
    if (time <= 0) {
        return 0;
    }
    cout << "Hour Distance Traveled\n--------------------------------\n";
    for (distance=0,i=1;i<=time;i++) {
        distance = i * speed;
        cout << i << "      " << distance << endl;
    }
    return 0;
}
