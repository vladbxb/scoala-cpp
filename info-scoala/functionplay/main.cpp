#include <iostream>

using namespace std;

void firstName() {
    string firstname;
    cout << "What is your first name? \n";
    cin >> firstname;
}
void surName() {
    string surname;
    cout << "What is your surname? \n";
    cin >> surname;
}
void person_age() {
    int age;
    cout << "How old are you? \n";
    cin >> age;
}

int main()
{
    firstName();
    surName();
    person_age();
    return 0;
}
