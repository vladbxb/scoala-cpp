#include <iostream>

using namespace std;

int numberOfEmployees() {
    int employees;
    cout << "How many employees are in the company? ";
    cin >> employees;
    return employees;
}

int daysAbsent(int employees) {
    int daysMissed;
    cout << "Enter the number of days each employee missed during the past year: ";
    cin >> daysMissed;
    return daysMissed * employees;
}

double averageDaysAbsent(double employees, double daysAbsentTotal) {
    return employees / daysAbsentTotal;
}

int main()
{
    int employees, totalDays;
    employees = numberOfEmployees();
    totalDays = daysAbsent(employees);
    averageDaysAbsent(employees, totalDays);
    return 0;
}
