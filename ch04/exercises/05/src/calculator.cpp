#include "std_lib_facilities.h"

double add(double a , double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double divide(double a, double b)
{
    return a/b;
}

double multiply(double a, double b)
{
    return a*b;
}

int main()
{
    cout << "Enter two numbers followed by an operator (+, -, *, /): ";
    double num1;
    double num2;
    char op;

    cin >> num1 >> num2 >> op;

    double result; 
    string operation;
    switch(op) {
        case '+':
            result = add(num1, num2);
            operation = "sum";
            break;
        case '-':
            result = subtract(num1, num2);
            operation = "difference";
            break;
        case '*':
            result = multiply(num1, num2);
            operation = "multiplication";
            break;
        case '/':
            result = divide(num1, num2);
            operation = "division";
            break;
        default:
            cout << "Unknown operator.\n";
            operation = "unknown";
            break;
    }

    if(operation != "unknown")
        cout << "The " << operation << " of " << num1 << " and " << num2 << " is " << result << '\n';
}