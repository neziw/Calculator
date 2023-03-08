#include <iostream>

using namespace std;

int main()
{
    char _operator;
    double num, num2;
    
    cout << "Provide first number: ";
    cin >> num;

    cout << "Provide second number: ";
    cin >> num2;

    cout << "Provide operator: ";
    cin >> _operator;

    switch (_operator)
    {
        case '+':
            cout << num << " + " << num2 << " = " << num + num2;
            break;
        case '-':
            cout << num << " - " << num2 << " = " << num - num2;
            break;
        case '*':
            cout << num << " * " << num2 << " = " << num * num2;
            break;
        case '/':
            cout << num << " / " << num2 << " = " << num / num2;
            break;
        default:
            cout << "Invalid operator provided";
    }

    return 0;
}