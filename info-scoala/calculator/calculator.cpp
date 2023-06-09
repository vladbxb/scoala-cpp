#include <iostream>

using namespace std;

int main()
{
    int num1,num2, result;
    char operatorchar;
    cout << "Calculator" << endl;
    cout << "Select an operator: +, -, *, /" << endl;
    cin >> operatorchar;
    switch (operatorchar)
    {
    case '+':
        cout << "Input two operands: ";
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << "Result: " << result;
        break;
    case '-':
        cout << "Input two operands: ";
        cin >> num1 >> num2;
        result = num1 - num2;
        cout << "Result: " << result;
        break;
    case '*':
        cout << "Input two operands: ";
        cin >> num1 >> num2;
        result = num1 * num2;
        cout << "Result: " << result;
        break;
    case '/':
        cout << "Input two operands: ";
        cin >> num1 >> num2;
        result = num1 * num2;
        cout << "Result: " << result;
        break;
    default:
        cout << "Please input a valid option.";
        break;
    }
    return 0;
}
