#include <iostream>

using namespace std;

int getPopulationSize() {
    int population;
    cout << "What is the starting size of the population? ";
    cin >> population;
    return population;
}

double getBirthRate() {
    double birth_rate;
    cout << "What is the annual birth rate? ";
    cin >> birth_rate;
    return birth_rate;
}

double getDeaths() {
    double death_rate;
    cout << "What is the annual death rate? ";
    cin >> death_rate;
    return death_rate;
}

void projectionTable(int population, double birthRate, double deathRate, int years) {
    int i;
    int projection;
    cout << "        Population projection table        \n  Year   Starting population   Projected Population\n----------------------------------------------------\n";
    for (i=1;i<=years;i++) {
        projection = population + birthRate*population - deathRate*population;
        if (i >= 10) {
            cout << "   " << i << "           " << population << "                   " << projection << "\n";
        } else {
            cout << "    " << i << "           " << population << "                   " << projection << "\n";
        }
        population = projection;
    }
}

int main()
{
    long long P,years;
    long double B,D;
    cout << "This program projects and displays the population at the end of each year.\n";
    P = getPopulationSize();
    B = getBirthRate();
    D = getDeaths();
    cout << "How many years to display? ";
    cin >> years;
    projectionTable(P,B,D,years);
    return 0;
}
