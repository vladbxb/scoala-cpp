#include <iostream>

using namespace std;

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int choice,num1,num2;
    cout << "What do you want to calculate?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\nEnter the number correspondent to the operation: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Input 2 values:\n";
        cin >> num1 >> num2;
        cout << sum(num1, num2);
        break;
    case 2:
        cout << "Input 2 values:\n";
        cin >> num1 >> num2;
        cout << sub(num1, num2);
        break;
    case 3:
        cout << "Input 2 values:\n";
        cin >> num1 >> num2;
        cout << mul(num1, num2);
        break;
    case 4:
        cout << "Input 2 values:\n";
        cin >> num1 >> num2;
        cout << div(num1, num2);
        break;
    default:
        cout << "Invalid choice.";
        break;
    }
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}
