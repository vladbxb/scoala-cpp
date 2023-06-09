#include <iostream>

using namespace std;

void getRainfallValues(double arrayvalues[], int arraysize) {
    for (int i=1;i<=arraysize;i++) {

        // DON'T FORGET TO PUT BREAKS IN!!!!

        switch (i) {
        case 1:
            cout << "Input the rainfall for the 1st month: ";
            cin >> arrayvalues[i-1];
            break;
        case 2:
            cout << "Input the rainfall for the 2nd month: ";
            cin >> arrayvalues[i-1];
            break;
        case 3:
            cout << "Input the rainfall for the 3rd month: ";
            cin >> arrayvalues[i-1];
            break;
        default:
            cout << "Input the rainfall for the " << i << "th month: ";
            cin >> arrayvalues[i-1];
            break;
        }
        // cin >> arrayvalues[i-1];

        /*cout << "Input the rainfall for the " << i;
        if (i==1) {
            cout << "st";
        } else if (i==2) {
            cout << "nd";
        } else if (i==3) {
            cout << "rd";
        } else {
            cout << "th";
        }
        cout << " month: ";
        cin >> arrayvalues[i-1];
        */
    }
}

void printTotalRainfall(double arrayvalues[], int arraysize) {
    int sum=0;
    for (int i=0;i<arraysize;i++) {
        sum += arrayvalues[i];
    }
    cout << "The total rainfall for the year is: " << sum << ".\n";
}

void printAverageRainfall(double arrayvalues[], int arraysize) {
    int average=0;
    for (int i=0;i<arraysize;i++) {
        average += arrayvalues[i];
    }
    cout << "The average monthly rainfall is: " << average / arraysize << ".\n";
}

void printHighestRainfall(double arrayvalues[], int arraysize) {
    int highest=arrayvalues[0];
    int highestMonth;
    for (int i=0;i<arraysize;i++) {
        if (arrayvalues[i] > highest) {
            highest = arrayvalues[i];
            highestMonth = i + 1;
        }
    }
    cout << "The highest amount of rainfall of the year is: " << highest << " which is the " << highestMonth;
    switch (highestMonth) {
        case 1:
            cout << "st month.";
            break;
        case 2:
            cout << "nd month.";
            break;
        case 3:
            cout << "rd month.";
            break;
        default:
            cout << "th month.";
            break;
    }
    cout << "\n";
}

void printLowestRainfall(double arrayvalues[], int arraysize) {
    int lowest=arrayvalues[0];
    int lowestMonth;
    for (int i=0;i<arraysize;i++) {
        if (arrayvalues[i] < lowest) {
            lowest = arrayvalues[i];
            lowestMonth = i + 1;
        }
    }
    cout << "The lowest amount of rainfall of the year is: " << lowest << " which is the " << lowestMonth;
    switch (lowestMonth) {
        case 1:
            cout << "st month.";
            break;
        case 2:
            cout << "nd month.";
            break;
        case 3:
            cout << "rd month.";
            break;
        default:
            cout << "th month.";
            break;
    }
}

int main()
{
    int arraysize = 12;
    double dailyRainfall[arraysize];
    cout << "Rainfall calculator\n";
    getRainfallValues(dailyRainfall, arraysize);
    printTotalRainfall(dailyRainfall, arraysize);
    printAverageRainfall(dailyRainfall, arraysize);
    printHighestRainfall(dailyRainfall, arraysize);
    printLowestRainfall(dailyRainfall, arraysize);
    return 0;
}
